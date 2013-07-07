/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSMutableArray, NSString;

@interface PKDiff : NSObject <NSSecureCoding>
{
    NSMutableArray *_hunks;
    NSString *_passUniqueID;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *passUniqueID; // @synthesize passUniqueID=_passUniqueID;
- (unsigned int)_hunkIndexForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)anyKey;
- (void)addHunksFromDiff:(id)arg1;
- (void)removeHunkForKey:(id)arg1;
- (BOOL)getHunkForKey:(id)arg1 oldValue:(id *)arg2 newValue:(id *)arg3 message:(id *)arg4;
- (id)description;
- (void)enumerateHunks:(id)arg1;
- (void)key:(id *)arg1 oldValue:(id *)arg2 newValue:(id *)arg3 message:(id *)arg4 forHunkAtIndex:(int)arg5;
- (int)hunkCount;
- (void)addHunkWithKey:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 message:(id)arg4;
- (void)dealloc;
- (id)init;

@end

