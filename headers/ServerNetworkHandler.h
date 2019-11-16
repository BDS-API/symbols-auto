#pragma once

class ServerNetworkHandler : NetEventCallback, LevelListener, Social::MultiplayerServiceObserver, Social::XboxLiveUserObserver {

    virtual void onPlayerReady(Player &);
    virtual void ~ServerNetworkHandler();
    virtual void ~ServerNetworkHandler();
    virtual void onConnect(NetworkIdentifier const&);
    virtual void onUnableToConnect(void);
    virtual void onTick(void);
    virtual void onStoreOfferReceive(bool, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void onDisconnect(NetworkIdentifier const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void allowIncomingPacketId(NetworkIdentifier const&, MinecraftPacketIds);
    virtual void onWebsocketRequest(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::function<void ()(void)>);
    virtual void onTransferRequest(NetworkIdentifier const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    virtual void handle(NetworkIdentifier const&, DisconnectPacket const&);
    virtual void handle(NetworkIdentifier const&, EmotePacket const&);
    virtual void handle(NetworkIdentifier const&, LoginPacket const&);
    virtual void handle(NetworkIdentifier const&, SubClientLoginPacket const&);
    virtual void handle(NetworkIdentifier const&, ClientToServerHandshakePacket const&);
    virtual void handle(NetworkIdentifier const&, ServerToClientHandshakePacket const&);
    virtual void handle(NetworkIdentifier const&, ResourcePacksInfoPacket const&);
    virtual void handle(NetworkIdentifier const&, ResourcePackStackPacket const&);
    virtual void handle(NetworkIdentifier const&, ResourcePackClientResponsePacket const&);
    virtual void handle(NetworkIdentifier const&, PlayStatusPacket const&);
    virtual void handle(NetworkIdentifier const&, SetTimePacket const&);
    virtual void handle(NetworkIdentifier const&, TextPacket const&);
    virtual void handle(NetworkIdentifier const&, StartGamePacket const&);
    virtual void handle(NetworkIdentifier const&, AddItemActorPacket const&);
    virtual void handle(NetworkIdentifier const&, AddPaintingPacket const&);
    virtual void handle(NetworkIdentifier const&, TakeItemActorPacket const&);
    virtual void handle(NetworkIdentifier const&, AddActorPacket const&);
    virtual void handle(NetworkIdentifier const&, AddEntityPacket const&);
    virtual void handle(NetworkIdentifier const&, AddMobPacket const&);
    virtual void handle(NetworkIdentifier const&, AddPlayerPacket const&);
    virtual void handle(NetworkIdentifier const&, RemoveActorPacket const&);
    virtual void handle(NetworkIdentifier const&, RemoveEntityPacket const&);
    virtual void handle(NetworkIdentifier const&, MoveActorAbsolutePacket const&);
    virtual void handle(NetworkIdentifier const&, MoveActorDeltaPacket const&);
    virtual void handle(NetworkIdentifier const&, MovePlayerPacket const&);
    virtual void handle(NetworkIdentifier const&, RiderJumpPacket const&);
    virtual void handle(NetworkIdentifier const&, SetPlayerGameTypePacket const&);
    virtual void handle(NetworkIdentifier const&, SetDefaultGameTypePacket const&);
    virtual void handle(NetworkIdentifier const&, std::shared_ptr<UpdateBlockPacket>);
    virtual void handle(NetworkIdentifier const&, std::shared_ptr<UpdateBlockSyncedPacket>);
    virtual void handle(NetworkIdentifier const&, SpawnParticleEffectPacket const&);
    virtual void handle(NetworkIdentifier const&, LevelSoundEventPacket const&);
    virtual void handle(NetworkIdentifier const&, LevelSoundEventPacketV1 const&);
    virtual void handle(NetworkIdentifier const&, LevelSoundEventPacketV2 const&);
    virtual void handle(NetworkIdentifier const&, LevelEventPacket const&);
    virtual void handle(NetworkIdentifier const&, LevelEventGenericPacket const&);
    virtual void handle(NetworkIdentifier const&, BlockEventPacket const&);
    virtual void handle(NetworkIdentifier const&, BlockPickRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, ActorPickRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, GuiDataPickItemPacket const&);
    virtual void handle(NetworkIdentifier const&, ActorEventPacket const&);
    virtual void handle(NetworkIdentifier const&, MobEffectPacket const&);
    virtual void handle(NetworkIdentifier const&, MobEquipmentPacket const&);
    virtual void handle(NetworkIdentifier const&, MobArmorEquipmentPacket const&);
    virtual void handle(NetworkIdentifier const&, SetActorDataPacket const&);
    virtual void handle(NetworkIdentifier const&, SetActorMotionPacket const&);
    virtual void handle(NetworkIdentifier const&, SetHealthPacket const&);
    virtual void handle(NetworkIdentifier const&, SetActorLinkPacket const&);
    virtual void handle(NetworkIdentifier const&, SetSpawnPositionPacket const&);
    virtual void handle(NetworkIdentifier const&, InteractPacket const&);
    virtual void handle(NetworkIdentifier const&, PlayerActionPacket const&);
    virtual void handle(NetworkIdentifier const&, ActorFallPacket const&);
    virtual void handle(NetworkIdentifier const&, HurtArmorPacket const&);
    virtual void handle(NetworkIdentifier const&, ItemFrameDropItemPacket const&);
    virtual void handle(NetworkIdentifier const&, ContainerOpenPacket const&);
    virtual void handle(NetworkIdentifier const&, ContainerClosePacket const&);
    virtual void handle(NetworkIdentifier const&, ContainerSetDataPacket const&);
    virtual void handle(NetworkIdentifier const&, PlayerHotbarPacket const&);
    virtual void handle(NetworkIdentifier const&, InventoryContentPacket const&);
    virtual void handle(NetworkIdentifier const&, InventorySlotPacket const&);
    virtual void handle(NetworkIdentifier const&, CraftingDataPacket const&);
    virtual void handle(NetworkIdentifier const&, CraftingEventPacket const&);
    virtual void handle(NetworkIdentifier const&, AdventureSettingsPacket const&);
    virtual void handle(NetworkIdentifier const&, AnimatePacket const&);
    virtual void handle(NetworkIdentifier const&, std::shared_ptr<BlockActorDataPacket>);
    virtual void handle(NetworkIdentifier const&, PlayerAuthInputPacket const&);
    virtual void handle(NetworkIdentifier const&, PlayerInputPacket const&);
    virtual void handle(NetworkIdentifier const&, std::shared_ptr<LevelChunkPacket>);
    virtual void handle(NetworkIdentifier const&, ClientCacheBlobStatusPacket const&);
    virtual void handle(NetworkIdentifier const&, std::shared_ptr<ClientCacheMissResponsePacket>);
    virtual void handle(NetworkIdentifier const&, SetCommandsEnabledPacket const&);
    virtual void handle(NetworkIdentifier const&, SetDifficultyPacket const&);
    virtual void handle(NetworkIdentifier const&, SimpleEventPacket const&);
    virtual void handle(NetworkIdentifier const&, ChangeDimensionPacket const&);
    virtual void handle(NetworkIdentifier const&, UpdateAttributesPacket const&);
    virtual void handle(NetworkIdentifier const&, PlayerListPacket const&);
    virtual void handle(NetworkIdentifier const&, EventPacket const&);
    virtual void handle(NetworkIdentifier const&, SpawnExperienceOrbPacket const&);
    virtual void handle(NetworkIdentifier const&, ClientboundMapItemDataPacket const&);
    virtual void handle(NetworkIdentifier const&, ClientCacheStatusPacket const&);
    virtual void handle(NetworkIdentifier const&, RequestChunkRadiusPacket const&);
    virtual void handle(NetworkIdentifier const&, MapCreateLockedCopyPacket const&);
    virtual void handle(NetworkIdentifier const&, MapInfoRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, ChunkRadiusUpdatedPacket const&);
    virtual void handle(NetworkIdentifier const&, BossEventPacket const&);
    virtual void handle(NetworkIdentifier const&, UpdateTradePacket const&);
    virtual void handle(NetworkIdentifier const&, UpdateEquipPacket const&);
    virtual void handle(NetworkIdentifier const&, AvailableCommandsPacket const&);
    virtual void handle(NetworkIdentifier const&, CommandRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, CommandOutputPacket const&);
    virtual void handle(NetworkIdentifier const&, CommandBlockUpdatePacket const&);
    virtual void handle(NetworkIdentifier const&, CompletedUsingItemPacket const&);
    virtual void handle(NetworkIdentifier const&, CameraPacket const&);
    virtual void handle(NetworkIdentifier const&, InventoryActionPacket const&);
    virtual void handle(NetworkIdentifier const&, GameRulesChangedPacket const&);
    virtual void handle(NetworkIdentifier const&, ResourcePackDataInfoPacket const&);
    virtual void handle(NetworkIdentifier const&, ResourcePackChunkDataPacket const&);
    virtual void handle(NetworkIdentifier const&, ResourcePackChunkRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, NetworkChunkPublisherUpdatePacket const&);
    virtual void handle(NetworkIdentifier const&, StructureBlockUpdatePacket const&);
    virtual void handle(NetworkIdentifier const&, StructureTemplateDataRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, StructureTemplateDataResponsePacket const&);
    virtual void handle(NetworkIdentifier const&, TransferPacket const&);
    virtual void handle(NetworkIdentifier const&, PlaySoundPacket const&);
    virtual void handle(NetworkIdentifier const&, StopSoundPacket const&);
    virtual void handle(NetworkIdentifier const&, SetTitlePacket const&);
    virtual void handle(NetworkIdentifier const&, InventoryTransactionPacket const&);
    virtual void handle(NetworkIdentifier const&, AddBehaviorTreePacket const&);
    virtual void handle(NetworkIdentifier const&, ShowStoreOfferPacket const&);
    virtual void handle(NetworkIdentifier const&, PurchaseReceiptPacket const&);
    virtual void handle(NetworkIdentifier const&, RemoveObjectivePacket const&);
    virtual void handle(NetworkIdentifier const&, SetDisplayObjectivePacket const&);
    virtual void handle(NetworkIdentifier const&, AutomationClientConnectPacket const&);
    virtual void handle(NetworkIdentifier const&, VideoStreamConnectPacket const&);
    virtual void handle(NetworkIdentifier const&, ModalFormRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, ModalFormResponsePacket const&);
    virtual void handle(NetworkIdentifier const&, OnScreenTextureAnimationPacket const&);
    virtual void handle(NetworkIdentifier const&, ServerSettingsRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, ServerSettingsResponsePacket const&);
    virtual void handle(NetworkIdentifier const&, ShowProfilePacket const&);
    virtual void handle(NetworkIdentifier const&, SetScorePacket const&);
    virtual void handle(NetworkIdentifier const&, SetScoreboardIdentityPacket const&);
    virtual void handle(NetworkIdentifier const&, TickSyncPacket const&);
    virtual void handle(NetworkIdentifier const&, UpdateSoftEnumPacket const&);
    virtual void handle(NetworkIdentifier const&, AvailableActorIdentifiersPacket const&);
    virtual void handle(NetworkIdentifier const&, UpdateBlockPropertiesPacket const&);
    virtual void handle(NetworkIdentifier const&, RespawnPacket const&);
    virtual void handle(NetworkIdentifier const&, ShowCreditsPacket const&);
    virtual void handle(NetworkIdentifier const&, PlayerSkinPacket const&);
    virtual void handle(NetworkIdentifier const&, SetLastHurtByPacket const&);
    virtual void handle(NetworkIdentifier const&, BookAddPagePacket const&);
    virtual void handle(NetworkIdentifier const&, BookDeletePagePacket const&);
    virtual void handle(NetworkIdentifier const&, LecternUpdatePacket const&);
    virtual void handle(NetworkIdentifier const&, BookEditPacket const&);
    virtual void handle(NetworkIdentifier const&, BookSignPacket const&);
    virtual void handle(NetworkIdentifier const&, BookSwapPagesPacket const&);
    virtual void handle(NetworkIdentifier const&, NpcRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, PhotoTransferPacket const&);
    virtual void handle(NetworkIdentifier const&, LabTablePacket const&);
    virtual void handle(NetworkIdentifier const&, NetworkSettingsPacket const&);
    virtual void handle(NetworkIdentifier const&, NetworkStackLatencyPacket const&);
    virtual void handle(NetworkIdentifier const&, SetLocalPlayerAsInitializedPacket const&);
    virtual void handle(NetworkIdentifier const&, ScriptCustomEventPacket const&);
    virtual void handle(NetworkIdentifier const&, BiomeDefinitionListPacket const&);
    virtual void handle(NetworkIdentifier const&, EducationSettingsPacket const&);
    virtual void handle(NetworkIdentifier const&, MultiplayerSettingsPacket const&);
    virtual void handle(NetworkIdentifier const&, SettingsCommandPacket const&);
    virtual void handle(NetworkIdentifier const&, AnvilDamagePacket const&);
    virtual void onInvalidPlayerJoinedLobby(mce::UUID const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void onXboxUserBlocked(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void onXboxUserUnblocked(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void sendServerLegacyParticle(ParticleType, Vec3 const&, Vec3 const&, int);
    virtual void ;
    virtual void `non-virtual thunk to'~ServerNetworkHandler();
    virtual void `non-virtual thunk to'~ServerNetworkHandler();
    virtual void BlockSourceListener::onSourceCreated(BlockSource &);
    virtual void BlockSourceListener::onSourceDestroyed(BlockSource &);
    virtual void BlockSourceListener::onAreaChanged(BlockSource &, BlockPos const&, BlockPos const&);
    virtual void BlockSourceListener::onBlockChanged(BlockSource &, BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*);
    virtual void BlockSourceListener::onBrightnessChanged(BlockSource &, BlockPos const&);
    virtual void BlockSourceListener::onBlockEntityChanged(BlockSource &, BlockActor &);
    virtual void BlockSourceListener::onBlockEntityAboutToBeRemoved(BlockSource &, std::shared_ptr<BlockActor>);
    virtual void BlockSourceListener::onEntityChanged(BlockSource &, Actor &);
    virtual void BlockSourceListener::onBlockEvent(BlockSource &, int, int, int, int, int);
    virtual void allChanged(void);
    virtual void addParticle(ParticleType, Vec3 const&, Vec3 const&, int, CompoundTag const*, bool);
    virtual void `non-virtual thunk to'sendServerLegacyParticle(ParticleType, Vec3 const&, Vec3 const&, int);
    virtual void addParticleEffect(HashedString const&, Vec3 const&, MolangVariableMap const&);
    virtual void addParticleEffect(HashedString const&, Actor const&, HashedString const&, Vec3 const&, MolangVariableMap const&);
    virtual void addTerrainParticleEffect(BlockPos const&, Block const&, Vec3 const&, float, float, float);
    virtual void addBreakingItemParticleEffect(Vec3 const&, ParticleType, TextureUVCoordinateSet const&, bool);
    virtual void playMusic(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Vec3 const&, float, float);
    virtual void playStreamingMusic(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, int, int);
    virtual void onEntityAdded(Actor &);
    virtual void onEntityRemoved(Actor &);
    virtual void onNewChunk(BlockSource &, LevelChunk &);
    virtual void onNewChunkFor(Player &, LevelChunk &);
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onChunkUnloaded(LevelChunk &);
    virtual void onLevelDestruction(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void levelEvent(LevelEvent, Vec3 const&, int);
    virtual void levelEvent(LevelEvent, CompoundTag const&);
    virtual void levelSoundEvent(LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool);
    virtual void levelSoundEvent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Vec3 const&, float, float);
    virtual void stopSoundEvent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void stopAllSounds(void);
    virtual void takePicture(cg::ImageBuffer &, Actor *, Actor *, ScreenshotOptions &);
    virtual void playerListChanged(void);
    virtual void ;
    virtual void `non-virtual thunk to'~ServerNetworkHandler();
    virtual void `non-virtual thunk to'~ServerNetworkHandler();
    virtual void Core::Observer<Social::MultiplayerServiceObserver, Core::SingleThreadedLock>::_onSubjectDestroyed(void);
    virtual void `non-virtual thunk to'onInvalidPlayerJoinedLobby(mce::UUID const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void onUserDisconnectedBecauseConcurrentLogin(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void ;
    virtual void `non-virtual thunk to'~ServerNetworkHandler();
    virtual void `non-virtual thunk to'~ServerNetworkHandler();
    virtual void Core::Observer<Social::XboxLiveUserObserver, Core::SingleThreadedLock>::_onSubjectDestroyed(void);
    virtual void `non-virtual thunk to'onXboxUserBlocked(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void `non-virtual thunk to'onXboxUserUnblocked(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
}
