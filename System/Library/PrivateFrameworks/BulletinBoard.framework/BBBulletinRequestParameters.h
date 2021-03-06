/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:29 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSDate;

@interface BBBulletinRequestParameters : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _publisherDestination;
	long long _maximumCount;
	NSSet* _enabledSectionIDs;
	NSDate* _sinceDate;

}

@property (nonatomic,readonly) unsigned long long publisherDestination;              //@synthesize publisherDestination=_publisherDestination - In the implementation block
@property (nonatomic,retain) NSDate * sinceDate;                                     //@synthesize sinceDate=_sinceDate - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumCount; 
@property (nonatomic,readonly) NSSet * enabledSectionIDs; 
+(BOOL)supportsSecureCoding;
+(id)requestParametersForDestination:(unsigned long long)arg1 withSinceDate:(id)arg2 maximumCount:(long long)arg3 enabledSectionIDs:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDestination:(unsigned long long)arg1 sinceDate:(id)arg2 maximumCount:(long long)arg3 enabledSectionIDs:(id)arg4 ;
-(NSSet *)enabledSectionIDs;
-(void)setSinceDate:(NSDate *)arg1 ;
-(unsigned long long)maximumCount;
-(NSDate *)sinceDate;
-(unsigned long long)publisherDestination;
@end

