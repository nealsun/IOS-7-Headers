/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <ProofReader/PRAutocorrectionContext.h>

@class NSMutableArray;

@interface PRPinyinContext : PRAutocorrectionContext
{
    NSMutableArray *_modifications;
    NSMutableArray *_addedModifications;
    NSMutableArray *_removedModifications;
    NSMutableArray *_addedRemovedModifications;
    NSMutableArray *_prefixes;
    char *_buffer;
    unsigned int *_syllableLengthArray;
    void *_connection;
    unsigned int _length;
    unsigned int _lengthBeforeApostrophes;
    unsigned int _startingPoint;
    unsigned int _lastIndexes[4];
    unsigned int _nextIndexes[2];
    unsigned int _startIndex;
    unsigned int _endIndex;
    unsigned int _abbreviatedSyllableCount;
    unsigned int _previouslyAnalyzedLength;
    BOOL _lastSyllableIsPartial;
}

- (id)prefixes;
- (id)removedModifications;
- (id)addedModifications;
- (id)currentModifications;
- (void)reset;
- (void)removeNumberOfInputCharacters:(unsigned int)arg1;
- (void)addInputCharacter:(unsigned short)arg1 geometryModel:(void *)arg2 geometryData:(id)arg3;
- (void)_removePrefixes;
- (void)_addPrefixes;
- (void)_filterModifications;
- (void)_addDeletions;
- (void)_addInsertions;
- (void)_addReplacements;
- (void)_addTranspositions;
- (void)_addSpecialEnglishWords;
- (void)_addEnglishWordsQuickly:(BOOL)arg1;
- (BOOL)_addEnglishWordsEndingAtIndex:(unsigned int)arg1 quickly:(BOOL)arg2;
- (BOOL)_addEnglishWordForRange:(struct _NSRange)arg1 quickly:(BOOL)arg2;
- (void)_advanceIndexes;
- (void)_removeModificationsAndMoveStartingPoint;
- (id)description;
- (void)dealloc;
- (id)init;

@end

