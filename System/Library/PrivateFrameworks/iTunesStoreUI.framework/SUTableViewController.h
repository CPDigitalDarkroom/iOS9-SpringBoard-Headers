/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:16 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class SUTableDataSource, NSIndexPath, SUTableView, UITableView, NSString;

@interface SUTableViewController : SUViewController <UITableViewDataSource, UITableViewDelegate> {

	SUTableDataSource* _dataSource;
	long long _disappearOrientation;
	NSIndexPath* _firstTapIndexPath;
	long long _placeholderRowCount;
	BOOL _preferUserInteractionWhileScrolling;
	SUTableView* _tableView;
	long long _tableViewStyle;

}

@property (nonatomic,readonly) unsigned long long numberOfRows; 
@property (nonatomic,retain) SUTableDataSource * dataSource;                 //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                      //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) long long tableViewStyle;                       //@synthesize tableViewStyle=_tableViewStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDataSource:(SUTableDataSource *)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(SUTableDataSource *)dataSource;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(UITableView *)tableView;
-(unsigned long long)numberOfRows;
-(void)setTableViewStyle:(long long)arg1 ;
-(void)scrollToRowAtIndexPath:(id)arg1 atScrollPosition:(long long)arg2 animated:(BOOL)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(long long)tableViewStyle;
-(id)copyScriptProperties;
-(void)setScriptProperties:(id)arg1 ;
-(id)copyArchivableContext;
-(id)copyDefaultScriptProperties;
-(void)reloadForChangedRowCount:(long long)arg1 ;
-(void)_reloadPlaceholderCells;
-(void)_resetTableView;
-(void)_doubleTapTimeout;
-(BOOL)indexPathIsPlaceholder:(id)arg1 ;
-(int)clippedCornersForIndexPath:(id)arg1 ;
-(BOOL)deleteRowAtIndexPath:(id)arg1 ;
-(BOOL)canSelectRowAtIndexPath:(id)arg1 ;
-(void)_deliverTapCount:(long long)arg1 forIndexPath:(id)arg2 ;
-(BOOL)handleSelectionForIndexPath:(id)arg1 tapCount:(long long)arg2 ;
-(id)newTableView;
@end

