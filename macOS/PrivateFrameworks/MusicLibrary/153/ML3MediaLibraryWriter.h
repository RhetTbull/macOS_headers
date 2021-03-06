//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue, NSTimer;

@interface ML3MediaLibraryWriter : NSObject
{
    NSTimer *_watchdogTimer;
    BOOL _suspended;
    id <ML3MediaLibraryWriterDelegate> _delegate;
    double _transactionTimeout;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_transactionMap;
    NSOperationQueue *_databaseOperationQueue;
    NSOperationQueue *_databaseOperationSerialQueue;
}

+ (id)writerErrorWithCode:(long long)arg1 description:(id)arg2;
+ (id)writerErrorWithCode:(long long)arg1 description:(id)arg2 userInfo:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSOperationQueue *databaseOperationSerialQueue; // @synthesize databaseOperationSerialQueue=_databaseOperationSerialQueue;
@property(readonly, nonatomic) NSOperationQueue *databaseOperationQueue; // @synthesize databaseOperationQueue=_databaseOperationQueue;
@property(readonly, nonatomic) NSMutableDictionary *transactionMap; // @synthesize transactionMap=_transactionMap;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic, getter=isSuspended) BOOL suspended; // @synthesize suspended=_suspended;
@property(nonatomic) double transactionTimeout; // @synthesize transactionTimeout=_transactionTimeout;
@property(nonatomic) __weak id <ML3MediaLibraryWriterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_watchdogTimerFired:(id)arg1;
- (BOOL)_shouldWatchdogTransaction:(id)arg1;
- (void)_tearDownWatchdogTimer;
- (void)_setupWatchdogTimer;
- (void)_destroyTransactionForIdentifier:(id)arg1 forceRelinquishConnection:(BOOL)arg2;
- (void)_destroyTransaction:(id)arg1 forceRelinquishConnection:(BOOL)arg2;
- (id)_createNewTransactionForLibrary:(id)arg1 fromClient:(id)arg2 readOnly:(BOOL)arg3;
- (id)_allDatabaseOperations;
- (void)_unregisterTransaction:(id)arg1;
- (void)_registerTransaction:(id)arg1;
- (id)_transactionForIdentifier:(id)arg1;
- (void)reset;
- (void)cancelAllActiveDatabaseOperationsAndWaitUntilFinished:(BOOL)arg1;
- (void)cancelAllActiveTransactions;
- (void)cancelActiveTransactionForClient:(id)arg1;
- (void)performDatabaseOperation:(unsigned long long)arg1 onLibrary:(id)arg2 withAttributes:(id)arg3 options:(id)arg4 fromClient:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (BOOL)endTransaction:(id)arg1 shouldCommit:(BOOL)arg2 error:(id *)arg3;
- (id)executeUntrustedQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 error:(id *)arg5;
- (id)executeQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 error:(id *)arg5;
- (BOOL)executeUntrustedUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 error:(id *)arg4;
- (BOOL)executeUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 error:(id *)arg4;
- (id)beginTransactionForLibrary:(id)arg1 withClient:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (id)description;
- (void)dealloc;
- (id)init;

@end

