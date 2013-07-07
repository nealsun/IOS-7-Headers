/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface EDPivotAreaReference : NSObject
{
    _Bool mByPosition;
    _Bool mRelative;
    _Bool mSelected;
    unsigned long mFieldId;
    unsigned long mCount;
}

+ (id)pivotAreaReference;
- (void)setCount:(unsigned long)arg1;
- (unsigned long)count;
- (void)setFieldId:(unsigned long)arg1;
- (unsigned long)fieldId;
- (void)setSelected:(_Bool)arg1;
- (_Bool)selected;
- (void)setRelative:(_Bool)arg1;
- (_Bool)relative;
- (void)setByPosition:(_Bool)arg1;
- (_Bool)byPosition;
- (id)init;

@end

