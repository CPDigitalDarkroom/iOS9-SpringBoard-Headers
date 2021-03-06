/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:52 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NNMKProtoMessagesFilteredOutWarning : PBCodable <NSCopying> {

	unsigned _fullSyncVersion;
	NSMutableArray* _removedMessageIds;
	SCD_Struct_NN1 _has;

}

@property (assign,nonatomic) BOOL hasFullSyncVersion; 
@property (assign,nonatomic) unsigned fullSyncVersion;                        //@synthesize fullSyncVersion=_fullSyncVersion - In the implementation block
@property (nonatomic,retain) NSMutableArray * removedMessageIds;              //@synthesize removedMessageIds=_removedMessageIds - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setFullSyncVersion:(unsigned)arg1 ;
-(void)setHasFullSyncVersion:(BOOL)arg1 ;
-(BOOL)hasFullSyncVersion;
-(unsigned)fullSyncVersion;
-(void)addRemovedMessageId:(id)arg1 ;
-(unsigned long long)removedMessageIdsCount;
-(void)clearRemovedMessageIds;
-(id)removedMessageIdAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)removedMessageIds;
-(void)setRemovedMessageIds:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

