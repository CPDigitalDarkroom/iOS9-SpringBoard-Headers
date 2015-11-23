/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:15 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class MPMediaPlaylist, MPMediaItem;


@protocol MusicGeniusMixQueueFeederDataSource <NSObject>
@property (nonatomic,readonly) MPMediaPlaylist * mixPlaylist; 
@property (nonatomic,readonly) MPMediaItem * requiredInitialMediaItem; 
@required
-(MPMediaPlaylist *)mixPlaylist;
-(unsigned long long)geniusMixQueueFeederMediaItemCount:(id)arg1;
-(id)geniusMixQueueFeeder:(id)arg1 queryForMediaItemAtIndex:(unsigned long long)arg2;
-(unsigned long long)geniusMixQueueFeeder:(id)arg1 indexOfMediaItem:(id)arg2;
-(id)geniusMixQueueFeeder:(id)arg1 mediaItemAtIndex:(unsigned long long)arg2;
-(MPMediaItem *)requiredInitialMediaItem;

@end
