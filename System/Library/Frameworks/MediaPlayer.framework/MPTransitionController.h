/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class UIView, NSMutableSet, MPViewController, UIViewController;

@interface MPTransitionController : NSObject {

	CFDictionaryRef _observers;
	float _duration;
	UIView* _rootView;
	NSMutableSet* _persistentViewsToFadeOut;
	NSMutableSet* _viewsToFadeOut;
	NSMutableSet* _persistentViewsToFadeIn;
	NSMutableSet* _viewsToFadeIn;
	MPViewController* _fromViewController;
	long long _fromInterfaceOrientation;
	MPViewController* _toViewController;
	long long _toInterfaceOrientation;
	UIViewController* _toContainerViewController;

}

@property (assign,nonatomic) float duration;                                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long fromInterfaceOrientation;                        //@synthesize fromInterfaceOrientation=_fromInterfaceOrientation - In the implementation block
@property (nonatomic,retain) MPViewController * fromViewController;                     //@synthesize fromViewController=_fromViewController - In the implementation block
@property (nonatomic,retain) UIView * rootView;                                         //@synthesize rootView=_rootView - In the implementation block
@property (assign,nonatomic) long long toInterfaceOrientation;                          //@synthesize toInterfaceOrientation=_toInterfaceOrientation - In the implementation block
@property (nonatomic,retain) MPViewController * toViewController;                       //@synthesize toViewController=_toViewController - In the implementation block
@property (nonatomic,retain) UIViewController * toContainerViewController;              //@synthesize toContainerViewController=_toContainerViewController - In the implementation block
-(void)addObserver:(id)arg1 didEndSelector:(SEL)arg2 ;
-(void)transition:(unsigned long long)arg1 ;
-(void)performTransition:(unsigned long long)arg1 ;
-(void)setToContainerViewController:(UIViewController *)arg1 ;
-(void)fadeViewsForRestore:(BOOL)arg1 ;
-(void)didFinishTransition:(BOOL)arg1 ;
-(void)setToInterfaceOrientation:(long long)arg1 ;
-(void)setFromInterfaceOrientation:(long long)arg1 ;
-(UIViewController *)toContainerViewController;
-(void)messageObserversWithSuccess:(BOOL)arg1 ;
-(void)willBeginTransition:(unsigned long long)arg1 ;
-(void)addViewToFadeIn:(id)arg1 restoreOnPop:(BOOL)arg2 ;
-(void)addViewToFadeOut:(id)arg1 restoreOnPop:(BOOL)arg2 ;
-(long long)fromInterfaceOrientation;
-(void)setFromViewController:(MPViewController *)arg1 ;
-(long long)toInterfaceOrientation;
-(void)setToViewController:(MPViewController *)arg1 ;
-(void)dealloc;
-(id)init;
-(float)duration;
-(void)setDuration:(float)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(MPViewController *)fromViewController;
-(MPViewController *)toViewController;
-(UIView *)rootView;
-(void)setRootView:(UIView *)arg1 ;
@end

