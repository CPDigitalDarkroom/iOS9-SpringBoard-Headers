/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:34 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@class CMKCameraView;

@interface PLPreviewOverlayView : UIView {

	CMKCameraView* cameraView;

}

@property (assign,nonatomic) CMKCameraView * cameraView; 
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CMKCameraView *)cameraView;
-(void)setCameraView:(CMKCameraView *)arg1 ;
@end
