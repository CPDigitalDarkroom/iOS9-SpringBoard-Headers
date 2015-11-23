/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:19 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SSKeyValueStore;

@interface SUScriptKeyValueStore : SUScriptObject {

	NSString* _domain;
	SSKeyValueStore* _keyValueStore;

}
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)_checkOutStoreWithDomain:(id)arg1 ;
+(void)_popStoreWithDomain:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)dealloc;
-(id)initWithDomain:(id)arg1 ;
-(id)_className;
-(void)getValueForKey:(id)arg1 usingFunction:(id)arg2 ;
-(void)removeAllValues;
-(void)removeValueForKey:(id)arg1 ;
-(void)setValueForKey:(id)arg1 value:(id)arg2 ;
@end
