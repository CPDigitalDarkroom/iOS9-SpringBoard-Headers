/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CPBitmapStore;

@interface _UIStatusBarCache : NSObject {

	CPBitmapStore* _store;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)_canCacheImages;
-(id)imageNamed:(id)arg1 forGroup:(id)arg2 withScale:(double)arg3 ;
-(void)cacheImage:(id)arg1 named:(id)arg2 forGroup:(id)arg3 ;
-(void)removeImagesInGroup:(id)arg1 ;
@end
