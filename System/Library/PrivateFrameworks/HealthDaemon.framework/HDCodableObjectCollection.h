/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:27 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, HDCodableProvenance, HDCodableSource, NSString;

@interface HDCodableObjectCollection : PBCodable <NSCopying> {

	NSMutableArray* _activityCaches;
	NSMutableArray* _categorySamples;
	NSMutableArray* _correlations;
	HDCodableProvenance* _provenance;
	NSMutableArray* _quantitySamples;
	HDCodableSource* _source;
	NSString* _sourceBundleIdentifier;
	NSMutableArray* _workouts;

}

@property (nonatomic,readonly) BOOL hasSourceBundleIdentifier; 
@property (nonatomic,retain) NSString * sourceBundleIdentifier;              //@synthesize sourceBundleIdentifier=_sourceBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasSource; 
@property (nonatomic,retain) HDCodableSource * source;                       //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSMutableArray * categorySamples;               //@synthesize categorySamples=_categorySamples - In the implementation block
@property (nonatomic,retain) NSMutableArray * quantitySamples;               //@synthesize quantitySamples=_quantitySamples - In the implementation block
@property (nonatomic,retain) NSMutableArray * workouts;                      //@synthesize workouts=_workouts - In the implementation block
@property (nonatomic,retain) NSMutableArray * correlations;                  //@synthesize correlations=_correlations - In the implementation block
@property (nonatomic,retain) NSMutableArray * activityCaches;                //@synthesize activityCaches=_activityCaches - In the implementation block
@property (nonatomic,readonly) BOOL hasProvenance; 
@property (nonatomic,retain) HDCodableProvenance * provenance;               //@synthesize provenance=_provenance - In the implementation block
-(unsigned long long)count;
-(BOOL)isEquivalentToObjectCollection:(id)arg1 ;
-(id)decodedObjects;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(HDCodableSource *)source;
-(void)setSource:(HDCodableSource *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasSource;
-(NSMutableArray *)categorySamples;
-(void)addCategorySamples:(id)arg1 ;
-(NSString *)sourceBundleIdentifier;
-(HDCodableProvenance *)provenance;
-(void)addQuantitySamples:(id)arg1 ;
-(void)addWorkouts:(id)arg1 ;
-(void)addCorrelations:(id)arg1 ;
-(void)addActivityCaches:(id)arg1 ;
-(void)setSourceBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)categorySamplesCount;
-(void)clearCategorySamples;
-(id)categorySamplesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)quantitySamplesCount;
-(void)clearQuantitySamples;
-(id)quantitySamplesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)workoutsCount;
-(void)clearWorkouts;
-(id)workoutsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)correlationsCount;
-(void)clearCorrelations;
-(id)correlationsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)activityCachesCount;
-(void)clearActivityCaches;
-(id)activityCachesAtIndex:(unsigned long long)arg1 ;
-(void)setProvenance:(HDCodableProvenance *)arg1 ;
-(BOOL)hasSourceBundleIdentifier;
-(BOOL)hasProvenance;
-(void)setCategorySamples:(NSMutableArray *)arg1 ;
-(NSMutableArray *)quantitySamples;
-(void)setQuantitySamples:(NSMutableArray *)arg1 ;
-(NSMutableArray *)workouts;
-(void)setWorkouts:(NSMutableArray *)arg1 ;
-(NSMutableArray *)correlations;
-(void)setCorrelations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)activityCaches;
-(void)setActivityCaches:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

