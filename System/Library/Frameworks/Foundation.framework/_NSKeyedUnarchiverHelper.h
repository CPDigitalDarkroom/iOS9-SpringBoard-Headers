/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSMutableArray, NSError;

@interface _NSKeyedUnarchiverHelper : NSObject {

	NSArray* _white;
	unsigned _lastRef;
	NSMutableArray* _allowedClasses;
	NSError* _decodeError;

}

@property (copy) NSError * decodeError;              //@synthesize decodeError=_decodeError - In the implementation block
-(id)allowedClassNames;
-(void)setAllowedClassNames:(id)arg1 ;
-(BOOL)classNameAllowed:(Class)arg1 ;
-(NSError *)decodeError;
-(void)setDecodeError:(NSError *)arg1 ;
-(void)dealloc;
-(id)init;
@end
