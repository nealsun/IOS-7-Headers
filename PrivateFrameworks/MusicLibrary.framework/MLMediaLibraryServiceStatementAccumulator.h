/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MLMediaLibraryService, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface MLMediaLibraryServiceStatementAccumulator : NSObject
{
    MLMediaLibraryService *_xpcService;
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned int _statementThreshold;
    NSMutableArray *_statementQueue;
    NSString *_databasePath;
    NSUUID *_existingTransactionIdentifier;
    unsigned int _priorityLevel;
}

@property(nonatomic) unsigned int priorityLevel; // @synthesize priorityLevel=_priorityLevel;
@property(retain, nonatomic) NSUUID *existingTransactionIdentifier; // @synthesize existingTransactionIdentifier=_existingTransactionIdentifier;
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(readonly, nonatomic) NSMutableArray *statementQueue; // @synthesize statementQueue=_statementQueue;
@property(nonatomic) unsigned int statementThreshold; // @synthesize statementThreshold=_statementThreshold;
- (void).cxx_destruct;
- (void)_onQueueFlushAndWait:(BOOL)arg1;
- (void)flushAndWait:(BOOL)arg1;
- (void)enqueueStatement:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDatabasePath:(id)arg1;

@end

