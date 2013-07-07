/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol PKLocalPassFileAccessor <NSObject>
- (void)checkRevocationStatusForPassAtURL:(id)arg1 completion:(id)arg2;
- (id)localizedString:(id)arg1 forPassAtURL:(id)arg2;
- (id)displayProfileWithPassDictionary:(id)arg1 passURL:(id)arg2;
- (id)serializedFileWrapperFromPassURL:(id)arg1;
- (id)manifestHashFromPassURL:(id)arg1;
- (BOOL)getResourceValue:(id *)arg1 forKey:(id)arg2 forPassAtURL:(id)arg3 error:(id *)arg4;
- (BOOL)removePassAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)movePassAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (BOOL)copyPassAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (id)loadImageSet:(int)arg1 fromPassURL:(id)arg2 displayProfile:(id)arg3;
- (id)loadContentFromPassURL:(id)arg1;
- (id)loadDictionaryFromPassURL:(id)arg1;
- (id)validatePassURL:(id)arg1;
@end

