/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CoreData/NSSQLColumn.h>

@class NSSQLForeignKey;

__attribute__((visibility("hidden")))
@interface NSSQLForeignEntityKey : NSSQLColumn
{
    NSSQLForeignKey *_foreignKey;
}

- (void)setFKForReadOnlyFetch:(id)arg1;
- (void)dealloc;
- (id)foreignKey;
- (id)toOneRelationship;
- (id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)initWithEntity:(id)arg1 foreignKey:(id)arg2;

@end

