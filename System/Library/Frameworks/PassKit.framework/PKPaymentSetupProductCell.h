/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:40 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <PassKit/PKTableViewCell.h>

@class PKPaymentSetupProduct;

@interface PKPaymentSetupProductCell : PKTableViewCell {

	BOOL _drawsTopSeperator;
	PKPaymentSetupProduct* _product;
	double _textLabelOffset;

}

@property (nonatomic,retain) PKPaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
@property (assign,nonatomic) double textLabelOffset;                       //@synthesize textLabelOffset=_textLabelOffset - In the implementation block
@property (assign,nonatomic) BOOL drawsTopSeperator;                       //@synthesize drawsTopSeperator=_drawsTopSeperator - In the implementation block
+(id)reuseIdentifier;
-(void)pk_applyAppearance:(PKAppearanceSpecifier*)arg1 ;
-(id)pk_childrenForAppearance;
-(void)_updateDisplay;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(void)setTextLabelOffset:(double)arg1 ;
-(PKPaymentSetupProduct *)product;
-(double)textLabelOffset;
-(BOOL)drawsTopSeperator;
-(void)setDrawsTopSeperator:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

