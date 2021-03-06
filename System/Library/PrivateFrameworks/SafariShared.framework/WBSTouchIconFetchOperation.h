/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:37 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariShared/WBSSiteMetadataFetchOperation.h>
#import <libobjc.A.dylib/WBSTouchIconObserver.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@class _WKRemoteObjectInterface, NSTimer, NSArray, WKProcessPool, WKWebView, NSString;

@interface WBSTouchIconFetchOperation : WBSSiteMetadataFetchOperation <WBSTouchIconObserver, WKNavigationDelegate> {

	_WKRemoteObjectInterface* _touchIconObserverInterface;
	NSTimer* _loadingTimeoutTimer;
	NSArray* _pendingTouchIconURLs;
	long long _state;
	/*^block*/id _completionHandler;
	WKProcessPool* _processPool;
	WKWebView* _webView;

}

@property (nonatomic,copy,readonly) id completionHandler;                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) WKProcessPool * processPool;              //@synthesize processPool=_processPool - In the implementation block
@property (nonatomic,readonly) WKWebView * webView;                      //@synthesize webView=_webView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)dealloc;
-(NSString *)description;
-(id)completionHandler;
-(void)start;
-(WKWebView *)webView;
-(id)preferences;
-(id)initWithRequest:(id)arg1 ;
-(void)resetState;
-(void)_startOffscreenTouchIconRequest;
-(void)_clearWebView;
-(void)didFetchIconURLs:(id)arg1 forURL:(id)arg2 ;
-(id)webViewConfiguration;
-(void)setUpRemoteObjectProxies;
-(void)willBeginLoading;
-(void)_scheduleTimeoutWithTimeInterval:(double)arg1 ;
-(void)tearDownRemoveObjectProxies;
-(void)didCompleteWithIcon:(id)arg1 requestDidSucceed:(BOOL)arg2 ;
-(void)_downloadFirstValidImageWithURLs:(id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(void)_downloadPendingTouchIconURLs;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(id)initWithRequest:(id)arg1 processPool:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_webViewWebProcessDidCrash:(id)arg1 ;
-(WKProcessPool *)processPool;
@end

