/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MusicLibrary/ML3Collection.h>

@interface ML3Genre : ML3Collection
{
}

+ (id)trackForeignPersistentID;
+ (id)propertiesForGroupingKey;
+ (id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3;
+ (BOOL)propertyIsCountProperty:(id)arg1;
+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;
+ (id)allProperties;
+ (id)predisambiguatedProperties;
+ (id)defaultOrderingProperties;
+ (int)revisionTrackingCode;
+ (id)databaseTable;
+ (void)initialize;
- (void)updateTrackValues:(id)arg1;

@end

