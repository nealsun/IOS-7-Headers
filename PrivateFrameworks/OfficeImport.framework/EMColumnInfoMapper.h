/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/CMMapper.h>

@class EDColumnInfo;

__attribute__((visibility("hidden")))
@interface EMColumnInfoMapper : CMMapper
{
    EDColumnInfo *edColumnInfo;
    double columnWidth;
    int columnSpan;
}

- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithDefaultWidth:(double)arg1 span:(int)arg2 parent:(id)arg3;
- (id)initWithEDColumnInfo:(id)arg1 maxSpan:(int)arg2 parent:(id)arg3;
- (double)columnWidth;

@end
