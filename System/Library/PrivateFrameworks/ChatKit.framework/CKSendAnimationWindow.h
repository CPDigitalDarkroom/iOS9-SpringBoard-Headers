/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:40 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIAutoRotatingWindow.h>

@class CKGradientReferenceView;

@interface CKSendAnimationWindow : UIAutoRotatingWindow {

	CKGradientReferenceView* _gradientReferenceView;

}

@property (nonatomic,retain) CKGradientReferenceView * gradientReferenceView;              //@synthesize gradientReferenceView=_gradientReferenceView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)_canAffectStatusBarAppearance;
-(void)setGradientReferenceView:(CKGradientReferenceView *)arg1 ;
-(CKGradientReferenceView *)gradientReferenceView;
@end

