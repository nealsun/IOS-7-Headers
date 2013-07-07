/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OABReaderState : NSObject
{
    Class mClient;
    NSMutableDictionary *mShapeIdMap;
    NSMutableDictionary *mEshContentIdMap;
    id <OADColorPalette> mColorPalette;
    NSMutableDictionary *mBlipIdMap;
}

- (void)setDrawable:(id)arg1 forBlipId:(int)arg2;
- (id)drawableForBlipId:(int)arg1;
- (void)setColorPalette:(id)arg1;
- (id)colorPalette;
- (void)setEshContent:(struct EshContent *)arg1 forId:(int)arg2;
- (struct EshContent *)eshContentForId:(int)arg1;
- (void)setDrawable:(id)arg1 forShapeId:(unsigned long)arg2;
- (id)drawableForShapeId:(int)arg1;
- (Class)client;
- (void)dealloc;
- (id)initWithClient:(Class)arg1;
- (id)init;

@end

