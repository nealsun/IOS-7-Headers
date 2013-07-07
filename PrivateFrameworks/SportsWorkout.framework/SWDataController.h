/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSManagedObjectContext, NSObject<OS_dispatch_queue>, NSPersistentStoreCoordinator;

@interface SWDataController : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _isPerformingMigration;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectContext *_managedObjectContext;
    int _priorMigrationVersionKey;
}

+ (id)sharedDataController;
- (void)_migrateTotals;
- (void)_migrateBests;
- (void)_importWorkoutFilesFromDirectory:(id)arg1;
- (void)_migrateWorkoutData;
- (void)_migrateCalibrationData;
- (void)_fixupDatabase;
- (void)performMigrationIfNecessary;
- (void)_databaseProperty:(id)arg1 setName:(id)arg2 andIntegerValue:(int)arg3;
- (id)_plistForDatabaseProperty:(id)arg1;
- (id)_databasePropertiesForName:(id)arg1;
- (void)_setCalibrationData:(id)arg1 forSensorSerialNumber:(id)arg2 walkCalibrationDate:(id)arg3 runCalibrationDate:(id)arg4;
- (void)setCalibrationData:(id)arg1 forSensorSerialNumber:(id)arg2 date:(id)arg3 isWalk:(BOOL)arg4;
- (id)_onQueue_calibrationDataForSensorSerialNumber:(id)arg1 walkCalibrationDate:(id *)arg2 runCalibrationDate:(id *)arg3;
- (id)calibrationDataForSensorSerialNumber:(id)arg1 walkCalibrationDate:(id *)arg2 runCalibrationDate:(id *)arg3;
- (void)clearAchievementForName:(id)arg1;
- (id)_onQueue_achievements;
@property(readonly, nonatomic) NSDictionary *achievements; // @dynamic achievements;
- (id)_achievementsForName:(id)arg1 sensorSerialNumber:(id)arg2;
- (void)_saveRunAchievementsToDatabase:(id)arg1 forPreset:(id)arg2 sensorSerialNumber:(id)arg3;
- (void)_addValue:(id)arg1 toAchievementName:(id)arg2 sensorSerialNumber:(id)arg3;
- (void)_replaceValueIfLarger:(id)arg1 forAchievementName:(id)arg2 sensorSerialNumber:(id)arg3;
- (void)_replaceValueIfSmaller:(id)arg1 forAchievementName:(id)arg2 sensorSerialNumber:(id)arg3;
- (void)importExistingWorkoutSnapshotsWithCompletionBlock:(id)arg1;
- (void)_removeSnapshotForWorkout:(id)arg1;
- (void)saveWorkoutSnapshot:(id)arg1 preset:(id)arg2;
- (id)_pathOfSnapshotForWorkout:(id)arg1;
- (BOOL)_workoutIsSynced:(id)arg1;
- (id)latestWorkout;
- (id)unsyncedWorkouts;
- (id)syncedWorkouts;
- (id)allWorkouts;
- (id)_allWorkoutsWithSyncState:(int)arg1;
- (id)_dictionaryForWorkoutRecord:(id)arg1;
- (void)_deleteXMLFileForWorkout:(id)arg1;
- (void)deleteAllWorkouts;
- (void)deleteWorkoutForGUID:(id)arg1;
- (id)_entitiesOfTypeName:(id)arg1 forPropertyName:(id)arg2 isNull:(BOOL)arg3;
- (id)_entitiesOfTypeName:(id)arg1 forPropertyName:(id)arg2 values:(id)arg3;
- (void)saveRunWorkout:(id)arg1 preset:(id)arg2 completionBlock:(id)arg3;
- (void)_saveRunWorkout:(id)arg1 preset:(id)arg2;
- (id)_runWorkoutFileName;
- (void)_notifyDataStoreChanged;
- (void)_saveRunWorkoutToDatabase:(id)arg1 xmlFileName:(id)arg2;
- (id)_snapshotForDictionary:(id)arg1;
- (void)dealloc;
- (id)init;

@end

