/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSData, NSObject, NSString;

@interface TICryptographer : NSObject {

	NSData* _deviceSalt;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _cachedRecipientName;
	NSString* _cachedRecipientDigest;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) NSData * deviceSalt; 
@property (nonatomic,copy) NSString * cachedRecipientName;                              //@synthesize cachedRecipientName=_cachedRecipientName - In the implementation block
@property (nonatomic,copy) NSString * cachedRecipientDigest;                            //@synthesize cachedRecipientDigest=_cachedRecipientDigest - In the implementation block
+(id)sharedCryptographer;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSString *)cachedRecipientName;
-(NSData *)deviceSalt;
-(NSString *)cachedRecipientDigest;
-(void)setCachedRecipientDigest:(NSString *)arg1 ;
-(id)stringDigestForName:(id)arg1 ;
-(void)setCachedRecipientName:(NSString *)arg1 ;
@end

