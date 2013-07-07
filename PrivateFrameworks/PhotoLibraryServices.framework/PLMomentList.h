/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLManagedObject.h>

#import "PLAssetContainerList.h"

@class NSArray, NSData, NSDate, NSOrderedSet, NSString;

@interface PLMomentList : PLManagedObject <PLAssetContainerList>
{
}

+ (id)descriptionForGranularityLevel:(short)arg1;
+ (id)findOrCreateYearMomentListForYear:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)findOrCreateMegaMomentListForLeftoverMomentsInMonth:(int)arg1 inYear:(int)arg2 withDay:(int)arg3 inManagedObjectContext:(id)arg4;
+ (id)allMomentListsRequiringAnalysisInManagedObjectContext:(id)arg1 forLevel:(short)arg2 error:(id *)arg3;
+ (id)allMomentListsInManagedObjectContext:(id)arg1 forLevel:(short)arg2 error:(id *)arg3;
+ (id)allMomentListsInLibrary:(id)arg1 forLevel:(short)arg2;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
- (void)removeMomentsForYear:(id)arg1;
- (void)addMomentsForYear:(id)arg1;
- (void)removeMomentsForYearObject:(id)arg1;
- (void)addMomentsForYearObject:(id)arg1;
- (void)replaceMomentsForYearAtIndexes:(id)arg1 withMomentsForYear:(id)arg2;
- (void)removeMomentsForYearAtIndexes:(id)arg1;
- (void)insertMomentsForYear:(id)arg1 atIndexes:(id)arg2;
- (void)replaceObjectInMomentsForYearAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeObjectFromMomentsForYearAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 inMomentsForYearAtIndex:(unsigned int)arg2;
- (void)removeMomentsForMegaMoment:(id)arg1;
- (void)addMomentsForMegaMoment:(id)arg1;
- (void)removeMomentsForMegaMomentObject:(id)arg1;
- (void)addMomentsForMegaMomentObject:(id)arg1;
- (void)replaceMomentsForMegaMomentAtIndexes:(id)arg1 withMomentsForMegaMoment:(id)arg2;
- (void)removeMomentsForMegaMomentAtIndexes:(id)arg1;
- (void)insertMomentsForMegaMoment:(id)arg1 atIndexes:(id)arg2;
- (void)replaceObjectInMomentsForMegaMomentAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeObjectFromMomentsForMegaMomentAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 inMomentsForMegaMomentAtIndex:(unsigned int)arg2;
- (id)diagnosticInformation;
- (BOOL)supportsDiagnosticInformation;
@property(readonly, nonatomic) NSArray *localizedLocationNames;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(retain, nonatomic) NSOrderedSet *moments;
- (id)_typeDescription;
- (id)containersRelationshipName;
- (BOOL)canEditContainers;
- (BOOL)isEmpty;
@property(readonly, nonatomic) unsigned int containersCount;
- (id)containers;
- (BOOL)isMeaningful;
- (void)delete;

// Remaining properties
@property(retain, nonatomic) NSDate *endDate; // @dynamic endDate;
@property(nonatomic) short generationType; // @dynamic generationType;
@property(nonatomic) short granularityLevel; // @dynamic granularityLevel;
@property(retain, nonatomic) NSOrderedSet *momentsForMegaMoment; // @dynamic momentsForMegaMoment;
@property(retain, nonatomic) NSOrderedSet *momentsForYear; // @dynamic momentsForYear;
@property(retain, nonatomic) NSDate *representativeDate; // @dynamic representativeDate;
@property(retain, nonatomic) NSData *reverseLocationData; // @dynamic reverseLocationData;
@property(nonatomic) BOOL reverseLocationDataIsValid; // @dynamic reverseLocationDataIsValid;
@property(nonatomic) int sortIndex; // @dynamic sortIndex;
@property(retain, nonatomic) NSDate *startDate; // @dynamic startDate;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

