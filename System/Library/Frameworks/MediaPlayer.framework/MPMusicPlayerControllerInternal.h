/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPServerObjectProxy.h>
#import <libobjc.A.dylib/MPMusicPlayerController.h>

@class MPMediaItemCollection, MPMusicPlayerController, BKSProcessAssertion, MPMediaQuery;

@interface MPMusicPlayerControllerInternal : MPServerObjectProxy <MPMusicPlayerController> {

	unsigned _clientPort;
	long long _inBlockHandlingPlaybackStateChangedMessageFromServer;
	MPMediaItemCollection* _itemCollection;
	MPMusicPlayerController* _musicPlayerController;
	long long _playbackNotificationObservers;
	long long _playbackState;
	BOOL _preparedToPlay;
	BKSProcessAssertion* _processAssertion;
	MPMediaQuery* _query;
	CFRunLoopSourceRef _runLoopSource;
	unsigned _didCheckIn : 1;
	unsigned _useApplicationSpecificQueue : 1;
	unsigned _useCachedPlaybackState : 1;
	unsigned _cachedPlaybackStateIsValid : 1;
	unsigned _allowsBackgroundVideo : 1;
	unsigned _wantsQueueModificationsDisabled : 1;

}

@property (assign) BOOL inBlockHandlingPlaybackStateChangedMessageFromServer; 
-(id)initWithMusicPlayerController:(id)arg1 ;
-(void)acquireProcessAssertion;
-(void)setInBlockHandlingPlaybackStateChangedMessageFromServer:(BOOL)arg1 ;
-(BOOL)inBlockHandlingPlaybackStateChangedMessageFromServer;
-(BOOL)prepareForRemoteSelectorInvocation;
-(id)_bundleIdentifier;
-(void)didPrepareForRemoteSelectorInvocation;
-(void)serverConnectionDied;
-(void)dealloc;
@end
