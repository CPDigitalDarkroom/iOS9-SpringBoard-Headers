/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@interface AKRichBrushStrokePoint : NSObject {

	double _width;
	CGPoint _location;

}

@property (assign,nonatomic) CGPoint location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) double width;                  //@synthesize width=_width - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)width;
-(CGPoint)location;
-(void)setWidth:(double)arg1 ;
-(void)setLocation:(CGPoint)arg1 ;
@end
