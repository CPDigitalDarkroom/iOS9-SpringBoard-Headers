/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SASportsEntity.h>

@class NSArray, NSString;

@interface SASportsEntityGroup : SASportsEntity

@property (nonatomic,copy) NSArray * entities; 
@property (nonatomic,copy) NSString * groupType; 
+(id)entityGroup;
+(id)entityGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)siriui_enumerateEntitiesWithGroupHandler:(/*^block*/id)arg1 teamHandler:(/*^block*/id)arg2 athleteHandler:(/*^block*/id)arg3 ;
-(BOOL)siriui_containsTeams;
-(BOOL)siriui_containsAthletes;
-(void)setEntities:(NSArray *)arg1 ;
-(void)setGroupType:(NSString *)arg1 ;
-(NSString *)groupType;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)entities;
@end

