/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "SSSQLiteEntity.h"

@class SSSQLiteDatabase;

@interface SSSQLiteEntity : NSObject <SSSQLiteEntity>
{
    SSSQLiteDatabase *_database;
    long long _persistentID;
}

+ (BOOL)_insertValues:(id)arg1 intoTable:(id)arg2 withPersistentID:(long long)arg3 database:(id)arg4;
+ (Class)memoryEntityClass;
+ (id)joinClauseForProperty:(id)arg1;
+ (id)foreignKeyColumnForTable:(id)arg1;
+ (id)foreignDatabaseTablesToDelete;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)foreignDatabaseColumnForProperty:(id)arg1;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (id)databaseTable;
+ (id)databaseValueForProperty:(id)arg1 clientValue:(id)arg2;
+ (id)databasePropertyToSetClientProperty:(id)arg1;
+ (id)databasePropertyToGetClientProperty:(id)arg1;
+ (id)copyDatabaseDictionaryToSetClientDictionary:(id)arg1;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2;
+ (id)minValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3;
+ (id)maxValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3;
+ (id)countForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3;
+ (id)_aggregateValueForProperty:(id)arg1 function:(id)arg2 predicate:(id)arg3 database:(id)arg4;
+ (id)anyInDatabase:(id)arg1 predicate:(id)arg2;
@property(readonly, nonatomic) long long persistentID; // @synthesize persistentID=_persistentID;
@property(readonly, nonatomic) SSSQLiteDatabase *database; // @synthesize database=_database;
- (BOOL)_deleteRowFromTable:(id)arg1 usingColumn:(id)arg2;
- (id)_copyTableClusteredValuesWithValues:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (BOOL)setValuesWithDictionary:(id)arg1;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (void)getValues:(id *)arg1 forProperties:(const id *)arg2 count:(unsigned int)arg3;
@property(readonly, nonatomic) BOOL existsInDatabase;
- (BOOL)deleteFromDatabase;
- (id)copyXPCEncodedValuesForClientProperties:(id)arg1;
- (id)copyValuesForClientProperties:(id)arg1;
- (id)initWithPropertyValues:(id)arg1 inDatabase:(id)arg2;
- (id)initWithPersistentID:(long long)arg1 inDatabase:(id)arg2;

@end

