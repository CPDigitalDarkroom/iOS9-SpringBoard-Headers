/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOETAProvider : NSObject
-(void)startRequest:(id)arg1 finished:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)cancelRequest;
-(void)startSimpleETARequest:(id)arg1 finished:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)startRequest:(id)arg1 connectionProperties:(const SCD_Struct_GE131*)arg2 willSendRequest:(/*^block*/id)arg3 finished:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(void)updateRequest:(id)arg1 finished:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
@end

