/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _MLClientCompletionBlockWrapper : NSObject
{
    id _libraryCompletionHandler;
    id _transactionCompletionHandler;
    id _queryCompletionHandler;
}

+ (id)emptyClientCompletionBlock;
+ (id)clientCompletionBlockWithQueryResultHandler:(id)arg1;
+ (id)clientCompletionBlockWithTransactionHandler:(id)arg1;
+ (id)clientCompletionBlockWithLibraryHandler:(id)arg1;
@property(copy, nonatomic) id queryCompletionHandler; // @synthesize queryCompletionHandler=_queryCompletionHandler;
@property(copy, nonatomic) id transactionCompletionHandler; // @synthesize transactionCompletionHandler=_transactionCompletionHandler;
@property(copy, nonatomic) id libraryCompletionHandler; // @synthesize libraryCompletionHandler=_libraryCompletionHandler;
- (void).cxx_destruct;

@end

