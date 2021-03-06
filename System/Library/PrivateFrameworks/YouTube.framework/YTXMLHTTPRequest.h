/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:14 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <YouTube/XMLSAXHTTPRequest.h>

@class NSMutableURLRequest;

@interface YTXMLHTTPRequest : XMLSAXHTTPRequest {

	NSMutableURLRequest* _deferredRequest;
	BOOL _needsAccountAuth;
	BOOL _needsHostHeader;

}

@property (assign,nonatomic) BOOL needsAccountAuth;              //@synthesize needsAccountAuth=_needsAccountAuth - In the implementation block
@property (assign,nonatomic) BOOL needsHostHeader;               //@synthesize needsHostHeader=_needsHostHeader - In the implementation block
-(void)dealloc;
-(id)init;
-(void)loadRequest:(id)arg1 ;
-(BOOL)needsAccountAuth;
-(void)didAuthenticate:(id)arg1 ;
-(void)setNeedsAccountAuth:(BOOL)arg1 ;
-(void)setNeedsHostHeader:(BOOL)arg1 ;
-(void)failedToAuthenticate:(id)arg1 ;
-(void)listenForAuthenticationNotifications:(BOOL)arg1 ;
-(BOOL)needsHostHeader;
@end

