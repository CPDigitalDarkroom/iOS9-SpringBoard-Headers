/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:09 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceServices/VoiceServices-Structs.h>
#import <VoiceServices/VSRecognitionRecognizeAction.h>

@class VSRecognitionAction;

@interface VSRecognitionConfirmAction : VSRecognitionRecognizeAction {

	VSRecognitionAction* _confirmedAction;
	VSRecognitionAction* _deniedAction;
	struct {
		unsigned initializing : 1;
		unsigned confirmed : 1;
	}  _confirmFlags;

}
-(void)dealloc;
-(id)init;
-(int)completionType;
-(id)initWithModelIdentifier:(id)arg1 ;
-(void)_setConfirmed:(BOOL)arg1 ;
-(void)setConfirmedAction:(id)arg1 ;
-(id)confirmedAction;
-(void)setDeniedAction:(id)arg1 ;
-(id)deniedAction;
@end

