/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/OCDReader.h>

@class OCCDecryptor;

__attribute__((visibility("hidden")))
@interface OCDEncryptedReader : OCDReader
{
    OCCDecryptor *mDecryptor;
}

@property(readonly, nonatomic) OCCDecryptor *decryptor; // @synthesize decryptor=mDecryptor;
- (BOOL)retainDecryptorWithErrorCode:(int *)arg1;
- (void)useUnencryptedDocument;
- (void)dealloc;
- (void)restartReaderToUseDecryptedDocument;

@end

