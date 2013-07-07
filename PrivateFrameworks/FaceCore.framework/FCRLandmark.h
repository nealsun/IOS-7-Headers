/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface FCRLandmark : NSObject
{
    NSString *type;
    unsigned int pointCount;
    struct CGPoint *points;
}

+ (id)landmarkWithType:(id)arg1 pointCount:(unsigned int)arg2 points:(struct CGPoint *)arg3;
@property(readonly) struct CGPoint *points; // @synthesize points;
@property(readonly) unsigned int pointCount; // @synthesize pointCount;
@property(readonly) NSString *type; // @synthesize type;
- (void)dealloc;
- (id)initWithType:(id)arg1 pointCount:(unsigned int)arg2 points:(struct CGPoint *)arg3;

@end

