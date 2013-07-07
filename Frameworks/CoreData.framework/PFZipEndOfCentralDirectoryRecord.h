/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface PFZipEndOfCentralDirectoryRecord : NSObject
{
    unsigned short _numberOfDisk;
    unsigned short _diskWhereCentralDirectoryStarts;
    unsigned short _numberOfCentralDirectoryRecordsOnThisDisk;
    unsigned short _totalNumberOfCentralDirectoryRecords;
    unsigned int _byteSizeOfCentralDirectory;
    unsigned int _centralDirectoryOffset;
    unsigned short _commentLength;
    NSString *_comment;
}

@property(retain, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(readonly, nonatomic) unsigned short commentLength; // @synthesize commentLength=_commentLength;
@property(nonatomic) unsigned int centralDirectoryOffset; // @synthesize centralDirectoryOffset=_centralDirectoryOffset;
@property(nonatomic) unsigned int byteSizeOfCentralDirectory; // @synthesize byteSizeOfCentralDirectory=_byteSizeOfCentralDirectory;
@property(nonatomic) unsigned short totalNumberOfCentralDirectoryRecords; // @synthesize totalNumberOfCentralDirectoryRecords=_totalNumberOfCentralDirectoryRecords;
@property(nonatomic) unsigned short numberOfCentralDirectoryRecordsOnThisDisk; // @synthesize numberOfCentralDirectoryRecordsOnThisDisk=_numberOfCentralDirectoryRecordsOnThisDisk;
@property(nonatomic) unsigned short diskWhereCentralDirectoryStarts; // @synthesize diskWhereCentralDirectoryStarts=_diskWhereCentralDirectoryStarts;
@property(nonatomic) unsigned short numberOfDisk; // @synthesize numberOfDisk=_numberOfDisk;
- (void)appendToData:(id)arg1;
- (unsigned int)loadFromBytes:(const char *)arg1 offset:(unsigned int)arg2;
- (unsigned int)loadFromData:(id)arg1 offset:(unsigned int)arg2;
- (id)description;
- (void)dealloc;
- (id)init;

@end

