/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:43 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, MPUContentSizeLayoutConstraint, NSLayoutConstraint, MPUArtworkView, UILabel, UIView;

@interface _MPUExtrasGridHeaderView : UIView {

	NSArray* _artworkSizeConstraints;
	NSArray* _textLeadingConstraints;
	MPUContentSizeLayoutConstraint* _topLabelConstraint;
	MPUContentSizeLayoutConstraint* _subtitleBaselineConstraint;
	NSLayoutConstraint* _bottomLabelConstraint;
	MPUContentSizeLayoutConstraint* _bottomLabelSpacerHeight;
	MPUArtworkView* _artworkView;
	UILabel* _subtitleLabel;
	UIView* _bottomLabelSpacer;
	UILabel* _titleLabel;

}

@property (nonatomic,readonly) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)configureForImage:(id)arg1 title:(id)arg2 subtitle:(id)arg3 style:(id)arg4 ;
@end
