#pragma once

#include "../LevelChunkFinalDeleter"
#include "../../../unmapped/Dimension"
#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../LevelChunk"
#include "../../util/BlockPos"
#include "../../util/ChunkPos"


class ChunkSource {

public:
    virtual ChunkSource::~ChunkSource()
    virtual void shutdown();
    virtual bool isShutdownDone();
    virtual void getExistingChunk(ChunkPos const&);
    virtual void getRandomChunk(Random &);
    virtual void createNewChunk(ChunkPos const&, ChunkSource::LoadMode);
    virtual void getOrLoadChunk(ChunkPos const&, ChunkSource::LoadMode);
    virtual void postProcess(ChunkViewSource &);
    virtual void checkAndReplaceChunk(ChunkViewSource &, LevelChunk &);
    virtual void loadChunk(LevelChunk &, bool);
    virtual void postProcessMobsAt(BlockSource *, int, int, Random &);
    virtual void saveLiveChunk(LevelChunk &);
    virtual void hintDiscardBatchBegin();
    virtual void hintDiscardBatchEnd();
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);
    virtual void compact();
    virtual void flushPendingWrites();
    virtual bool isWithinWorldLimit(ChunkPos const&)const;
    virtual void getChunkMap();
    virtual void getStorage()const;
    virtual void clearDeletedEntities();

    void createEmptyView(ChunkSource::LoadMode, bool, std::function<void ()(buffer_span_mut<std::shared_ptr<LevelChunk>>, buffer_span<unsigned int>)>);
    void fireChunkLoaded(LevelChunk &);
    void checkAndLaunchChunkGenerationTasks(bool);
    void _hasTooManyChunksPendingDelete()const;
    void _spawnChunkGenerationTasks(int, bool);
    void _checkAndDispatchTaskForLevelChunk(ChunkPos const&, bool);
    void _dispatchTaskForLevelChunk(std::shared_ptr<LevelChunk> &, std::shared_ptr<ChunkViewSource>, bool);
    void _launchGenerationTask(std::shared_ptr<LevelChunk> &, bool);
    void _launchPostProcessingTask(std::shared_ptr<LevelChunk> &, std::shared_ptr<ChunkViewSource>, bool);
    void _launchReplacementDataTask(std::shared_ptr<LevelChunk> &, std::shared_ptr<ChunkViewSource>, bool);
    void _launchLightingTask(std::shared_ptr<LevelChunk> &, std::shared_ptr<ChunkViewSource>, bool);
    void getDimension()const;
    void _loadChunkTask(LevelChunk &);
    void _decrementTaskCountAndLaunchNewTasksFromTask();
    void _checkForUnblockingChunks(LevelChunk &);
    void _postProcessingTask(LevelChunk &, std::shared_ptr<ChunkViewSource>);
    void _checkForReplacementDataTask(LevelChunk &, std::shared_ptr<ChunkViewSource>);
    void _lightingTask(std::shared_ptr<LevelChunk>, std::shared_ptr<ChunkViewSource>);
    void _checkSpecificLevelChunkForUnblocking(std::shared_ptr<LevelChunk>, std::shared_ptr<LevelChunkGridAreaElement<std::weak_ptr<LevelChunk>>>);
    void _checkLevelChunkForPostProcessing(std::shared_ptr<LevelChunk>, std::shared_ptr<LevelChunkGridAreaElement<std::weak_ptr<LevelChunk>>>);
    void _checkLevelChunkForNextStage(std::shared_ptr<LevelChunk>, std::shared_ptr<LevelChunkGridAreaElement<std::weak_ptr<LevelChunk>>>, ChunkState);
    void _chunkAtStage(std::weak_ptr<LevelChunk>, ChunkState);
    ChunkSource(Dimension *, int);
    ChunkSource(ChunkSource&);
    void getChunkSide()const;
    ChunkSource(std::unique_ptr<ChunkSource, std::default_delete<ChunkSource>>);
    void getLevel()const;
    void _freeChunkGenerationGridMap(ChunkPos const&);
    void getParent()const;
    void getAvailableChunk(ChunkPos const&);
    void getGeneratedChunk(ChunkPos const&);
    void getAvailableChunkAt(BlockPos const&);
};
