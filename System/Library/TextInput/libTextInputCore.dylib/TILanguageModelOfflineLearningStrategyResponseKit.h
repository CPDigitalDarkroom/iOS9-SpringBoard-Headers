/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/TILanguageModelOfflineLearningStrategy.h>

@class TILanguageModelOfflineLearningTask, NSString;

@interface TILanguageModelOfflineLearningStrategyResponseKit : NSObject <TILanguageModelOfflineLearningStrategy> {

	TILanguageModelOfflineLearningTask* _learningTask;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) TILanguageModelOfflineLearningTask * learningTask;              //@synthesize learningTask=_learningTask - In the implementation block
-(void)dealloc;
-(BOOL)learnMessages:(id)arg1 withRecipientRecords:(id)arg2 ;
-(id)initWithClientIdentifier:(id)arg1 andDirectory:(id)arg2 ;
-(id)filterMessages:(id)arg1 ;
-(TILanguageModelOfflineLearningTask *)learningTask;
-(void)didFinishLearning;
-(id)messagesClusteredByRecipient:(id)arg1 ;
@end
