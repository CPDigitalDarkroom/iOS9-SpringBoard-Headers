/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SAUIDecoratedText, NSString;

@interface SASTCompetingTeamPlayDetailItem : AceObject <SASTTemplateItem>

@property (assign,nonatomic) BOOL firstEntity; 
@property (nonatomic,retain) SAUIDecoratedText * playDetail; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)competingTeamPlayDetailItem;
+(id)competingTeamPlayDetailItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)firstEntity;
-(void)setFirstEntity:(BOOL)arg1 ;
-(SAUIDecoratedText *)playDetail;
-(void)setPlayDetail:(SAUIDecoratedText *)arg1 ;
@end
