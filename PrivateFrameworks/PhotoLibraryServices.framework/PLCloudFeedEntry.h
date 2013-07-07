/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSDate, NSNumber, NSString, NSURL;

@interface PLCloudFeedEntry : PLManagedObject
{
}

+ (id)entityName;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entryWithURIRepresentation:(id)arg1 inLibrary:(id)arg2;
+ (id)allEntriesInManagedObjectContext:(id)arg1;
+ (id)recentAssetsEntriesInLibrary:(id)arg1 limit:(int)arg2;
+ (id)allEntriesInLibrary:(id)arg1;
+ (id)entriesSortDescriptorsAscending:(BOOL)arg1;
@property(readonly, nonatomic) int entryPriority;
@property(readonly, nonatomic) int entryType;
@property(readonly, nonatomic) NSURL *URIRepresentation;

// Remaining properties
@property(retain, nonatomic) NSString *entryAlbumGUID; // @dynamic entryAlbumGUID;
@property(retain, nonatomic) NSDate *entryDate; // @dynamic entryDate;
@property(retain, nonatomic) NSString *entryInvitationRecordGUID; // @dynamic entryInvitationRecordGUID;
@property(retain, nonatomic) NSNumber *entryPriorityNumber; // @dynamic entryPriorityNumber;
@property(retain, nonatomic) NSNumber *entryTypeNumber; // @dynamic entryTypeNumber;

@end

