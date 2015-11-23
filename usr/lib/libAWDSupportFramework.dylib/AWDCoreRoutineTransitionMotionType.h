/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:24 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutineTransitionMotionType : PBCodable <NSCopying> {

	unsigned _coreRoutineTransitionMotionTypeAutomotive;
	unsigned _coreRoutineTransitionMotionTypeCycling;
	unsigned _coreRoutineTransitionMotionTypeRunning;
	unsigned _coreRoutineTransitionMotionTypeStationary;
	unsigned _coreRoutineTransitionMotionTypeUnknown;
	unsigned _coreRoutineTransitionMotionTypeWalking;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasCoreRoutineTransitionMotionTypeStationary; 
@property (assign,nonatomic) unsigned coreRoutineTransitionMotionTypeStationary;              //@synthesize coreRoutineTransitionMotionTypeStationary=_coreRoutineTransitionMotionTypeStationary - In the implementation block
@property (assign,nonatomic) BOOL hasCoreRoutineTransitionMotionTypeWalking; 
@property (assign,nonatomic) unsigned coreRoutineTransitionMotionTypeWalking;                 //@synthesize coreRoutineTransitionMotionTypeWalking=_coreRoutineTransitionMotionTypeWalking - In the implementation block
@property (assign,nonatomic) BOOL hasCoreRoutineTransitionMotionTypeRunning; 
@property (assign,nonatomic) unsigned coreRoutineTransitionMotionTypeRunning;                 //@synthesize coreRoutineTransitionMotionTypeRunning=_coreRoutineTransitionMotionTypeRunning - In the implementation block
@property (assign,nonatomic) BOOL hasCoreRoutineTransitionMotionTypeAutomotive; 
@property (assign,nonatomic) unsigned coreRoutineTransitionMotionTypeAutomotive;              //@synthesize coreRoutineTransitionMotionTypeAutomotive=_coreRoutineTransitionMotionTypeAutomotive - In the implementation block
@property (assign,nonatomic) BOOL hasCoreRoutineTransitionMotionTypeCycling; 
@property (assign,nonatomic) unsigned coreRoutineTransitionMotionTypeCycling;                 //@synthesize coreRoutineTransitionMotionTypeCycling=_coreRoutineTransitionMotionTypeCycling - In the implementation block
@property (assign,nonatomic) BOOL hasCoreRoutineTransitionMotionTypeUnknown; 
@property (assign,nonatomic) unsigned coreRoutineTransitionMotionTypeUnknown;                 //@synthesize coreRoutineTransitionMotionTypeUnknown=_coreRoutineTransitionMotionTypeUnknown - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setCoreRoutineTransitionMotionTypeStationary:(unsigned)arg1 ;
-(void)setHasCoreRoutineTransitionMotionTypeStationary:(BOOL)arg1 ;
-(BOOL)hasCoreRoutineTransitionMotionTypeStationary;
-(void)setCoreRoutineTransitionMotionTypeWalking:(unsigned)arg1 ;
-(void)setHasCoreRoutineTransitionMotionTypeWalking:(BOOL)arg1 ;
-(BOOL)hasCoreRoutineTransitionMotionTypeWalking;
-(void)setCoreRoutineTransitionMotionTypeRunning:(unsigned)arg1 ;
-(void)setHasCoreRoutineTransitionMotionTypeRunning:(BOOL)arg1 ;
-(BOOL)hasCoreRoutineTransitionMotionTypeRunning;
-(void)setCoreRoutineTransitionMotionTypeAutomotive:(unsigned)arg1 ;
-(void)setHasCoreRoutineTransitionMotionTypeAutomotive:(BOOL)arg1 ;
-(BOOL)hasCoreRoutineTransitionMotionTypeAutomotive;
-(void)setCoreRoutineTransitionMotionTypeCycling:(unsigned)arg1 ;
-(void)setHasCoreRoutineTransitionMotionTypeCycling:(BOOL)arg1 ;
-(BOOL)hasCoreRoutineTransitionMotionTypeCycling;
-(void)setCoreRoutineTransitionMotionTypeUnknown:(unsigned)arg1 ;
-(void)setHasCoreRoutineTransitionMotionTypeUnknown:(BOOL)arg1 ;
-(BOOL)hasCoreRoutineTransitionMotionTypeUnknown;
-(unsigned)coreRoutineTransitionMotionTypeStationary;
-(unsigned)coreRoutineTransitionMotionTypeWalking;
-(unsigned)coreRoutineTransitionMotionTypeRunning;
-(unsigned)coreRoutineTransitionMotionTypeAutomotive;
-(unsigned)coreRoutineTransitionMotionTypeCycling;
-(unsigned)coreRoutineTransitionMotionTypeUnknown;
@end
