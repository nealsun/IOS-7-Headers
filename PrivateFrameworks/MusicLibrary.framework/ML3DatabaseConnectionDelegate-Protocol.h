/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol ML3DatabaseConnectionDelegate <NSObject>

@optional
- (void)connection:(id)arg1 didFailToCloseDatabaseWithError:(id)arg2;
- (void)connectionDidCloseDatabase:(id)arg1;
- (void)connectionWillCloseDatabase:(id)arg1;
- (void)connection:(id)arg1 didFailToOpenDatabaseWithError:(id)arg2;
- (void)connectionDidOpenDatabase:(id)arg1;
- (void)connectionWillOpenDatabase:(id)arg1;
@end

