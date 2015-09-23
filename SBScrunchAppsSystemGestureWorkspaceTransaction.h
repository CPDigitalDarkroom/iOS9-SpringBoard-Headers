//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSystemGestureWorkspaceTransaction.h"

#import "SBUIAnimationControllerObserver.h"

@class FBUIApplicationSceneDeactivationAssertion, NSString, SBUIAnimationController;

@interface SBScrunchAppsSystemGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction <SBUIAnimationControllerObserver>
{
    FBUIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    SBUIAnimationController *_animationController;
    _Bool _ignoringEvents;
}

- (void)_unlockOrientation;
- (void)_lockOrientation:(long long)arg1;
- (void)_resumeEventsIfNecessary;
- (void)_ignoreEvents;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (void)_suspendGestureCancelled;
- (void)_suspendGestureEndedWithCompletionType:(long long)arg1;
- (void)_suspendGestureChanged:(double)arg1;
- (void)_finishWithCompletionType:(long long)arg1;
- (void)_beginAnimation;
- (void)_setupAnimation;
- (void)systemGestureStateChanged:(id)arg1;
- (void)_didComplete;
- (void)_begin;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
