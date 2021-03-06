/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:27 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthService.h>

@interface HDHeartRateService : HDHealthService {

	BOOL _deliverData;
	long long _preferredSensorLocation;

}

@property (assign,nonatomic) long long preferredSensorLocation;              //@synthesize preferredSensorLocation=_preferredSensorLocation - In the implementation block
+(long long)serviceType;
+(id)serviceUUID;
-(id)initWithDeviceManager:(id)arg1 propertyManager:(id)arg2 healthDaemon:(id)arg3 peripheral:(id)arg4 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)performOperation:(id)arg1 onPeripheral:(id)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setPreferredSensorLocation:(long long)arg1 ;
-(void)resetEnergyExpendedOnPeripheral:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)deliverData;
-(void)handleHeartRate:(id)arg1 ;
-(void)handleBodyLocation:(id)arg1 ;
-(void)setDeliverData:(BOOL)arg1 ;
-(long long)preferredSensorLocation;
@end

