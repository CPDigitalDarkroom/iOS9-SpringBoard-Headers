/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:00 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OABFill : NSObject
+(void)readGradientFill:(id)arg1 fromFillPropertiesManager:(id)arg2 state:(id)arg3 ;
+(void)readImageFill:(id)arg1 fromFillPropertiesManager:(id)arg2 state:(id)arg3 ;
+(void)addStopsFromArray:(const OABGradientStop*)arg1 stopCount:(int)arg2 inverted:(BOOL)arg3 startPos:(float)arg4 endPos:(float)arg5 toStopArray:(id)arg6 fillPropertiesManager:(id)arg7 ;
+(id)readFillFromFillPropertiesManager:(id)arg1 state:(id)arg2 ;
@end
