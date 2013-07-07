/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLChangeNotification.h>

@class NSArray, NSIndexSet, NSString, PLManagedObject, PLObjectSnapshot;

@interface PLContainerChangeNotification : PLChangeNotification
{
    id _object;
    PLObjectSnapshot *_snapshot;
    NSArray *_changedObjects;
    BOOL _didCalculateDiffs;
    BOOL _shouldReload;
    NSIndexSet *_deletedIndexes;
    NSIndexSet *_insertedIndexes;
    NSIndexSet *_movedIndexes;
    struct __CFArray *_movedFromIndexes;
    NSIndexSet *_changedIndexes;
    BOOL _countDidChange;
}

- (unsigned int)snapshotIndexForContainedObject:(id)arg1;
@property(readonly, nonatomic) NSArray *changedObjects;
@property(readonly, nonatomic) NSArray *insertedObjects;
@property(readonly, nonatomic) NSArray *deletedObjects;
@property(readonly, nonatomic) BOOL countDidChange;
@property(readonly, nonatomic) NSIndexSet *changedIndexesRelativeToSnapshot;
@property(readonly, nonatomic) NSIndexSet *changedIndexes;
@property(readonly, nonatomic) BOOL hasMoves;
- (void)enumerateMovesWithBlock:(id)arg1;
@property(readonly, nonatomic) NSIndexSet *insertedIndexes;
@property(readonly, nonatomic) NSIndexSet *deletedIndexes;
@property(readonly, nonatomic) BOOL shouldReload;
- (id)name;
- (id)object;
- (void)dealloc;
- (id)init;
- (void)_calculateDiffs;
- (void)_calculateDiffsIfNecessary;
- (BOOL)_getOldSet:(id *)arg1 newSet:(id *)arg2;
@property(readonly, nonatomic) NSString *_diffDescription;
@property(readonly, nonatomic) PLObjectSnapshot *snapshot;
@property(readonly, nonatomic) NSString *_contentRelationshipName;
@property(readonly, nonatomic) NSArray *_changedObjects;
@property(readonly, nonatomic) PLManagedObject *_managedObject;
@property(nonatomic, setter=_setDidCalculateDiffs:) BOOL _didCalculateDiffs;
- (id)_initWithObject:(id)arg1 snapshot:(id)arg2 changedObjects:(id)arg3;
- (id)_init;

@end

