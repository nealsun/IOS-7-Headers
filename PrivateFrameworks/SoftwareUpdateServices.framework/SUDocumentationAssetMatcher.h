/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SoftwareUpdateServices/SUAssetStateMatcher.h>

@class ASAsset;

@interface SUDocumentationAssetMatcher : SUAssetStateMatcher
{
    ASAsset *_suAsset;
}

+ (id)matcherDocumentationFromAsset:(id)arg1;
+ (id)matcherForInstalledDocumentationFromAsset:(id)arg1;
- (id)_sortedMatcherPredicatesFromSoftwareUpdateAsset:(id)arg1;
- (id)_queryPredicateForProperties:(id)arg1;
- (id)_findMatchFromCandidates:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithSoftwareUpdateAsset:(id)arg1 limitingToStates:(int)arg2;
- (id)initWithSoftwareUpdateAsset:(id)arg1;

@end

