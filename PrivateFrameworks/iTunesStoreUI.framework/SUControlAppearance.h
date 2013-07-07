/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableDictionary;

@interface SUControlAppearance : NSObject <NSCopying>
{
    NSMutableDictionary *_images;
    NSMutableDictionary *_textAttributes;
    NSMutableDictionary *_titlePositions;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_copyKeyForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (struct UIOffset)titlePositionAdjustmentForBarMetrics:(int)arg1;
- (id)textAttributesForState:(unsigned int)arg1;
- (void)styleButton:(id)arg1;
- (void)styleBarButtonItem:(id)arg1;
- (void)setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(int)arg2;
- (void)setTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)setImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
@property(readonly, nonatomic) int numberOfImages;
- (id)imageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (void)enumerateTitlePositionsUsingBlock:(id)arg1;
- (void)enumerateTextAttributesUsingBlock:(id)arg1;
- (void)enumerateImagesUsingBlock:(id)arg1;
- (void)dealloc;

@end

