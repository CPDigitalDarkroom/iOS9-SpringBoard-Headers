/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface GEOSuggestedDestinationsProvider : NSObject {

	NSArray* _suggestions;
	/*^block*/id _updateHandler;

}

@property (nonatomic,readonly) NSArray * suggestions;              //@synthesize suggestions=_suggestions - In the implementation block
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)dealloc;
-(void)startMonitoringSuggestionsWithUpdateHandler:(/*^block*/id)arg1 ;
-(NSArray *)suggestions;
-(void)stopMonitoringSuggestions;
-(void)updateSuggestions:(id)arg1 ;
@end

