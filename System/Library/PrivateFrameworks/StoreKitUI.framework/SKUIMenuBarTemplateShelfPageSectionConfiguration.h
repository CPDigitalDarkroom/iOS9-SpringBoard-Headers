/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:52 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIShelfPageSectionConfiguration.h>

@interface SKUIMenuBarTemplateShelfPageSectionConfiguration : SKUIShelfPageSectionConfiguration {

	id _fixedElementsCollectionViewCell;
	unsigned long long _numberOfIterations;
	long long _focusedIndex;

}
-(unsigned long long)numberOfIterations;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)cellForShelfViewElement:(id)arg1 indexPath:(id)arg2 ;
-(CGSize)cellSizeForShelfViewElement:(id)arg1 indexPath:(id)arg2 numberOfShelfItems:(long long)arg3 ;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg1 ;
-(long long)numberOfSectionCells;
-(void)registerReusableClassesForCollectionView:(id)arg1 ;
-(void)reloadShelfLayoutDataForShelfViewElement:(id)arg1 withShelfItemViewElements:(id)arg2 requestCellLayouts:(BOOL)arg3 numberOfShelfItems:(long long)arg4 ;
-(id)effectiveViewElementForShelfItemViewElement:(id)arg1 ;
-(id)initWithNumberOfIterations:(unsigned long long)arg1 ;
-(id)_focusedViewElement;
@end
