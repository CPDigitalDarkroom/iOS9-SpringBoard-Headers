/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:09 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OCXWriteState, TCXmlPrefixStreamWriter;

@interface PXAnimationWriteState : NSObject {

	unsigned long long mCommonTimeNodeDataId;
	OCXWriteState* mWriteState;
	TCXmlPrefixStreamWriter* mFile;
	BOOL mHasMainSeqTimeNodeId;
	unsigned long long mMainSeqTimeNodeId;
	OCXWriteState* _writeState;
	TCXmlPrefixStreamWriter* _file;

}

@property (nonatomic,retain) OCXWriteState * writeState;                  //@synthesize writeState=_writeState - In the implementation block
@property (nonatomic,retain) TCXmlPrefixStreamWriter * file;              //@synthesize file=_file - In the implementation block
-(void)dealloc;
-(void)setFile:(TCXmlPrefixStreamWriter *)arg1 ;
-(TCXmlPrefixStreamWriter *)file;
-(void)setWriteState:(OCXWriteState *)arg1 ;
-(id)initWithWriteState:(id)arg1 file:(id)arg2 ;
-(unsigned long long)newCommonTimeNodeDataId;
-(BOOL)hasMainSeqTimeNodeId;
-(void)setMainSeqTimeNodeId:(unsigned long long)arg1 ;
-(unsigned long long)mainSeqTimeNodeId;
-(OCXWriteState *)writeState;
@end
