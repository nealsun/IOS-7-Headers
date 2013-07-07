/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarItem : NSObject
{
    int _idiom;
    int _type;
}

+ (BOOL)itemType:(int)arg1 idiom:(int)arg2 appearsInRegion:(int)arg3;
+ (BOOL)itemType:(int)arg1 idiom:(int)arg2 canBeEnabledForData:(id)arg3 style:(id)arg4;
+ (BOOL)typeIsValid:(int)arg1;
+ (id)itemWithType:(int)arg1 idiom:(int)arg2;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (id)description;
- (int)compareRightOrder:(id)arg1;
- (int)compareLeftOrder:(id)arg1;
- (int)comparePriority:(id)arg1;
- (BOOL)appearsInRegion:(int)arg1;
- (BOOL)appearsOnRight;
- (BOOL)appearsOnLeft;
@property(readonly, nonatomic) NSString *indicatorName;
@property(readonly, nonatomic) int rightOrder;
@property(readonly, nonatomic) int leftOrder;
@property(readonly, nonatomic) int priority;
@property(readonly, nonatomic) Class viewClass;
- (id)initWithType:(int)arg1;

@end

