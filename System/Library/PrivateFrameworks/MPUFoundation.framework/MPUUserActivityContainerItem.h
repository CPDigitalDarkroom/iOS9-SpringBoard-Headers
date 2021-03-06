/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:39 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class MPMediaEntity, MPUContentItemIdentifierCollection, _MPUProtoBufUserActivityContainerItem;

@interface MPUUserActivityContainerItem : NSObject <NSCopying, NSMutableCopying> {

	long long _containerItemType;
	MPMediaEntity* _selectedMediaEntity;
	MPMediaEntity* _visualReferenceMediaEntity;

}

@property (nonatomic,readonly) MPUContentItemIdentifierCollection * MPU_selectedContentItemIdentifierCollection; 
@property (nonatomic,readonly) MPUContentItemIdentifierCollection * MPU_visualReferenceContentItemIdentifierCollection; 
@property (nonatomic,readonly) long long containerItemType;                                                                          //@synthesize containerItemType=_containerItemType - In the implementation block
@property (nonatomic,readonly) MPMediaEntity * selectedMediaEntity;                                                                  //@synthesize selectedMediaEntity=_selectedMediaEntity - In the implementation block
@property (nonatomic,readonly) MPMediaEntity * visualReferenceMediaEntity;                                                           //@synthesize visualReferenceMediaEntity=_visualReferenceMediaEntity - In the implementation block
@property (nonatomic,readonly) _MPUProtoBufUserActivityContainerItem * protoBufUserActivityContainerItem; 
-(id)_MPU_contentItemIdentifierCollectionWithMediaEntity:(id)arg1 ;
-(MPUContentItemIdentifierCollection *)MPU_selectedContentItemIdentifierCollection;
-(MPUContentItemIdentifierCollection *)MPU_visualReferenceContentItemIdentifierCollection;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)containerItemType;
-(MPMediaEntity *)selectedMediaEntity;
-(MPMediaEntity *)visualReferenceMediaEntity;
-(id)initWithContainerItemType:(long long)arg1 ;
-(id)initWithProtoBufUserActivityContainerItem:(id)arg1 ;
-(_MPUProtoBufUserActivityContainerItem *)protoBufUserActivityContainerItem;
@end

