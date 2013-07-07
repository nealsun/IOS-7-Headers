/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CoreDAV/CoreDAVTaskGroup.h>

#import "CoreDAVPropFindTaskDelegate.h"

@class NSMutableSet, NSSet, NSString;

@interface CoreDAVContainerInfoTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate>
{
    int _phase;
    NSMutableSet *_containerURLs;
    NSMutableSet *_containers;
    int _containerInfoDepth;
    NSString *_appSpecificHomeSetPropNameSpace;
    NSString *_appSpecificHomeSetPropName;
}

@property(readonly) NSSet *containerURLs; // @synthesize containerURLs=_containerURLs;
@property int containerInfoDepth; // @synthesize containerInfoDepth=_containerInfoDepth;
- (id)_copyContainerParserMappings;
- (id)_copyContainerWithURL:(id)arg1 andProperties:(id)arg2;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)_getContainerTopLevelInfo;
- (void)_getContainerHomeSet;
- (int)containerInfoDepthForURL:(id)arg1;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (void)startTaskGroup;
- (id)description;
- (void)dealloc;
- (id)initWithAccountInfoProvider:(id)arg1 containerURLs:(id)arg2 taskManager:(id)arg3;

// Remaining properties
@property(nonatomic) id <CoreDAVContainerInfoTaskGroupDelegate> delegate; // @dynamic delegate;

@end

