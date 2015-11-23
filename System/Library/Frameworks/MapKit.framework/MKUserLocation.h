/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:29 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class MKUserLocationInternal, CLLocation, CLHeading, NSString;

@interface MKUserLocation : NSObject <MKAnnotation> {

	MKUserLocationInternal* _internal;
	double _expectedCoordinateUpdateInterval;

}

@property (assign,getter=isUpdating,nonatomic) BOOL updating; 
@property (nonatomic,retain) CLLocation * location; 
@property (nonatomic,retain) CLHeading * heading; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (assign,nonatomic) SCD_Struct_MK1 coordinate; 
@property (nonatomic,readonly) double headingDegrees; 
@property (nonatomic,readonly) double accuracy; 
@property (nonatomic,retain) CLLocation * fixedLocation; 
@property (nonatomic,retain) CLLocation * predictedLocation; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,readonly) NSString * shortDescription; 
@property (assign,nonatomic) double expectedCoordinateUpdateInterval;              //@synthesize expectedCoordinateUpdateInterval=_expectedCoordinateUpdateInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_setAnnotationClass:(Class)arg1 ;
+(id)keyPathsForValuesAffectingSubtitle;
+(id)title;
-(void)setPredictedLocation:(CLLocation *)arg1 ;
-(double)headingDegrees;
-(BOOL)isEqualToLocation:(id)arg1 ;
-(CLLocation *)predictedLocation;
-(void)_updateCoordinate;
-(BOOL)isUpdating;
-(double)expectedCoordinateUpdateInterval;
-(void)setExpectedCoordinateUpdateInterval:(double)arg1 ;
-(CLLocation *)fixedLocation;
-(void)setUpdating:(BOOL)arg1 ;
-(void)setFixedLocation:(CLLocation *)arg1 ;
-(void)setCoordinate:(SCD_Struct_MK1)arg1 ;
-(SCD_Struct_MK1)coordinate;
-(void)dealloc;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(NSString *)title;
-(void)reset;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(CLLocation *)location;
-(NSString *)shortDescription;
-(void)setLocation:(CLLocation *)arg1 ;
-(id)annotation;
-(void)setHeading:(CLHeading *)arg1 ;
-(CLHeading *)heading;
-(double)course;
-(void)setCourse:(double)arg1 ;
-(double)accuracy;
@end
