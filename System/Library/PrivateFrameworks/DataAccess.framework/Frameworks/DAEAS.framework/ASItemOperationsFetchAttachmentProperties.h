/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSString;

@interface ASItemOperationsFetchAttachmentProperties : ASItem {

	NSString* _attachmentContentType;
	NSString* _data;

}

@property (nonatomic,retain) NSString * attachmentContentType;              //@synthesize attachmentContentType=_attachmentContentType - In the implementation block
@property (nonatomic,retain) NSString * data;                               //@synthesize data=_data - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(NSString *)data;
-(void)setData:(NSString *)arg1 ;
-(NSString *)attachmentContentType;
-(void)setAttachmentContentType:(NSString *)arg1 ;
@end
