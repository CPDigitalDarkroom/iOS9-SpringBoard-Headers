/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDBacklightLuxMicroAmpsBucket : PBCodable <NSCopying> {

	unsigned _bucketDuration;
	SCD_Struct_AW15 _has;

}

@property (assign,nonatomic) BOOL hasBucketDuration; 
@property (assign,nonatomic) unsigned bucketDuration;              //@synthesize bucketDuration=_bucketDuration - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setBucketDuration:(unsigned)arg1 ;
-(void)setHasBucketDuration:(BOOL)arg1 ;
-(BOOL)hasBucketDuration;
-(unsigned)bucketDuration;
@end

