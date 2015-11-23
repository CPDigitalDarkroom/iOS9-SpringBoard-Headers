/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AudioToolbox/AUAudioUnitBus.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol AUAudioUnitXPCProtocol;
@class AUAudioUnit_XH, AVAudioFormat, NSArray;

@interface AUAudioUnitBus_XPC : AUAudioUnitBus <NSSecureCoding> {

	AUAudioUnit_XH* _audioUnit;
	id<AUAudioUnitXPCProtocol> _remoteAU;
	unsigned _scope;
	unsigned _element;
	AVAudioFormat* _format;
	NSArray* _supportedChannelLayoutTags;

}
+(BOOL)supportsSecureCoding;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(BOOL)setFormat:(id)arg1 error:(id*)arg2 ;
-(void)propertyChanged:(id)arg1 ;
-(id)format;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
@end
