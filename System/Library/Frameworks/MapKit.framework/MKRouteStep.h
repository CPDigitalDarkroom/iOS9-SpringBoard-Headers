/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:27 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOComposedRouteStep, NSString, MKRouteStepPolyline, MKPolyline;

@interface MKRouteStep : NSObject {

	GEOComposedRouteStep* _geoComposedRouteStep;
	NSString* _instructions;
	unsigned long long _transportType;
	MKRouteStepPolyline* _polyline;

}

@property (nonatomic,readonly) NSString * instructions;                                                               //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,readonly) NSString * notice; 
@property (nonatomic,readonly) MKPolyline * polyline;                                                                 //@synthesize polyline=_polyline - In the implementation block
@property (nonatomic,readonly) double distance; 
@property (nonatomic,readonly) unsigned long long transportType;                                                      //@synthesize transportType=_transportType - In the implementation block
@property (getter=_geoComposedRouteStep,nonatomic,readonly) GEOComposedRouteStep * geoComposedRouteStep;              //@synthesize geoComposedRouteStep=_geoComposedRouteStep - In the implementation block
-(id)_initWithGEOComposedRouteStep:(id)arg1 instructions:(id)arg2 transportType:(unsigned long long)arg3 polyline:(id)arg4 ;
-(id)_geoComposedRouteStep;
-(MKPolyline *)polyline;
-(NSString *)instructions;
-(unsigned long long)transportType;
-(NSString *)notice;
-(double)distance;
@end

