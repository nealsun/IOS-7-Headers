/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iWorkImport/GQDPath.h>

__attribute__((visibility("hidden")))
@interface GQDPointPath : GQDPath
{
    int mType;
    struct CGPoint mPoint;
    struct CGSize mSize;
}

- (id).cxx_construct;
- (struct CGPath *)createBezierPath;
- (struct CGSize)size;
- (struct CGPoint)point;
- (int)type;
- (int)mapStrType:(struct __CFString *)arg1;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;

@end

