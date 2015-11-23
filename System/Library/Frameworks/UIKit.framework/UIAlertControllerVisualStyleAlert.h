/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:04 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAlertControllerVisualStyle.h>

@interface UIAlertControllerVisualStyleAlert : UIAlertControllerVisualStyle
-(UIEdgeInsets)contentInsets;
-(double)maximumWidth;
-(id)textFieldContainingViewWithTextField:(id)arg1 ;
-(id)titleLabelFont;
-(id)titleLabelColor;
-(double)marginAboveTitleLabelFirstBaseline;
-(double)marginBelowLastLabelLastBaseline;
-(id)messageLabelFont;
-(id)messageLabelColor;
-(id)regularActionFont;
-(id)preferredActionFont;
-(double)minimumActionHeight;
-(long long)permittedActionLayoutDirection;
-(UIEdgeInsets)actionImageMarginForAction:(id)arg1 withViewRepresentation:(id)arg2 inAlertController:(id)arg3 ;
-(double)transitionDurationForPresentation:(BOOL)arg1 ofAlertController:(id)arg2 ;
-(void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(BOOL)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(/*^block*/id)arg7 ;
-(double)backgroundCornerRadius;
-(double)marginBelowTitleLabelLastBaseline;
-(double)marginAboveMessageLabelFirstBaseline;
-(double)marginBelowMessageLabelLastBaseline;
@end
