/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreHAP/HAPAccessoryServerBrowser.h>

@protocol HAPAccessoryServerBrowserDelegate, OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface HAPAccessoryServerBrowserRelay : HAPAccessoryServerBrowser {

	NSMutableArray* _discoveredAccessoryServers;
	id<HAPAccessoryServerBrowserDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,readonly) NSMutableArray * discoveredAccessoryServers;                      //@synthesize discoveredAccessoryServers=_discoveredAccessoryServers - In the implementation block
@property (assign,nonatomic,__weak) id<HAPAccessoryServerBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                         //@synthesize delegateQueue=_delegateQueue - In the implementation block
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setDelegate:(id<HAPAccessoryServerBrowserDelegate>)arg1 ;
-(id<HAPAccessoryServerBrowserDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)addAccessoryServerWithStream:(id)arg1 name:(id)arg2 identifier:(id)arg3 ;
-(void)removeAccessoryServerWithStream:(id)arg1 ;
-(void)startDiscoveringAccessoryServers;
-(void)stopDiscoveringAccessoryServers;
-(NSMutableArray *)discoveredAccessoryServers;
-(void)discoverAccessoryServerWithIdentifier:(id)arg1 ;
-(long long)linkType;
@end

