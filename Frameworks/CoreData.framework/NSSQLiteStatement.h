/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CoreData/NSSQLStatement.h>

__attribute__((visibility("hidden")))
@interface NSSQLiteStatement : NSSQLStatement
{
    struct sqlite3_stmt *_cachedSQLiteStatement;
}

- (void)setCachedSQLiteStatement:(struct sqlite3_stmt *)arg1;
- (struct sqlite3_stmt *)cachedSQLiteStatement;
- (void)dealloc;
- (void)finalize;
- (void)clearCaches;

@end

