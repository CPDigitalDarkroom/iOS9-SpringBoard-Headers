//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class FBSDisplay, NSMutableDictionary, NSMutableSet, NSString;

@interface SBSystemGestureManager : NSObject <BSDescriptionProviding>
{
    FBSDisplay *_display;
    NSMutableDictionary *_typeToGesture;
    NSMutableDictionary *_typeToState;
    NSMutableSet *_recognizingGestures;
    _Bool _systemGesturesDisabledForAccessibility;
}

+ (id)mainDisplayManager;
@property(nonatomic, getter=areSystemGesturesDisabledForAccessibility) _Bool systemGesturesDisabledForAccessibility; // @synthesize systemGesturesDisabledForAccessibility=_systemGesturesDisabledForAccessibility;
- (void)_systemGestureChanged:(id)arg1;
- (void)_disableSystemGesture:(id)arg1 withType:(unsigned long long)arg2;
- (void)_enableSystemGesture:(id)arg1 withType:(unsigned long long)arg2;
- (_Bool)_shouldEnableSystemGestureWithType:(unsigned long long)arg1;
- (_Bool)_isGestureWithTypeAllowed:(unsigned long long)arg1;
- (void)_updateUserPreferences;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (_Bool)isGestureWithTypeAllowed:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=isAnyGestureRunning) _Bool anyGestureRunning;
@property(readonly, retain, nonatomic) FBSDisplay *display;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)updateUserPreferences;
- (void)removeGestureRecognizer:(id)arg1;
- (void)addGestureRecognizer:(id)arg1 withType:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithDisplay:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

