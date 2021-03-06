/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:44 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKWidgetView.h>
#import <libobjc.A.dylib/OKWidgetTextViewProxyExports.h>

@interface OKWidgetTextViewProxy : OKWidgetView <OKWidgetTextViewProxyExports> {

	UIEdgeInsets _textEdgeInsets;

}
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(id)valueForUndefinedKey:(id)arg1 ;
-(BOOL)prepareForDisplay:(BOOL)arg1 ;
-(id)initWithWidget:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(BOOL)prepareForWarmup:(BOOL)arg1 ;
-(BOOL)prepareForUnload:(BOOL)arg1 ;
-(id)layoutSettingsKeys;
-(CGRect)textViewFrame;
-(UIEdgeInsets)textEdgeInsets;
-(UIEdgeInsets)settingTextEdgeInsets;
-(void)setSettingTextEdgeInsets:(UIEdgeInsets)arg1 ;
@end

