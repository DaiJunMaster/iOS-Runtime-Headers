/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCContainerScheduler : NSObject <APSConnectionDelegate, BRCLocalContainerDelegate> {
    BRCContainerMetadataSyncPersistedState *_containerMetadataPersistedState;
    struct _BRCOperation { Class x1; id x2; id x3; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x4; void*x5; unsigned char x6; void*x7; } *_containerMetadataSyncOperation;
    unsigned int _containerMetadataSyncState;
    BRCDeadlineToken *_containerMetadataSyncToken;
    NSString *_environmentName;
    NSObject<OS_dispatch_group> *_initialSyncDownGroup;
    NSDate *_lastPeriodicSyncDate;
    struct _BRCOperation { Class x1; id x2; id x3; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x4; void*x5; unsigned char x6; void*x7; } *_periodicSyncOperation;
    APSConnection *_pushConnection;
    NSObject<OS_dispatch_queue> *_pushQueue;
    NSObject<OS_dispatch_source> *_pushSource;
    NSData *_pushToken;
    BRCAccountSession *_session;
    unsigned int _sharedDBSyncState;
    struct _BRCOperation { Class x1; id x2; id x3; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x4; void*x5; unsigned char x6; void*x7; } *_sharedDatabaseSyncOperation;
    BRCDeadlineToken *_sharedDatabaseSyncToken;
    NSObject<OS_dispatch_group> *_syncGroup;
    BRCDeadlineScheduler *_syncScheduler;
    BRCSyncBudgetThrottle *_syncUpBudget;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *initialSyncDownGroup;
@property (nonatomic, readonly) BRCAccountSession *session;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *syncGroup;
@property (nonatomic, readonly) BRCDeadlineScheduler *syncScheduler;
@property (nonatomic, readonly) BRCSyncBudgetThrottle *syncUpBudget;

- (void).cxx_destruct;
- (void)_scheduleUpdatePushTopicsRegistration;
- (void)_syncScheduleForContainersMetadata;
- (void)_syncScheduleForSharedDatabase;
- (void)_unscheduleContainer:(id)arg1;
- (void)_updatePushTopicsRegistration;
- (void)close;
- (void)closeContainers:(id)arg1;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)containerDidBecomeBackground:(id)arg1;
- (void)containerDidBecomeForeground:(id)arg1;
- (void)didChangeSyncStatusForContainerMetadataForContainer:(id)arg1;
- (void)didInitialSyncDownForContainer:(id)arg1;
- (void)dumpToContext:(id)arg1;
- (id)initWithAccountSession:(id)arg1;
- (id)initialSyncDownGroup;
- (void)refreshPushRegistrationAfterAppsListChanged;
- (void)schedulePeriodicSyncIfNecessary;
- (void)scheduleSyncDownForContainerMetadata;
- (void)scheduleSyncDownForSharedDatabaseImmediately:(BOOL)arg1;
- (id)session;
- (void)setupWithRoot:(id)arg1;
- (id)syncGroup;
- (void)syncResume;
- (id)syncScheduler;
- (void)syncSuspend;
- (id)syncUpBudget;
- (void)willInitialSyncDownForContainer:(id)arg1;

@end