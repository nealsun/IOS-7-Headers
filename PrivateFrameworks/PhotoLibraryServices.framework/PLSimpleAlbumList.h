/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "PLAssetContainerList.h"

@class NSOrderedSet;

@interface PLSimpleAlbumList : NSObject <PLAssetContainerList>
{
    NSOrderedSet *_containers;
}

@property(retain, nonatomic) NSOrderedSet *containers; // @synthesize containers=_containers;
- (id)containersRelationshipName;
- (id)photoLibrary;
- (id)managedObjectContext;
- (BOOL)canEditContainers;
- (BOOL)isEmpty;
@property(readonly, nonatomic) unsigned int containersCount;
- (void)dealloc;
- (id)initWithAssetContainers:(id)arg1;
- (id)initWithAssetContainer:(id)arg1;

@end

