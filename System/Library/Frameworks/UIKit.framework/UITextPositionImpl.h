/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITextPosition.h>

@class WebVisiblePosition;

@interface UITextPositionImpl : UITextPosition {

	WebVisiblePosition* _webVisiblePosition;

}

@property (nonatomic,retain) WebVisiblePosition * webVisiblePosition;              //@synthesize webVisiblePosition=_webVisiblePosition - In the implementation block
+(id)wrapWebVisiblePosition:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(WebVisiblePosition *)webVisiblePosition;
-(void)setWebVisiblePosition:(WebVisiblePosition *)arg1 ;
@end
