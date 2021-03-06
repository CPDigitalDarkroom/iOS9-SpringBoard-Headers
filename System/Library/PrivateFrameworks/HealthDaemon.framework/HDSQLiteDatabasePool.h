/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:29 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, HDSQLiteDatabasePoolDelegate;
@class NSObject, NSMutableSet, NSMapTable, NSString;

@interface HDSQLiteDatabasePool : NSObject <HDDiagnosticObject> {

	NSObject*<OS_dispatch_queue> _cacheQueue;
	NSMutableSet* _cache;
	unsigned long long _cacheGeneration;
	NSObject*<OS_dispatch_queue> _checkoutQueue;
	NSMapTable* _checkoutMap;
	NSObject*<OS_dispatch_semaphore> _readerSemaphore;
	NSObject*<OS_dispatch_semaphore> _writerSemaphore;
	unsigned long long _cacheSize;
	int _backgroundReadersWaiting;
	int _writersWaiting;
	id<HDSQLiteDatabasePoolDelegate> _delegate;
	unsigned long long _maxConcurrentBackgroundReaders;
	unsigned long long _maxConcurrentWriters;

}

@property (assign) id<HDSQLiteDatabasePoolDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign) unsigned long long cacheSize; 
@property (readonly) unsigned long long maxConcurrentBackgroundReaders;              //@synthesize maxConcurrentBackgroundReaders=_maxConcurrentBackgroundReaders - In the implementation block
@property (readonly) unsigned long long maxConcurrentWriters;                        //@synthesize maxConcurrentWriters=_maxConcurrentWriters - In the implementation block
@property (readonly) unsigned long long backgroundReadersWaiting; 
@property (readonly) unsigned long long writersWaiting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<HDSQLiteDatabasePoolDelegate>)arg1 ;
-(void)dealloc;
-(id<HDSQLiteDatabasePoolDelegate>)delegate;
-(void)flush;
-(id)diagnosticDescription;
-(id)initWithDelegate:(id)arg1 maxConcurrentBackgroundReaders:(unsigned long long)arg2 ;
-(void)setCacheSize:(unsigned long long)arg1 ;
-(void)checkInDatabase:(id)arg1 ;
-(id)writerDatabaseWithError:(id*)arg1 ;
-(id)readerDatabaseWithPriority:(long long)arg1 error:(id*)arg2 ;
-(id)_databaseWithType:(long long)arg1 error:(id*)arg2 ;
-(id)_semaphoreForDatabaseType:(long long)arg1 waitCounter:(int*)arg2 ;
-(unsigned long long)backgroundReadersWaiting;
-(unsigned long long)writersWaiting;
-(unsigned long long)cacheSize;
-(unsigned long long)maxConcurrentBackgroundReaders;
-(unsigned long long)maxConcurrentWriters;
@end

