/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:10 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CALayer;

@interface WUIDynamicWeatherBackgroundInteractiveTransaction : NSObject {

	double _progress;
	CALayer* _layer;
	CALayer* _toLayer;
	long long _swipeDirection;

}

@property (assign,nonatomic) double progress;                       //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) CALayer * layer;                       //@synthesize layer=_layer - In the implementation block
@property (assign,nonatomic) CALayer * toLayer;                     //@synthesize toLayer=_toLayer - In the implementation block
@property (assign,nonatomic) long long swipeDirection;              //@synthesize swipeDirection=_swipeDirection - In the implementation block
-(long long)swipeDirection;
-(CALayer *)layer;
-(void)setLayer:(CALayer *)arg1 ;
-(void)setProgress:(double)arg1 ;
-(double)progress;
-(CALayer *)toLayer;
-(void)setToLayer:(CALayer *)arg1 ;
-(void)setSwipeDirection:(long long)arg1 ;
@end
