/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NRDevicePropertyObserver.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDNanoSyncStoreDelegate.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/HDDataObserver.h>
#import <libobjc.A.dylib/HDIDSMessageCenterDelegate.h>
#import <libobjc.A.dylib/HDPairedWatchBundleIdentifierProvider.h>
#import <libobjc.A.dylib/HDProcessStateObserver.h>

@protocol HDHealthDaemon, OS_dispatch_queue, OS_dispatch_source;
@class NSString, NSObject, HDIDSMessageCenter, HDNanoSyncStore, NRDevice, NSUUID, NSMutableArray, NSDate, NSMutableDictionary;

@interface HDNanoSyncManager : NSObject <NRDevicePropertyObserver, HDDiagnosticObject, HDHealthDaemonReadyObserver, HDNanoSyncStoreDelegate, HDDatabaseProtectedDataObserver, HDDataObserver, HDIDSMessageCenterDelegate, HDPairedWatchBundleIdentifierProvider, HDProcessStateObserver> {

	BOOL _isMaster;
	BOOL _isPairingActivated;
	BOOL _restoreDidAbort;
	BOOL _needsActivationOnUnlock;
	BOOL _needsResyncOnUnlock;
	NSString* _pairedWatchSourceBundleIdentifier;
	id<HDHealthDaemon> _healthDaemon;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _syncQueue;
	HDIDSMessageCenter* _messageCenter;
	long long _state;
	HDNanoSyncStore* _activeSyncStore;
	NRDevice* _activeNanoRegistryDevice;
	NSUUID* _restoreUUID;
	long long _restoreSequenceNumber;
	NSMutableArray* _activationCompletions;
	NSObject*<OS_dispatch_source> _activationTimer;
	NSObject*<OS_dispatch_source> _periodicSyncTimer;
	NSDate* _lastPeriodicSyncDate;
	NSMutableDictionary* _pendingAuthorizationRequestContexts;

}

