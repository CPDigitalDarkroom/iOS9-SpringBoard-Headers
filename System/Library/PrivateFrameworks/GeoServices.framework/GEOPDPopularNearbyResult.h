/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOPDPopularNearbyResult : PBCodable <NSCopying> {

	SCD_Struct_GE231* _litePlaceResults;
	unsigned long long _litePlaceResultsCount;
	unsigned long long _litePlaceResultsSpace;
	NSString* _sectionHeader;

}

@property (nonatomic,readonly) BOOL hasSectionHeader; 
@property (nonatomic,retain) NSString * sectionHeader;                                //@synthesize sectionHeader=_sectionHeader - In the implementation block
@property (nonatomic,readonly) unsigned long long litePlaceResultsCount; 
@property (nonatomic,readonly) SCD_Struct_GE231* litePlaceResults; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSectionHeader:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)sectionHeader;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addLitePlaceResult:(SCD_Struct_GE231)arg1 ;
-(BOOL)hasSectionHeader;
-(unsigned long long)litePlaceResultsCount;
-(void)setLitePlaceResults:(SCD_Struct_GE231*)arg1 count:(unsigned long long)arg2 ;
-(SCD_Struct_GE231*)litePlaceResults;
-(void)clearLitePlaceResults;
-(SCD_Struct_GE231)litePlaceResultAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end
