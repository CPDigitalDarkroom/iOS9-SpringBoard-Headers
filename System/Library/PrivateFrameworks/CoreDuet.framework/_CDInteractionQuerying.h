/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _CDInteractionQuerying
@required
-(unsigned long long)countInteractionsUsingPredicate:(id)arg1 error:(id*)arg2;
-(id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4;
-(unsigned long long)countContactsUsingPredicate:(id)arg1 error:(id*)arg2;
-(id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3;
-(id)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4;
-(void)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)countInteractionsUsingPredicate:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)countContactsUsingPredicate:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end
