/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString, NSNumber;

@interface SSVRepairApplicationRequest : SSRequest <SSXPCCoding> {

	long long _claimStyle;
	NSString* _bundleID;
	NSNumber* _accountDSID;

}

@property (nonatomic,readonly) NSString * bundleID;                 //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSNumber * accountDSID;              //@synthesize accountDSID=_accountDSID - In the implementation block
@property (nonatomic,readonly) long long claimStyle;                //@synthesize claimStyle=_claimStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)bundleID;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
-(id)initWithBundleID:(id)arg1 accountIdentifier:(id)arg2 claimStyle:(long long)arg3 ;
-(long long)claimStyle;
-(NSNumber *)accountDSID;
@end
