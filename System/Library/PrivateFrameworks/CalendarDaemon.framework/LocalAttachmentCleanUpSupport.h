/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface LocalAttachmentCleanUpSupport : NSObject {

	NSObject*<OS_dispatch_source> _source;

}
-(void)dealloc;
-(id)init;
-(void)interruptNextScheduledCleanup;
-(void)_dispatchCleanupAfterDelay:(long long)arg1 ;
-(void)scheduleNextCleanup;
-(void)_setTimerOnSource:(long long)arg1 ;
-(void)cleanUpOrphanedFiles;
@end
