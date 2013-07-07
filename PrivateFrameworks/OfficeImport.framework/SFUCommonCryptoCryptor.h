/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/SFUCryptor.h>

@class SFUCryptoKey;

__attribute__((visibility("hidden")))
@interface SFUCommonCryptoCryptor : SFUCryptor
{
    int mOperation;
    SFUCryptoKey *mKey;
    struct _CCCryptor *mCryptor;
    unsigned long mBlockSize;
    BOOL mFinished;
    char *mDecryptionInputBuffer;
    char *mOutputBuffer;
    char *mOutputBufferPos;
    unsigned long mOutputBufferAvailable;
}

- (BOOL)cryptDataFromStream:(id)arg1 toBuffer:(char *)arg2 length:(unsigned long)arg3 bytesRead:(unsigned int *)arg4 error:(id *)arg5;
- (BOOL)cryptDataFromBuffer:(const char *)arg1 length:(unsigned long)arg2 toStream:(id)arg3 finished:(BOOL)arg4 crc32:(unsigned int *)arg5 error:(id *)arg6;
- (BOOL)cryptDataFromBuffer:(const char *)arg1 length:(unsigned long)arg2 toStream:(id)arg3 finished:(BOOL)arg4 error:(id *)arg5;
- (void)dealloc;
- (id)initWithKey:(id)arg1 operation:(int)arg2 iv:(const char *)arg3 ivLength:(unsigned long)arg4;

@end

