/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSEntityMigrationPolicy.h"

@interface CoreThemeRenditionKeyMigrationPolicy : NSEntityMigrationPolicy
{
}

- (BOOL)performCustomValidationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id *)arg3;
- (BOOL)createRelationshipsForDestinationInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id *)arg4;
- (BOOL)createDestinationInstancesForSourceInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id *)arg4;
- (BOOL)beginEntityMapping:(id)arg1 manager:(id)arg2 error:(id *)arg3;

@end

