/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:04 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EDResources, NSMutableArray, NSString;

@interface EDConditionalFormattingRule : NSObject {

	EDResources* mResources;
	int mType;
	int mOperator;
	NSMutableArray* mFormulas;
	unsigned long long mDifferentialStyleIndex;
	BOOL mStopIfTrue;
	BOOL mAppliesToDateOnly;
	long long mPriority;
	BOOL mAboveAverage;
	BOOL mBottom;
	BOOL mEqualAverage;
	BOOL mPercent;
	unsigned long long mRank;
	long long mStdDev;
	NSString* mText;
	int mTimePeriod;

}
+(id)conditionalFormattingRuleWithResources:(id)arg1 ;
-(unsigned long long)differentialStyleIndex;
-(void)setDifferentialStyleIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)text;
-(void)setText:(id)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(BOOL)bottom;
-(BOOL)percent;
-(unsigned long long)formulaCount;
-(id)formulaAtIndex:(unsigned long long)arg1 ;
-(void)setBottom:(BOOL)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(long long)compareToOtherRuleUsingPriority:(id)arg1 ;
-(int)operatorEnum;
-(void)setOperatorEnum:(int)arg1 ;
-(void)addFormula:(id)arg1 worksheet:(id)arg2 ;
-(id)differentialStyle;
-(void)setDifferentialStyle:(id)arg1 ;
-(BOOL)stopIfTrue;
-(void)setStopIfTrue:(BOOL)arg1 ;
-(BOOL)aboveAverage;
-(void)setAboveAverage:(BOOL)arg1 ;
-(BOOL)equalAverage;
-(void)setEqualAverage:(BOOL)arg1 ;
-(void)setPercent:(BOOL)arg1 ;
-(unsigned long long)rank;
-(void)setRank:(unsigned long long)arg1 ;
-(long long)stdDev;
-(void)setStdDev:(long long)arg1 ;
-(int)timePeriod;
-(void)setTimePeriod:(int)arg1 ;
-(BOOL)appliesToDateOnly;
-(void)setAppliesToDateOnly:(BOOL)arg1 ;
@end