@property (readonly) BOOL isMaster; 
@property (assign) BOOL isPairingActivated;                                                          //@synthesize isPairingActivated=_isPairingActivated - In the implementation block
@property (retain) NSString * pairedWatchSourceBundleIdentifier;                                     //@synthesize pairedWatchSourceBundleIdentifier=_pairedWatchSourceBundleIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<HDHealthDaemon> healthDaemon;                                 //@synthesize healthDaemon=_healthDaemon - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                                 //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,retain) HDIDSMessageCenter * messageCenter;                                     //@synthesize messageCenter=_messageCenter - In the implementation block
@property (assign,nonatomic) long long state;                                                        //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) HDNanoSyncStore * activeSyncStore;                                      //@synthesize activeSyncStore=_activeSyncStore - In the implementation block
@property (nonatomic,retain) NRDevice * activeNanoRegistryDevice;                                    //@synthesize activeNanoRegistryDevice=_activeNanoRegistryDevice - In the implementation block
@property (nonatomic,retain) NSUUID * restoreUUID;                                                   //@synthesize restoreUUID=_restoreUUID - In the implementation block
@property (assign,nonatomic) BOOL restoreDidAbort;                                                   //@synthesize restoreDidAbort=_restoreDidAbort - In the implementation block
@property (assign,nonatomic) long long restoreSequenceNumber;                                        //@synthesize restoreSequenceNumber=_restoreSequenceNumber - In the implementation block
@property (nonatomic,retain) NSMutableArray * activationCompletions;                                 //@synthesize activationCompletions=_activationCompletions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> activationTimer;                          //@synthesize activationTimer=_activationTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> periodicSyncTimer;                        //@synthesize periodicSyncTimer=_periodicSyncTimer - In the implementation block
@property (nonatomic,retain) NSDate * lastPeriodicSyncDate;                                          //@synthesize lastPeriodicSyncDate=_lastPeriodicSyncDate - In the implementation block
@property (assign,nonatomic) BOOL needsActivationOnUnlock;                                           //@synthesize needsActivationOnUnlock=_needsActivationOnUnlock - In the implementation block
@property (assign,nonatomic) BOOL needsResyncOnUnlock;                                               //@synthesize needsResyncOnUnlock=_needsResyncOnUnlock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingAuthorizationRequestContexts;              //@synthesize pendingAuthorizationRequestContexts=_pendingAuthorizationRequestContexts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(id<HDHealthDaemon>)healthDaemon;
-(void)_setPairingActivated:(BOOL)arg1 ;
-(void)_unregisterForSyncTriggers;
-(BOOL)_queue_finishInitializationAfterFirstUnlockIfNecessaryWithError:(id*)arg1 ;
-(void)_queue_updatePairingWithOptions:(unsigned long long)arg1 activationSentHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_syncImmediatelyWithReason:(id)arg1 pullRequest:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_resetPairingWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_requestAuthorizationForRequestRecord:(id)arg1 requestSentHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_deviceDidPair:(id)arg1 ;
-(void)_deviceDidUnpair:(id)arg1 ;
-(void)_registerForSyncTriggers;
-(void)_queue_setState:(long long)arg1 ;
-(void)_queue_pairingDidChange;
-(void)messageCenterDidReceiveActivationRequest:(id)arg1 ;
-(void)messageCenterDidReceiveActivationResponse:(id)arg1 ;
-(void)messageCenterActivationError:(id)arg1 ;
-(void)messageCenterDidReceiveChangesRequest:(id)arg1 ;
-(void)messageCenterDidReceiveChangesResponse:(id)arg1 ;
-(void)messageCenterChangesError:(id)arg1 ;
-(void)messageCenterDidReceiveAuthorizationRequest:(id)arg1 ;
-(void)messageCenterDidReceiveAuthorizationError:(id)arg1 ;
-(void)messageCenterDidReceiveAuthorizationComplete:(id)arg1 ;
-(void)_queue_handleActivationRestoreRequest:(id)arg1 forStore:(id)arg2 ;
-(void)_queue_handleActivationRestoreResponse:(id)arg1 forStore:(id)arg2 ;
-(void)_queue_receiveChangeRequest:(id)arg1 forStore:(id)arg2 ;
-(void)_queue_receiveChangeResponse:(id)arg1 forStore:(id)arg2 ;
-(void)_queue_changeRequestDidFailToSendWithError:(id)arg1 forStore:(id)arg2 ;
-(void)_queue_changeResponseDidFailToSendWithError:(id)arg1 forStore:(id)arg2 ;
-(void)_queue_receiveAuthorizationRequest:(id)arg1 ;
-(void)_queue_receiveAuthorizationResponse:(id)arg1 ;
-(void)_queue_authorizationRequestDidFailToSendWithError:(id)arg1 ;
-(void)_queue_receiveAuthorizationComplete:(id)arg1 ;
-(BOOL)_queue_isReadyForPairingWithError:(id*)arg1 ;
-(void)_queue_transitionToDeactivatedWithError:(id)arg1 ;
-(void)_queue_setActivePairedNanoRegistryDevice:(id)arg1 ;
-(void)setPairedWatchSourceBundleIdentifier:(NSString *)arg1 ;
-(void)_queue_startPeriodicSyncTimerIfNecessary;
-(void)_queue_setUpMessageCenterIfNecessaryWithStore:(id)arg1 ;
-(void)_queue_transitionToPreparingForActivationWithStore:(id)arg1 activationSentHandler:(/*^block*/id)arg2 ;
-(void)_queue_addActivationCompletion:(/*^block*/id)arg1 ;
-(void)_showFitnessAppIfNeeded;
-(void)_queue_cancelPeriodicSyncTimer;
-(void)_queue_cancelActivationTimer;
-(void)_queue_drainActivationCompletionsWithDidActivate:(BOOL)arg1 error:(id)arg2 ;
-(void)_queue_resetRestoreAttemptWithUUID:(id)arg1 ;
-(void)_resetSyncAnchorsForStore:(id)arg1 ;
-(void)_queue_beginRestoreWithStore:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_activationTimedOut;
-(id)_stateString;
-(void)_queue_sendActivationRestoreMessageWithStore:(id)arg1 restoreUUID:(id)arg2 restores:(id)arg3 sequenceNumber:(long long)arg4 statusCode:(int)arg5 ;
-(BOOL)_queue_abortRestoreWithUUID:(id)arg1 ;
-(void)_queue_startActivationTimerWithTimeout:(double)arg1 ;
-(void)_queue_sendRequest:(id)arg1 ;
-(BOOL)_syncQueue_applyActivationRestore:(id)arg1 request:(id)arg2 forStore:(id)arg3 error:(id*)arg4 ;
-(void)_queue_transitionToActivatedWithStore:(id)arg1 ;
-(void)_queue_sendResponse:(id)arg1 ;
-(BOOL)_queue_isReadyForSyncWithError:(id*)arg1 ;
-(void)_didSendChangeRequest;
-(void)_didReceiveChangeRequest;
-(void)_queue_periodicSyncTimerFired;
-(void)_syncImmediatelyWithReason:(id)arg1 pullRequest:(BOOL)arg2 ;
-(void)_userCharacteristicsDidChange:(id)arg1 ;
-(void)_userPreferencesDidChange:(id)arg1 ;
-(void)_syncImmediatelyWithReason:(id)arg1 ;
-(void)syncHealthDataWithPullRequest:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_sendChange:(id)arg1 withStatus:(id)arg2 forStore:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3 ;
-(id)diagnosticDescription;
-(void)daemonReady:(id)arg1 ;
-(void)sendWithNanoSyncStore:(id)arg1 change:(id)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)syncDidFinishWithNanoSyncStore:(id)arg1 success:(BOOL)arg2 error:(id)arg3 context:(id)arg4 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)messageCenter:(id)arg1 didResolveIDSIdentifierForRequest:(id)arg2 ;
-(void)messageCenter:(id)arg1 didResolveIDSIdentifierForResponse:(id)arg2 ;
-(NSString *)pairedWatchSourceBundleIdentifier;
-(void)processDidEnterBackground:(id)arg1 ;
-(void)processDidEnterForeground:(id)arg1 ;
-(id)initWithHealthDaemon:(id)arg1 isMaster:(BOOL)arg2 ;
-(void)activatePairingWithActivationSentHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetPairingWithCompletion:(/*^block*/id)arg1 ;
-(void)requestAuthorizationForRequestRecord:(id)arg1 requestSentHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)messageCenterDidReceiveAuthorizationResponse:(id)arg1 ;
-(void)_achievementsWereAdded:(id)arg1 ;
-(void)_workoutSamplesWereAssociated:(id)arg1 ;
-(BOOL)isPairingActivated;
-(void)setHealthDaemon:(id<HDHealthDaemon>)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HDIDSMessageCenter *)messageCenter;
-(void)setMessageCenter:(HDIDSMessageCenter *)arg1 ;
-(HDNanoSyncStore *)activeSyncStore;
-(void)setActiveSyncStore:(HDNanoSyncStore *)arg1 ;
-(NRDevice *)activeNanoRegistryDevice;
-(void)setActiveNanoRegistryDevice:(NRDevice *)arg1 ;
-(NSUUID *)restoreUUID;
-(void)setRestoreUUID:(NSUUID *)arg1 ;
-(BOOL)restoreDidAbort;
-(void)setRestoreDidAbort:(BOOL)arg1 ;
-(long long)restoreSequenceNumber;
-(void)setRestoreSequenceNumber:(long long)arg1 ;
-(NSMutableArray *)activationCompletions;
-(void)setActivationCompletions:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_source>)activationTimer;
-(void)setActivationTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)periodicSyncTimer;
-(void)setPeriodicSyncTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSDate *)lastPeriodicSyncDate;
-(void)setLastPeriodicSyncDate:(NSDate *)arg1 ;
-(BOOL)needsActivationOnUnlock;
-(void)setNeedsActivationOnUnlock:(BOOL)arg1 ;
-(BOOL)needsResyncOnUnlock;
-(void)setNeedsResyncOnUnlock:(BOOL)arg1 ;
-(NSMutableDictionary *)pendingAuthorizationRequestContexts;
-(void)setPendingAuthorizationRequestContexts:(NSMutableDictionary *)arg1 ;
-(BOOL)isMaster;
@end

