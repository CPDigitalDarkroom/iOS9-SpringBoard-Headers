/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:19 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, GEOPlace, NSString, GEOPlaceSearchRequest, GEOAddress;

@interface GEOPlaceResult : PBCodable <NSCopying> {

	unsigned long long _flyoverTourMuid;
	NSMutableArray* _additionalPlaces;
	int _cacheControl;
	NSMutableArray* _disambiguationLabels;
	NSMutableArray* _matchedTokens;
	NSMutableArray* _namedFeatures;
	GEOPlace* _place;
	NSString* _quad;
	GEOPlaceSearchRequest* _revgeoRequestTemplate;
	NSString* _suggestedQuery;
	GEOAddress* _tokenEntity;
	unsigned _travelDistance;
	unsigned _travelTime;
	NSMutableArray* _unmatchedStrings;
	SCD_Struct_GE6 _has;

}

@property (nonatomic,retain) GEOPlace * place;                                           //@synthesize place=_place - In the implementation block
@property (nonatomic,retain) NSMutableArray * additionalPlaces;                          //@synthesize additionalPlaces=_additionalPlaces - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestedQuery; 
@property (nonatomic,retain) NSString * suggestedQuery;                                  //@synthesize suggestedQuery=_suggestedQuery - In the implementation block
@property (assign,nonatomic) BOOL hasTravelTime; 
@property (assign,nonatomic) unsigned travelTime;                                        //@synthesize travelTime=_travelTime - In the implementation block
@property (assign,nonatomic) BOOL hasTravelDistance; 
@property (assign,nonatomic) unsigned travelDistance;                                    //@synthesize travelDistance=_travelDistance - In the implementation block
@property (nonatomic,readonly) BOOL hasTokenEntity; 
@property (nonatomic,retain) GEOAddress * tokenEntity;                                   //@synthesize tokenEntity=_tokenEntity - In the implementation block
@property (nonatomic,readonly) BOOL hasQuad; 
@property (nonatomic,retain) NSString * quad;                                            //@synthesize quad=_quad - In the implementation block
@property (nonatomic,retain) NSMutableArray * unmatchedStrings;                          //@synthesize unmatchedStrings=_unmatchedStrings - In the implementation block
@property (nonatomic,retain) NSMutableArray * namedFeatures;                             //@synthesize namedFeatures=_namedFeatures - In the implementation block
@property (nonatomic,readonly) BOOL hasRevgeoRequestTemplate; 
@property (nonatomic,retain) GEOPlaceSearchRequest * revgeoRequestTemplate;              //@synthesize revgeoRequestTemplate=_revgeoRequestTemplate - In the implementation block
@property (nonatomic,retain) NSMutableArray * matchedTokens;                             //@synthesize matchedTokens=_matchedTokens - In the implementation block
@property (assign,nonatomic) BOOL hasFlyoverTourMuid; 
@property (assign,nonatomic) unsigned long long flyoverTourMuid;                         //@synthesize flyoverTourMuid=_flyoverTourMuid - In the implementation block
@property (assign,nonatomic) BOOL hasCacheControl; 
@property (assign,nonatomic) int cacheControl;                                           //@synthesize cacheControl=_cacheControl - In the implementation block
@property (nonatomic,retain) NSMutableArray * disambiguationLabels;                      //@synthesize disambiguationLabels=_disambiguationLabels - In the implementation block
-(id)geoMapItem;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)quad;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDisambiguationLabels:(NSMutableArray *)arg1 ;
-(void)clearDisambiguationLabels;
-(void)addDisambiguationLabel:(id)arg1 ;
-(unsigned long long)disambiguationLabelsCount;
-(id)disambiguationLabelAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)disambiguationLabels;
-(GEOAddress *)tokenEntity;
-(unsigned long long)namedFeaturesCount;
-(void)setTokenEntity:(GEOAddress *)arg1 ;
-(void)setTravelTime:(unsigned)arg1 ;
-(void)setRevgeoRequestTemplate:(GEOPlaceSearchRequest *)arg1 ;
-(id)namedFeatureAtIndex:(unsigned long long)arg1 ;
-(unsigned)travelDistance;
-(unsigned long long)additionalPlacesCount;
-(id)matchedTokenAtIndex:(unsigned long long)arg1 ;
-(void)setHasTravelTime:(BOOL)arg1 ;
-(void)setPlace:(GEOPlace *)arg1 ;
-(unsigned long long)matchedTokensCount;
-(unsigned)travelTime;
-(BOOL)hasRevgeoRequestTemplate;
-(BOOL)hasTravelTime;
-(void)setHasFlyoverTourMuid:(BOOL)arg1 ;
-(void)setNamedFeatures:(NSMutableArray *)arg1 ;
-(void)setSuggestedQuery:(NSString *)arg1 ;
-(void)addNamedFeature:(id)arg1 ;
-(void)clearUnmatchedStrings;
-(NSMutableArray *)unmatchedStrings;
-(void)clearAdditionalPlaces;
-(void)setFlyoverTourMuid:(unsigned long long)arg1 ;
-(void)setTravelDistance:(unsigned)arg1 ;
-(id)additionalPlaceAtIndex:(unsigned long long)arg1 ;
-(void)addMatchedToken:(id)arg1 ;
-(void)addAdditionalPlace:(id)arg1 ;
-(BOOL)hasTravelDistance;
-(void)setAdditionalPlaces:(NSMutableArray *)arg1 ;
-(GEOPlace *)place;
-(BOOL)hasTokenEntity;
-(void)setCacheControl:(int)arg1 ;
-(unsigned long long)unmatchedStringsCount;
-(id)unmatchedStringAtIndex:(unsigned long long)arg1 ;
-(void)setUnmatchedStrings:(NSMutableArray *)arg1 ;
-(GEOPlaceSearchRequest *)revgeoRequestTemplate;
-(BOOL)hasFlyoverTourMuid;
-(void)setHasTravelDistance:(BOOL)arg1 ;
-(NSMutableArray *)namedFeatures;
-(int)cacheControl;
-(void)clearNamedFeatures;
-(void)setHasCacheControl:(BOOL)arg1 ;
-(void)setMatchedTokens:(NSMutableArray *)arg1 ;
-(BOOL)hasCacheControl;
-(NSString *)suggestedQuery;
-(void)setQuad:(NSString *)arg1 ;
-(NSMutableArray *)matchedTokens;
-(NSMutableArray *)additionalPlaces;
-(BOOL)hasQuad;
-(BOOL)hasSuggestedQuery;
-(void)clearMatchedTokens;
-(void)addUnmatchedString:(id)arg1 ;
-(unsigned long long)flyoverTourMuid;
-(BOOL)readFrom:(id)arg1 ;
@end
