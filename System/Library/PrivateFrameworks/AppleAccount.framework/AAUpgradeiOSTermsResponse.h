/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSData;

@interface AAUpgradeiOSTermsResponse : AAResponse {

	NSData* _xmlUIData;

}

@property (nonatomic,readonly) NSData * xmlUIData;              //@synthesize xmlUIData=_xmlUIData - In the implementation block
-(NSData *)xmlUIData;
-(id)responseXMLData;
-(BOOL)bodyIsPlist;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
@end

