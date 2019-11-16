#pragma once

class MinecraftEventing : IMinecraftEventing {

    virtual void ~MinecraftEventing();
    virtual void ~MinecraftEventing();
    virtual void fireEventPackUpgradeAttempt(PackManifest const&, PackReport const&);
    virtual void init(Social::IUserManager &);
    virtual void _ZN17MinecraftEventing18getPlayerSessionIdB5cxx11Ev;
    virtual void getShouldHaveAchievementsEnabled(void);
    virtual void setShouldHaveAchievementsEnabled(bool);
    virtual void getAchievementsAlwaysEnabled(void);
    virtual void getPrimaryLocalUserId(void);
    virtual void forceSendEvents(void);
    virtual void getEventManager(void)const;
    virtual void updatePrimaryLocalUserId(unsigned int const&);
    virtual void updateIsLegacyPlayer(bool);
    virtual void updateIsTrial(bool)const;
    virtual void registerOptionsObserver(std::shared_ptr<Options>);
    virtual void addListener(std::unique_ptr<Social::Events::IEventListener, std::default_delete<Social::Events::IEventListener>>);
    virtual void fireEventStartClient(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    virtual void fireEventStartWorld(NetworkType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Social::MultiplayerServiceIdentifier);
    virtual void fireGlobalResourcePackCrashRecovery(PackInstance &, mce::UUID, int);
    virtual void fireServerConnectionEvent(ServerConnectionOutcome, unsigned int, double, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireServerConnectionAttemptEvent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireTextToSpeechToggled(bool, bool);
    virtual void fireEventClientIdCreated(int);
    virtual void fireEventFloatPropertyList(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, float>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, float>>> const&);
    virtual void fireEventHardwareInfo(void);
    virtual void fireEventOptionsUpdated(std::shared_ptr<Options>, InputMode, bool);
    virtual void fireEventChatSettingsUpdated(Player const*, std::vector<Social::Events::Property, std::allocator<Social::Events::Property>> const&)const;
    virtual void fireEventPerformanceMetrics(ProfilerLiteTelemetry const&);
    virtual void fireEventPlayerTravelled(Player *, float);
    virtual void fireEventPromotionNotificationClicked(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventVideoPlayed(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventRespondedToAcceptContent(ResourcePacksInfoData const&, bool);
    virtual void fireEventSignInToXboxLive(Social::XboxLiveUser const&, bool, SignInStage);
    virtual void fireEventSignOutOfXboxLive(Social::XboxLiveUser const&);
    virtual void fireEventAppSuspended(bool);
    virtual void fireEventAppPaused(void);
    virtual void fireEventAppUnpaused(void);
    virtual void fireEventAppResumed(void);
    virtual void fireEventSplitScreenUpdated(IClientInstance const&);
    virtual void fireEventScreenChanged(unsigned int const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::unordered_map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::hash<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::equal_to<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>> const&);
    virtual void fireEventPopupClosed(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    virtual void fireEventGameplayTipShown(int, bool, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventWorldImported(long, unsigned long);
    virtual void fireCurrentInputUpdated(IClientInstance const&);
    virtual void fireEventPackImportStarted(PackManifest const&);
    virtual void fireEventPackImportedCompleted(ResourcePack const*, PackManifest const&, bool, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventTreatmentPackApplied(PackManifest const&);
    virtual void fireEventPackPlayed(PackInstance const&, unsigned int);
    virtual void fireEventNewUserPackDetected(PackManifest const&, bool, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    virtual void fireEventPackHashChanged(PackManifest const&);
    virtual void fireEventTreatmentPackDownloaded(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    virtual void fireEventTreatmentPackRemoved(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    virtual void fireEventContentLogsInWorldSession(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned int, unsigned int);
    virtual void fireRealmConnectionEventStart(RealmConnectionFlow);
    virtual void fireRealmConnectionEventGenericLambdaCalled(RealmConnectionFlow, IMinecraftEventing::RealmConnectionLambda, IMinecraftEventing::RealmConnectionResult);
    virtual void fireEventCompoundCreatorCreated(int, int);
    virtual void fireEventElementConstructorUsed(int, int, ElementConstructorUseType);
    virtual void fireEventEntitySpawned(Player *, int, unsigned int);
    virtual void fireEventReducerBlockEntered(ItemDescriptor const&);
    virtual void fireEventRespawn(Player &, int);
    virtual void fireEventServerRespawnSearchTime(Player &, PlayerRespawnTelemetryData const&);
    virtual void firePackSettingsEvent(PackSettings const&, PackManifest const&);
    virtual void removeTestRunIdTag(void);
    virtual void removeTestTelemetryTag(void);
    virtual void setTestRunIdTag(int);
    virtual void setTestTelemetryTag(char const*);
    virtual void stopDebugEventLoggingForAllListeners(void);
    virtual void tick(void);
    virtual void updateEditionType(void);
    virtual void fireEventMultiplayerConnectionStateChanged(bool, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned int, unsigned int, unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventJoinCanceled(LoadingState);
    virtual void fireClubsEngagementEvent(ClubsEngagementAction, IMinecraftEventing::ClubsEngagementTargetType, char const*, Realms::RealmId, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    virtual void fireClubsOpenFeedScreenEvent(ClubsFeedScreenSource, Realms::RealmId, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    virtual void fireEventEntitlementListInfo(std::vector<ContentIdentity, std::allocator<ContentIdentity>> &, bool);
    virtual void fireEventFileTransmissionState(FileTransmissionDirection, IMinecraftEventing::FileTransmissionState, IMinecraftEventing::FileTransmissionType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned long, double);
    virtual void fireEventIncognitoFailure(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventDeviceAccountFailure(SignInStage, IMinecraftEventing::DeviceAccountFailurePhase, unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventDeviceAccountSuccess(bool, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventStorage(int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventStoreOfferPurchaseAttempt(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Offer &);
    virtual void fireEventStoreOfferPurchaseResolved(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, PurchaseStage, IMinecraftEventing::PurchaseResult, Offer &, PurchasePath);
    virtual void fireEventStoreOfferPurchaseFailure(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned short, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, PurchaseInfo const&);
    virtual void fireEventPurchaseResolved(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, StoreType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, IMinecraftEventing::PurchaseStage, IMinecraftEventing::PurchaseResult, PurchasePath);
    virtual void fireEventPurchaseFailureDetails(int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventTreatmentsCleared(void);
    virtual void fireEventTreatmentsSet(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&);
    virtual void fireEventSetMultiplayerCorrelationId(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventGameSessionStart(Player *, IClientInstance &, Level &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    virtual void fireEventInGamePlatformFriendsRetrieved(std::vector<Social::PlatformUserProfileData, std::allocator<Social::PlatformUserProfileData>> &);
    virtual void prepEventSearchCatalogRequest(SearchRequestTelemetry const&);
    virtual void fireEventSearchCatalogRequest(SearchRequestTelemetry const&);
    virtual void fireEventArmorStandItemEquipped(ArmorStand const&, ItemDescriptor const&);
    virtual void fireEventArmorStandPosed(ArmorStand const&);
    virtual void fireEventPlayerBounced(Player *, Block const&, int);
    virtual void fireEventSetValidForAchievements(Player *, bool);
    virtual void fireEventWorldLoaded(Player *, Level &, ResourcePackManager &, ResourcePacksInfoData &);
    virtual void fireMinecraftVersionLaunched(bool);
    virtual void fireMinecraftVersionInviteAccepted(bool, unsigned long);
    virtual void fireDayOneExperienceStateChanged(DayOneExperienceState, std::optional<unsigned int>, std::optional<unsigned long>);
    virtual void fireWorldConversionAttemptEvent(Legacy::WorldConversionReport const&);
    virtual void fireWorldConversionInitiatedEvent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireLegacyWorldUploadEvent(Legacy::WorldConversionReport const&, bool, WorldConversionError);
    virtual void fireEventAssertFailed(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &);
    virtual void fireChatUsedEvent(unsigned int, bool);
    virtual void fireEventJoinByCode(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventBlockPlacedByCommand(Block const&, int);
    virtual void fireEventEntityDanced(int, int, unsigned char);
    virtual void fireEventDwellerDied(Actor &, ActorDamageSource const&, bool);
    virtual void fireEventDwellerRemoved(Actor &, bool);
    virtual void fireEventScriptLoaded(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned long);
    virtual void fireEventScriptRan(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned long, bool, bool);
    virtual void fireEventDevConsoleOpen(void);
    virtual void fireEventDevConsoleCommand(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventNpcPropertiesUpdated(Actor &, bool);
    virtual void fireEventBoardTextUpdated(ChalkboardBlockActor &);
    virtual void fireEventCameraUsed(bool);
    virtual void fireEventPortfolioExported(int, int);
    virtual void fireQuickPlayEvent(void);
    virtual void fireLibraryButtonPressed(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireCourseButtonPressed(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireLessonActionTaken(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, EducationLessonAction);
    virtual void fireInAppCodeBuilderActivated(OpenCodeMethod);
    virtual void fireCodeCommandButtonPressed(void);
    virtual void fireIDESelected(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    virtual void fireEventEduResources(void)const;
    virtual void fireEventEduiOSPurchaseTransaction(TransactionStatus const&)const;
    virtual void fireEventEduOptionSet(Option const&)const;
    virtual void fireEventCodeBuilderClosed(void)const;
    virtual void fireEventEduServiceStatus(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, buffer_span<std::pair<gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>>>)const;
    virtual void fireEventWebviewDownload(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, WebviewDownloadInfo const&)const;
    virtual void fireEduServiceRequestFailed(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, buffer_span<std::pair<gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>>>)const;
    virtual void fireEventButtonPressed(gsl::basic_string_span<char const, -1l>, buffer_span<std::pair<gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>>>)const;
    virtual void fireEventWorldExported(long, unsigned long);
    virtual void fireEventControlRemappedByPlayer(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, RawInputType, int)const;
    virtual void fireEventDifficultySet(Difficulty, Difficulty);
    virtual void fireEventGameRulesUpdated(bool, bool, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventGameRulesUpdated(int, int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventGameRulesUpdated(float, float, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventDefaultGameTypeChanged(GameType, GameType);
    virtual void fireEventConnectionFailed(ConnectionFailureReason);
    virtual void fireEventOfferRated(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, int, int, double);
    virtual void fireEventNewContentCheckCompleted(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    virtual void fireEventHowToPlayTopicChanged(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, InputMode);
    virtual void fireEventApiInit(float, unsigned long);
    virtual void fireEventWorldFilesListed(unsigned long, unsigned long, unsigned long, unsigned long);
    virtual void fireEventLabTableCreated(int, int, int);
    virtual void fireEventPlayerMessageSay(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventPlayerMessageTell(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventPlayerMessageChat(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventPlayerMessageMe(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventPlayerMessageTitle(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventRealmShared(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ShareMode const&, Realms::RealmId const&);
    virtual void fireEventRealmMemberlistCleared(Realms::RealmId const&, int const&);
    virtual void fireEventRealmUrlGenerated(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Realms::RealmId const&);
    virtual void fireEventStructureExport(glTFExportData const&, ExportOutcome, IMinecraftEventing::ExportStage)const;
    virtual void fireEventContentShared(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ShareMode const&);
    virtual void fireEventStorageReport(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventStackLoaded(StackStats const&);
    virtual void fireEventUnknownBlockReceived(NewBlockID const&, unsigned short);
    virtual void fireEventSignInEdu(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ADRole, EduSignInStage, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>> const&);
    virtual void fireEventPopupFiredEdu(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ActiveDirectoryAction);
    virtual void fireEventAppConfigurationChanged(void);
    virtual void fireEventPurchaseGameAttempt(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventTrialDeviceIdCorrelation(long, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, long, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventPushNotificationPermission(bool, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventPushNotificationReceived(PushNotificationMessage const&);
    virtual void fireEventPushNotificationOpened(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventUploadSkin(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventLicenseCheck(bool, ExtraLicenseData &);
    virtual void fireEventStorePromotionNotification(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventWorldGenerated(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, LevelSettings const&, bool);
    virtual void fireEventExperimentalGameplay(bool, bool);
    virtual void fireEventCopyWorldEducationEnabled(void);
    virtual void fireEventStoreOfferClicked(int, int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventStoreSearch(StoreSearchTelemetryData const&);
    virtual void fireEventSearchItemSelected(int, int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, int);
    virtual void fireEventUgcDownloadStarted(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventUgcDownloadCompleted(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    virtual void fireEventPurchaseAttempt(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, StoreType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireRealmConnectionEventRealmAPIRequest(RealmConnectionFlow);
    virtual void fireRealmConnectionEventRealmAPIResponse(RealmConnectionFlow, int);
    virtual void onUserSignIn(Social::XboxLiveUser &);
    virtual void onUserSignOut(Social::XboxLiveUser &);
    virtual void _ZN17MinecraftEventing12getSessionIdB5cxx11Ev;
    virtual void fireEventChunkLoaded(LevelChunk &);
    virtual void fireEventChunkUnloaded(LevelChunk &);
    virtual void fireEventChunkChanged(LevelChunk &);
    virtual void fireEventMultiplayerSessionUpdate(Level const*);
    virtual void fireEventLevelDestruct(void);
    virtual void flagEventDeepLink(void);
    virtual void flagEventPlayerGameTypeDefault(bool);
    virtual void fireEventLevelDatLoadFailed(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    virtual void fireEventPersonaItemPreviewed(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned int, unsigned int, PromotionType, bool, IMinecraftEventing::StoreType);
    virtual void fireEventPersonaSkinChanged(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    virtual void fireEventPersonaAvatarUpdated(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&, std::vector const&<bool, std::allocator<bool>>, std::vector const&<bool, std::allocator<bool>>, bool, bool, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    virtual void fireEventPersonaAvatarsListed(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&);
    virtual void fireEventPersonaFailedUnknownPieceType(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventPersonaFailedPieceNotInRepo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventPersonaFailedTopBottomMissing(bool, bool);
    virtual void firePersonaMissingCapeTextureNameErrorEvent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void firePersonaMissingCapeTextureFileErrorEvent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void firePersonaInitalizationCompleteEvent(unsigned int);
    virtual void firePersonaNumberOfCategories(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventPersonaGeneralError(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventWorldHistoryPackSourceMissingDuringUpgrade(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireEventPersonaLoadingPieces(unsigned int, double);
    virtual void fireEventPersonaFailedPieceNotOwned(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    virtual void fireEventFixedMarketplaceWorldUsingV2VillagersToUseV1(void);
    virtual void fireEventAccountTransferStateChanged(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, TransferState, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fireStructureBlockAction(StructureBlockActionType, StructureEditorData const&, StructureTelemetryClientData const*);
    virtual void fireStructureBlockRedstoneActivated(StructureBlockActionType, StructureEditorData const&, StructureTelemetryClientData const*);
    virtual void fireStructureBlockLoadedInUnloadedChunks(unsigned int, BlockPos const&, BlockPos const&);
    virtual void ;
    virtual void `non-virtual thunk to'~MinecraftEventing();
    virtual void `non-virtual thunk to'~MinecraftEventing();
    virtual void Core::Observer<WebviewObserver, Core::SingleThreadedLock>::_onSubjectDestroyed(void);
    virtual void WebviewObserver::onLoadingBegin(void);
    virtual void WebviewObserver::onLoadingEnd(void);
    virtual void WebviewObserver::onError(WebviewError const&);
    virtual void IWebviewTelemetry::onDownloadBegin(WebviewDownloadInfo const&);
    virtual void WebviewObserver::onDownloadUpdate(WebviewDownloadInfo const&);
    virtual void IWebviewTelemetry::onDownloadComplete(WebviewDownloadInfo const&);
    virtual void IWebviewTelemetry::onDownloadCanceled(WebviewDownloadInfo const&);
    virtual void WebviewObserver::onMessageRecieved(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
}
