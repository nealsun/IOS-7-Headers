/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSManagedObjectContext, NSPersistentStoreCoordinator, NSString;

@interface ACDDatabaseMigrator : NSObject
{
    NSManagedObjectContext *_migrationContext;
    NSPersistentStoreCoordinator *_privateCoordinator;
    NSPersistentStoreCoordinator *_realCoordinator;
    NSString *_databasePath;
    NSDictionary *_realOptions;
}

- (void).cxx_destruct;
- (void)_postProcessMigrationFromVersion:(int)arg1 migrationData:(id)arg2;
- (int)_versionForModel:(id)arg1;
- (id)_compatibleModelForStoreAtURL:(id)arg1;
- (id)_setUpContextForMigration;
- (id)_fetchAllAuthorizationEntitiesForModelVersion:(int)arg1;
- (id)_fetchAllDataclassEntitles;
- (void)_migrateNameAttributeOfDataclassEntities;
- (void)_migrateOptionsAttributeOfAuthorizatinEntitiesFromModelVersion:(int)arg1;
- (void)_migrateAccessAuthorizationsToTCCFromModelVersion:(int)arg1;
- (BOOL)run;
- (id)initForDatabaseAtPath:(id)arg1 persistentStoreCoordinator:(id)arg2 options:(id)arg3;

@end

