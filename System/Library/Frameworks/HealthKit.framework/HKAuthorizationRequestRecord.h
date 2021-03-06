/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID, NSSet;

@interface HKAuthorizationRequestRecord : NSObject <NSSecureCoding> {

	NSString* _appBundleIdentifier;
	NSUUID* _sessionIdentifier;
	NSSet* _typesRequiringShareAuthorization;
	NSSet* _typesRequiringReadAuthorization;

}

@property (nonatomic,copy,readonly) NSString * appBundleIdentifier;                        //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * sessionIdentifier;                            //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * typesRequiringShareAuthorization;              //@synthesize typesRequiringShareAuthorization=_typesRequiringShareAuthorization - In the implementation block
@property (nonatomic,copy,readonly) NSSet * typesRequiringReadAuthorization;               //@synthesize typesRequiringReadAuthorization=_typesRequiringReadAuthorization - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(NSUUID *)sessionIdentifier;
-(NSString *)appBundleIdentifier;
-(NSSet *)typesRequiringShareAuthorization;
-(NSSet *)typesRequiringReadAuthorization;
-(id)initForApp:(id)arg1 session:(id)arg2 readTypes:(id)arg3 writeTypes:(id)arg4 ;
@end

