/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:50 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIKeyboardAccessibility_super.h>

@interface UIKeyboardAccessibility : __UIKeyboardAccessibility_super
+(Class)safeCategoryBaseClass;
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(id)_accessibilityNativeFocusPreferredElement;
-(BOOL)accessibilityPerformAction:(int)arg1 withValue:(id)arg2 ;
-(BOOL)_accessibilityKeyboardSupportsGestureMode;
-(BOOL)_axDeleteByCharacter;
-(BOOL)_axDeleteByWord;
-(BOOL)_axAdvanceKeyboardPlane:(BOOL)arg1 ;
-(BOOL)_axCommitWord;
-(BOOL)_axEnterTextValue:(id)arg1 ;
-(BOOL)_axAdvanceKeyboardSuggestion:(BOOL)arg1 ;
-(BOOL)_axAdvanceInternationalKeyboard:(BOOL)arg1 ;
-(BOOL)_axShift;
-(BOOL)_axShiftLock;
-(BOOL)_accessibilitySwitchToGestureMode:(BOOL)arg1 ;
-(void)_voiceOverStatus:(id)arg1 ;
-(BOOL)_accessibilityTriggerDictationFromPath:(id)arg1 ;
-(void)dealloc;
-(void)deactivate;
-(void)insertDictationResult:(id)arg1 ;
-(void)dictationRecognitionFailed;
-(void)activate;
-(CGRect)accessibilityFrame;
@end
