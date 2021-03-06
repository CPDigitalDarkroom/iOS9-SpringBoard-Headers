/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:09 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class WKConnection, NSString;

@interface WKWebProcessPlugInController : NSObject <WKObject> {

	ObjectStorage<WebKit::InjectedBundle> _bundle;
	RetainPtr<id<WKWebProcessPlugIn> >* _principalClassInstance;

}

@property (readonly) OpaqueWKBundleRef _bundleRef; 
@property (readonly) WKConnection * connection; 
@property (readonly) id parameters; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(OpaqueWKBundleRef)_bundleRef;
-(void)dealloc;
-(id)parameters;
-(WKConnection *)connection;
-(Object*)_apiObject;
-(void)_setPrincipalClassInstance:(id)arg1 ;
@end

