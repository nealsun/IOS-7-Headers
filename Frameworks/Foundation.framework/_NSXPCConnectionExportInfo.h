/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSXPCInterface;

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionExportInfo : NSObject
{
    id _exportedObject;
    NSXPCInterface *_exportedInterface;
}

@property(retain) NSXPCInterface *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
@property(retain) id exportedObject; // @synthesize exportedObject=_exportedObject;
- (void)dealloc;

@end

