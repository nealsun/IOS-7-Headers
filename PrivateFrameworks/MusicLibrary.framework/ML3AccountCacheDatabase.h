/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class ML3DatabaseConnection;

__attribute__((visibility("hidden")))
@interface ML3AccountCacheDatabase : NSObject
{
    ML3DatabaseConnection *_databaseConnection;
}

- (void).cxx_destruct;
- (BOOL)_closeDatabase;
- (BOOL)_openDatabase;
- (id)_databasePath;
- (id)appleIDForDSID:(unsigned long long)arg1;
- (BOOL)setAppleID:(id)arg1 forDSID:(unsigned long long)arg2;
- (id)init;

@end

