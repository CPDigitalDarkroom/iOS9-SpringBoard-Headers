/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:36 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IMMultiQueue : NSObject {

	NSMutableDictionary* _queueMap;

}
-(void)dealloc;
-(void)_popEnqueuedBlockWithGUID:(id)arg1 key:(id)arg2 ;
-(void)_addBlock:(/*^block*/id)arg1 withGUID:(id)arg2 forKey:(id)arg3 description:(id)arg4 ;
-(void)addBlock:(/*^block*/id)arg1 withTimeout:(double)arg2 forKey:(id)arg3 description:(id)arg4 ;
-(void)addBlock:(/*^block*/id)arg1 forKey:(id)arg2 description:(id)arg3 ;
@end
