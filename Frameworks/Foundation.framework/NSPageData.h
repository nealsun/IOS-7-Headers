/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSData.h"

@class NSDate, NSString;

@interface NSPageData : NSData
{
    NSData *data;
    NSDate *_originalFileModDate;
    NSString *_originalFilePath;
}

+ (int)_umask;
+ (void)initialize;
- (id)data;
- (id)initWithDataNoCopy:(id)arg1;
- (id)deserializer;
- (id)initFromSerializerStream:(id)arg1 length:(unsigned int)arg2;
- (unsigned int)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(BOOL)arg4 hardLinkPath:(id)arg5;
- (void)dealloc;
- (id)_mappedFile;
- (id)initWithContentsOfMappedFile:(id)arg1 withFileAttributes:(id)arg2;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (void)_setOriginalFileInfoFromFileAttributes:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithBytes:(const void *)arg1 length:(unsigned int)arg2;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned int)arg2;
- (id)init;
- (const void *)bytes;
- (unsigned int)length;
- (unsigned int)writeFile:(id)arg1;
- (unsigned int)writeFd:(int)arg1;

@end

