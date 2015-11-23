/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:51 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <libobjc.A.dylib/SYChangeSerializer.h>

@protocol OS_dispatch_queue, SYSessionDelegate, SYChangeSerializer;
@class NSObject, SYService, NSDictionary, NSError, NSString;

@interface SYSession : NSObject <SYChangeSerializer> {

	NSObject*<OS_dispatch_queue> _targetQueue;
	int _inTransaction;
	BOOL _isSending;
	long long _priority;
	id<SYSessionDelegate> _delegate;
	id<SYChangeSerializer> _serializer;
	SYService* _service;
	double _perMessageTimeout;
	double _fullSessionTimeout;
	NSDictionary* _options;
	long long _maxConcurrentMessages;
	NSError* _error;
	NSDictionary* _userContext;
	NSDictionary* _sessionMetadata;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _identifier;
	double _birthDate;

}

@property (assign,nonatomic) long long priority;                                    //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic,__weak) id<SYSessionDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> targetQueue; 
@property (nonatomic,retain) id<SYChangeSerializer> serializer;                     //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,__weak,readonly) SYService * service;                          //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) double perMessageTimeout;                              //@synthesize perMessageTimeout=_perMessageTimeout - In the implementation block
@property (assign,nonatomic) double fullSessionTimeout;                             //@synthesize fullSessionTimeout=_fullSessionTimeout - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                                  //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) long long maxConcurrentMessages;                       //@synthesize maxConcurrentMessages=_maxConcurrentMessages - In the implementation block
@property (assign) long long state; 
@property (nonatomic,retain) NSError * error;                                       //@synthesize error=_error - In the implementation block
@property (assign) BOOL canRestart; 
@property (assign) BOOL canRollback; 
@property (nonatomic,readonly) BOOL isSending;                                      //@synthesize isSending=_isSending - In the implementation block
@property (readonly) BOOL isResetSync; 
@property (readonly) BOOL wasCancelled; 
@property (nonatomic,retain) NSDictionary * userContext;                            //@synthesize userContext=_userContext - In the implementation block
@property (nonatomic,copy) NSDictionary * sessionMetadata;                          //@synthesize sessionMetadata=_sessionMetadata - In the implementation block
@property (nonatomic,readonly) unsigned long long protocolVersion; 
@property (readonly) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double birthDate;                                      //@synthesize birthDate=_birthDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)didCompleteSession;
-(void)didStartSession;
-(BOOL)_beginTransaction;
-(NSError *)error;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)cancel;
-(void)setDelegate:(id<SYSessionDelegate>)arg1 ;
-(void)dealloc;
-(id<SYSessionDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSString *)identifier;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(void)start:(/*^block*/id)arg1 ;
-(SYService *)service;
-(id<SYChangeSerializer>)serializer;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
-(void)setSerializer:(id<SYChangeSerializer>)arg1 ;
-(id)dataFromChange:(id)arg1 ;
-(id)changeFromData:(id)arg1 ofType:(long long)arg2 ;
-(double)fullSessionTimeout;
-(double)perMessageTimeout;
-(void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)_handleStartSessionResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)_handleSyncBatchResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)_handleRestartSessionResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)_handleEndSessionResponse:(id)arg1 error:(id*)arg2 ;
-(double)birthDate;
-(void)_handleSyncBatch:(id)arg1 response:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleRestartSession:(id)arg1 response:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleEndSession:(id)arg1 response:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSDictionary *)sessionMetadata;
-(void)_resolvedIdentifierForRequest:(id)arg1 ;
-(void)_resolvedIdentifier:(id)arg1 forResponse:(id)arg2 ;
-(void)_peerProcessedMessageWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)_endTransaction;
-(void)setPerMessageTimeout:(double)arg1 ;
-(void)setFullSessionTimeout:(double)arg1 ;
-(long long)maxConcurrentMessages;
-(void)setMaxConcurrentMessages:(long long)arg1 ;
-(void)setSessionMetadata:(NSDictionary *)arg1 ;
-(void)setBirthDate:(double)arg1 ;
-(unsigned long long)protocolVersion;
-(void)_handleError:(id)arg1 ;
-(NSDictionary *)userContext;
-(void)setUserContext:(NSDictionary *)arg1 ;
-(id)initWithService:(id)arg1 ;
-(BOOL)isSending;
-(BOOL)isResetSync;
-(void)setError:(NSError *)arg1 ;
-(void)setTargetQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(BOOL)wasCancelled;
@end
