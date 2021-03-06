/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:55 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICSearchIndexDelegate.h>
#import <libobjc.A.dylib/ICSearchIndexingBatchQueueDelegate.h>
#import <libobjc.A.dylib/ICSearchIndexer.h>

@class ICSearchIndexerContext, NSArray, ICSearchIndexingBatchQueue, ICBatchSearchIndexerResumer, NSOperationQueue, NSMutableDictionary, ICSearchIndexableMutableIdentifiers, ICSelectorDelayer, ICThreadBlockDispatcher, ICDispatchGroup, NSString;

@interface ICBatchSearchIndexer : NSObject <ICSearchIndexDelegate, ICSearchIndexingBatchQueueDelegate, ICSearchIndexer> {

	BOOL _supportsCompletionHandling;
	BOOL _isResumed;
	BOOL _isIndexing;
	BOOL _isInBatch;
	BOOL _hasScheduledIndexing;
	BOOL _waitingForGroupInSynchronousRunMode;
	ICSearchIndexerContext* _indexerContext;
	NSArray* _searchIndexes;
	ICSearchIndexingBatchQueue* _batchQueue;
	ICBatchSearchIndexerResumer* _resumer;
	NSOperationQueue* _operationQueue;
	NSMutableDictionary* _operationDictionary;
	ICSearchIndexableMutableIdentifiers* _didChangeUpdatedIdentifiers;
	ICSearchIndexableMutableIdentifiers* _didChangeAddedIdentifiers;
	ICSelectorDelayer* _processPendingDidChangeIdentifiersDelayer;
	ICSelectorDelayer* _processObjectsDelayer;
	ICSelectorDelayer* _scheduleProcessingAfterUnpauseDelayer;
	ICThreadBlockDispatcher* _indexerBlockDispatcher;
	ICDispatchGroup* _dispatchGroup;

}

