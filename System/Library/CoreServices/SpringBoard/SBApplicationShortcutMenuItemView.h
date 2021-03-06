//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, SBSApplicationShortcutItem, UIImageView, UILabel;

@interface SBApplicationShortcutMenuItemView : UIView
{
    UIView *_iconContainer;
    UIImageView *_iconView;
    UIView *_textContainer;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    _Bool _highlighted;
    SBSApplicationShortcutItem *_shortcutItem;
    long long _orientation;
    unsigned long long _options;
    double _iconMaxHeight;
    NSArray *_iconHeightConstraints;
    long long _menuPosition;
}

+ (id)_imageForShortcutItem:(id)arg1 application:(id)arg2 assetManagerProvider:(id)arg3 monogrammerProvider:(id)arg4 maxHeight:(double *)arg5;
@property(readonly, nonatomic) long long menuPosition; // @synthesize menuPosition=_menuPosition;
@property(retain, nonatomic) SBSApplicationShortcutItem *shortcutItem; // @synthesize shortcutItem=_shortcutItem;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) NSArray *iconHeightConstraints; // @synthesize iconHeightConstraints=_iconHeightConstraints;
@property(nonatomic) double iconMaxHeight; // @synthesize iconMaxHeight=_iconMaxHeight;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *textContainer; // @synthesize textContainer=_textContainer;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *iconContainer; // @synthesize iconContainer=_iconContainer;
- (void)_handleContentSizeCategoryChangedNotification:(id)arg1;
- (void)_updateLabelFonts;
- (double)_subtitleFontSize;
- (double)_titleFontSize;
- (void)_setupConstraintsForIconAlignment:(long long)arg1 icon:(id)arg2;
- (void)_setupViewsWithIcon:(id)arg1 title:(id)arg2 subtitle:(id)arg3;
- (void)dealloc;
- (id)initWithShortcutItem:(id)arg1 menuPosition:(long long)arg2 orientation:(long long)arg3 application:(id)arg4 assetManagerProvider:(id)arg5 monogrammerProvider:(id)arg6 options:(unsigned long long)arg7;

@end

