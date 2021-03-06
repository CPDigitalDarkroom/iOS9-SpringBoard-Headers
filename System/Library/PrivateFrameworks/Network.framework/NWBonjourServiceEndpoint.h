/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Network/NWEndpoint.h>

@class NSString;

@interface NWBonjourServiceEndpoint : NWEndpoint

@property (readonly) NSString * name; 
@property (readonly) NSString * type; 
@property (readonly) NSString * domain; 
+(id)endpointWithName:(id)arg1 type:(id)arg2 domain:(id)arg3 ;
-(NSString *)name;
-(NSString *)type;
-(NSString *)domain;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
@end

