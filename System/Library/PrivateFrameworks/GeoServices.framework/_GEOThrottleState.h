/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:19 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _GEOThrottleState : NSObject {

	unsigned long long _requestCount;
	double _lastResetTime;

}

@property (assign,nonatomic) unsigned long long requestCount;              //@synthesize requestCount=_requestCount - In the implementation block
@property (assign,nonatomic) double lastResetTime;                         //@synthesize lastResetTime=_lastResetTime - In the implementation block
-(unsigned long long)requestCount;
-(double)lastResetTime;
-(void)setLastResetTime:(double)arg1 ;
-(void)setRequestCount:(unsigned long long)arg1 ;
@end
