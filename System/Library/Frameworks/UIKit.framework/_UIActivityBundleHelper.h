/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:00 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class LSBundleProxy;

@interface _UIActivityBundleHelper : NSObject {

	LSBundleProxy* _bundleProxy;

}

@property (nonatomic,retain) LSBundleProxy * bundleProxy;              //@synthesize bundleProxy=_bundleProxy - In the implementation block
+(id)activityBundleHelperForExtension:(id)arg1 ;
-(id)init;
-(id)debugDescription;
-(id)localizedName;
-(id)initWithBundleProxy:(id)arg1 ;
-(void)setBundleProxy:(LSBundleProxy *)arg1 ;
-(LSBundleProxy *)bundleProxy;
-(id)activityImageForApplicationBundleURL:(id)arg1 applicationIconFormat:(int)arg2 activityCategory:(long long)arg3 ;
-(double)preferredImageScale;
-(id)imageForApplicationIconFormat:(int)arg1 activityCategory:(long long)arg2 ;
@end
