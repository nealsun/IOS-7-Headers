/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "GQDNameMappable.h"

__attribute__((visibility("hidden")))
@interface GQDWPColumns : NSObject <GQDNameMappable>
{
    struct __CFArray *mColumns;
    BOOL mEqualColumns;
}

+ (const struct StateSpec *)stateForReading;
- (BOOL)equalColumns;
- (struct __CFArray *)columns;
- (void)dealloc;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;

@end

