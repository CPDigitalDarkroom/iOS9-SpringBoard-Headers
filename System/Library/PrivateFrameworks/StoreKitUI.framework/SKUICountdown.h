/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:55 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSDate, NSString, UIColor, SKUIArtworkList;

@interface SKUICountdown : NSObject {

	BOOL _isLoaded;
	BOOL _flapped;
	long long _type;
	NSURL* _URL;
	NSDate* _endDate;
	unsigned long long _dateFormat;
	NSDate* _startDate;
	long long _initialValue;
	long long _finalValue;
	long long _rate;
	NSString* _numberFormat;
	UIColor* _fontColor;
	UIColor* _flapTopColor;
	UIColor* _flapBottomColor;
	SKUIArtworkList* _artworkList;
	SKUIArtworkList* _endArtworkList;

}

@property (assign,nonatomic) long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                     //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                                //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) unsigned long long dateFormat;                 //@synthesize dateFormat=_dateFormat - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) long long initialValue;                        //@synthesize initialValue=_initialValue - In the implementation block
@property (assign,nonatomic) long long finalValue;                          //@synthesize finalValue=_finalValue - In the implementation block
@property (assign,nonatomic) long long rate;                                //@synthesize rate=_rate - In the implementation block
@property (nonatomic,copy) NSString * numberFormat;                         //@synthesize numberFormat=_numberFormat - In the implementation block
@property (nonatomic,copy) UIColor * fontColor;                             //@synthesize fontColor=_fontColor - In the implementation block
@property (nonatomic,copy) UIColor * flapTopColor;                          //@synthesize flapTopColor=_flapTopColor - In the implementation block
@property (nonatomic,copy) UIColor * flapBottomColor;                       //@synthesize flapBottomColor=_flapBottomColor - In the implementation block
@property (assign,getter=isFlapped,nonatomic) BOOL flapped;                 //@synthesize flapped=_flapped - In the implementation block
@property (nonatomic,retain) SKUIArtworkList * artworkList;                 //@synthesize artworkList=_artworkList - In the implementation block
@property (nonatomic,retain) SKUIArtworkList * endArtworkList;              //@synthesize endArtworkList=_endArtworkList - In the implementation block
-(NSDate *)startDate;
-(NSDate *)endDate;
-(long long)rate;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setDateFormat:(unsigned long long)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(BOOL)isLoaded;
-(NSString *)numberFormat;
-(void)setNumberFormat:(NSString *)arg1 ;
-(SKUIArtworkList *)artworkList;
-(BOOL)isFlapped;
-(UIColor *)fontColor;
-(UIColor *)flapTopColor;
-(UIColor *)flapBottomColor;
-(long long)initialValue;
-(long long)finalValue;
-(void)updateWithDictionary:(id)arg1 ;
-(id)initWithCountdownDictionary:(id)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setFlapped:(BOOL)arg1 ;
-(void)setRate:(long long)arg1 ;
-(void)setFinalValue:(long long)arg1 ;
-(void)setFontColor:(UIColor *)arg1 ;
-(void)setFlapTopColor:(UIColor *)arg1 ;
-(void)setFlapBottomColor:(UIColor *)arg1 ;
-(void)setArtworkList:(SKUIArtworkList *)arg1 ;
-(void)setEndArtworkList:(SKUIArtworkList *)arg1 ;
-(void)setInitialValue:(long long)arg1 ;
-(unsigned long long)dateFormat;
-(SKUIArtworkList *)endArtworkList;
@end

