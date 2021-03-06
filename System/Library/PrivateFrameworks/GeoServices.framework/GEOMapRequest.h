/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOMapRequestManager;

@interface GEOMapRequest : NSObject {

	GEOMapRequestManager* _requestManager;
	/*^block*/id _completionHandler;
	BOOL _isFinished;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) BOOL isFinished;               //@synthesize isFinished=_isFinished - In the implementation block
-(void)cancel;
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)complete;
-(BOOL)isFinished;
-(id)initWithManager:(id)arg1 ;
@end

