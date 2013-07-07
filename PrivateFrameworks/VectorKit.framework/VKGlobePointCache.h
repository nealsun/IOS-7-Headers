/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMapTable, VKClassicGlobeCanvas;

__attribute__((visibility("hidden")))
@interface VKGlobePointCache : NSObject
{
    VKClassicGlobeCanvas *_canvas;
    NSMapTable *_poiMapTable;
}

@property(nonatomic) VKClassicGlobeCanvas *canvas; // @synthesize canvas=_canvas;
- (struct VKPoint)pointForHandle:(id)arg1 atCoordinate:(CDStruct_c3b9c2ee)arg2 withHighPrecision:(BOOL)arg3;
- (void)removeHandle:(id)arg1;
- (id)addHandleAtCoordinate:(CDStruct_c3b9c2ee)arg1 withHighPrecision:(BOOL)arg2;
- (void)dealloc;
- (id)init;

@end