@property (nonatomic,retain) ICSearchIndexerContext * indexerContext;                                        //@synthesize indexerContext=_indexerContext - In the implementation block
@property (nonatomic,readonly) long long runMode; 
@property (nonatomic,copy) NSArray * searchIndexes;                                                          //@synthesize searchIndexes=_searchIndexes - In the implementation block
@property (assign,nonatomic) BOOL supportsCompletionHandling;                                                //@synthesize supportsCompletionHandling=_supportsCompletionHandling - In the implementation block
@property (assign,nonatomic) BOOL isResumed;                                                                 //@synthesize isResumed=_isResumed - In the implementation block
@property (assign,nonatomic) BOOL isIndexing;                                                                //@synthesize isIndexing=_isIndexing - In the implementation block
@property (assign,nonatomic) BOOL isInBatch;                                                                 //@synthesize isInBatch=_isInBatch - In the implementation block
@property (nonatomic,retain) ICSearchIndexingBatchQueue * batchQueue;                                        //@synthesize batchQueue=_batchQueue - In the implementation block
@property (assign,nonatomic) BOOL hasScheduledIndexing;                                                      //@synthesize hasScheduledIndexing=_hasScheduledIndexing - In the implementation block
@property (nonatomic,retain) ICBatchSearchIndexerResumer * resumer;                                          //@synthesize resumer=_resumer - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * operationDictionary;                                      //@synthesize operationDictionary=_operationDictionary - In the implementation block
@property (nonatomic,retain) ICSearchIndexableMutableIdentifiers * didChangeUpdatedIdentifiers;              //@synthesize didChangeUpdatedIdentifiers=_didChangeUpdatedIdentifiers - In the implementation block
@property (nonatomic,retain) ICSearchIndexableMutableIdentifiers * didChangeAddedIdentifiers;                //@synthesize didChangeAddedIdentifiers=_didChangeAddedIdentifiers - In the implementation block
@property (nonatomic,retain) ICSelectorDelayer * processPendingDidChangeIdentifiersDelayer;                  //@synthesize processPendingDidChangeIdentifiersDelayer=_processPendingDidChangeIdentifiersDelayer - In the implementation block
@property (nonatomic,retain) ICSelectorDelayer * processObjectsDelayer;                                      //@synthesize processObjectsDelayer=_processObjectsDelayer - In the implementation block
@property (nonatomic,retain) ICSelectorDelayer * scheduleProcessingAfterUnpauseDelayer;                      //@synthesize scheduleProcessingAfterUnpauseDelayer=_scheduleProcessingAfterUnpauseDelayer - In the implementation block
@property (nonatomic,retain) ICThreadBlockDispatcher * indexerBlockDispatcher;                               //@synthesize indexerBlockDispatcher=_indexerBlockDispatcher - In the implementation block
@property (nonatomic,retain) ICDispatchGroup * dispatchGroup;                                                //@synthesize dispatchGroup=_dispatchGroup - In the implementation block
@property (assign,nonatomic) BOOL waitingForGroupInSynchronousRunMode;                                       //@synthesize waitingForGroupInSynchronousRunMode=_waitingForGroupInSynchronousRunMode - In the implementation block
@property (nonatomic,readonly) BOOL synchronous; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPaused;
-(void)dealloc;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setDispatchGroup:(ICDispatchGroup *)arg1 ;
-(ICDispatchGroup *)dispatchGroup;
-(void)performCompletionByLeavingGroup:(BOOL)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)enterGroup;
-(BOOL)isInBatch;
-(void)searchIndexFailedToDelete:(id)arg1 ;
-(void)setIsInBatch:(BOOL)arg1 ;
-(void)searchIndex:(id)arg1 didIndexBatch:(BOOL)arg2 withTransactionID:(id)arg3 ;
-(void)searchIndexShouldResumeProcessing:(id)arg1 ;
-(void)searchIndex:(id)arg1 shouldReindexIdentifiers:(id)arg2 ;
-(void)searchIndex:(id)arg1 shouldRemoveIdentifiers:(id)arg2 ;
-(void)searchIndexShouldReindexAllObjects:(id)arg1 ;
-(BOOL)canStartNextBatch;
-(void)setDidChangeAddedIdentifiers:(ICSearchIndexableMutableIdentifiers *)arg1 ;
-(void)setDidChangeUpdatedIdentifiers:(ICSearchIndexableMutableIdentifiers *)arg1 ;
-(void)setIndexerBlockDispatcher:(ICThreadBlockDispatcher *)arg1 ;
-(ICThreadBlockDispatcher *)indexerBlockDispatcher;
-(void)indexerContextDidPauseIndexing;
-(void)indexerContextDidUnpauseIndexing;
-(ICSearchIndexableMutableIdentifiers *)didChangeAddedIdentifiers;
-(ICSearchIndexableMutableIdentifiers *)didChangeUpdatedIdentifiers;
-(void)indexerContextObjectsDidChangeWithUpdateCount:(unsigned long long)arg1 deletedIdentifiers:(id)arg2 addedIdentifiers:(id)arg3 updatedIdentifiers:(id)arg4 immediateIdentifiers:(id)arg5 ;
-(BOOL)supportsCompletionHandling;
-(void)addDocumentWithSearchIndexableIdentifier:(id)arg1 searchStrings:(id)arg2 ;
-(void)removeDocumentsForSearchIndexableIdentifiers:(id)arg1 ;
-(BOOL)shouldSaveBatchQueue;
-(NSArray *)searchIndexes;
-(void)setSearchIndexes:(NSArray *)arg1 ;
-(BOOL)synchronous;
-(void)resumeWithIndexPersistedTransactionInfo:(id)arg1 resumer:(id)arg2 ;
-(void)setIndexerContext:(ICSearchIndexerContext *)arg1 ;
-(BOOL)shouldUpdateBatchData;
-(void)setBatchQueue:(ICSearchIndexingBatchQueue *)arg1 ;
-(void)setOperationDictionary:(NSMutableDictionary *)arg1 ;
-(void)processPendingDidChangeIdentifiers;
-(void)setProcessPendingDidChangeIdentifiersDelayer:(ICSelectorDelayer *)arg1 ;
-(void)processObjects;
-(void)setProcessObjectsDelayer:(ICSelectorDelayer *)arg1 ;
-(void)scheduleProcessingAfterUnpause;
-(void)setScheduleProcessingAfterUnpauseDelayer:(ICSelectorDelayer *)arg1 ;
-(void)cancelBackgroundOperations;
-(ICSearchIndexerContext *)indexerContext;
-(void)addDocumentForSearchIndexable:(id)arg1 searchStrings:(id)arg2 ;
-(void)addGenerateSearchIndexOperationForSearchIndexable:(id)arg1 searchIndexableIdentifier:(id)arg2 nonOperationSearchStrings:(id)arg3 ;
-(ICSearchIndexingBatchQueue *)batchQueue;
-(NSMutableDictionary *)operationDictionary;
-(void)addDocumentActionForOperation:(id)arg1 nonOperationSearchStrings:(id)arg2 ;
-(void)removeOperationForSearchIndexableIdentifier:(id)arg1 ;
-(void)scheduleProcessingWaitForGroupIfNecessary;
-(void)disableIndexingIfFinished;
-(void)cancelGenerateSearchIndexOperationForSearchIndexableIdentifier:(id)arg1 ;
-(void)processGenerateIndexStringsOperation:(id)arg1 nonOperationSearchStrings:(id)arg2 ;
-(BOOL)addOperation:(id)arg1 forSearchIndexableIdentifier:(id)arg2 ;
-(void)removeAllIndexingOperations;
-(void)setIsIndexing:(BOOL)arg1 ;
-(void)disableIndexing;
-(ICSelectorDelayer *)scheduleProcessingAfterUnpauseDelayer;
-(BOOL)isResumed;
-(BOOL)searchIndexesCanStartNextBatch;
-(BOOL)canProcessImmediateIdentifiers;
-(void)enableIndexingIfNecessary;
-(void)processImmediateObjects;
-(ICSelectorDelayer *)processObjectsDelayer;
-(void)requestFireForSelectorDelayer:(id)arg1 ;
-(BOOL)waitingForGroupInSynchronousRunMode;
-(void)setWaitingForGroupInSynchronousRunMode:(BOOL)arg1 ;
-(void)waitForGroupToComplete;
-(BOOL)addDocumentWithSearchStringsFromSearchIndexable:(id)arg1 searchIndexableIdentifier:(id)arg2 ;
-(void)batchIndexInBlock:(/*^block*/id)arg1 ;
-(void)processObjectsInBatchWhileCondition:(/*^block*/id)arg1 ;
-(void)addAllObjects;
-(long long)runMode;
-(void)addPendingDidChangeIdentifiers;
-(ICSelectorDelayer *)processPendingDidChangeIdentifiersDelayer;
-(void)savePendingDidChangeIdentifiers;
-(ICBatchSearchIndexerResumer *)resumer;
-(void)setResumer:(ICBatchSearchIndexerResumer *)arg1 ;
-(void)setIsResumed:(BOOL)arg1 ;
-(BOOL)hasPendingDidChangeIdentifiers;
-(id)queryableIndex;
-(id)asyncQueryableIndex;
-(void)updateIndexesWithIndexPersistedTransactionInfo:(id)arg1 ;
-(void)leaveGroup;
-(void)startProcessingPendingChanges;
-(id)initWithSearchIndexerContext:(id)arg1 ;
-(BOOL)hasScheduledIndexing;
-(void)setHasScheduledIndexing:(BOOL)arg1 ;
-(void)setSupportsCompletionHandling:(BOOL)arg1 ;
-(id)newAsyncQueryWithSearchTerms:(id)arg1 delegate:(id)arg2 ;
-(void)cancelAsyncQuery:(id)arg1 ;
-(void)resumeIndexing;
-(void)wrapUpIndexingIfNecessary;
-(void)reprocessAllObjects;
-(void)synchronouslyProcessAllObjects;
-(void)deleteIndex;
-(id)newQueryWithSearchTerms:(id)arg1 ;
-(void)cancelQuery:(id)arg1 ;
-(id)findNextMatchingIdentifiersForQuery:(id)arg1 isDone:(BOOL*)arg2 ;
-(void)performCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)isIndexing;
@end

