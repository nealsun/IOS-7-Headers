/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@interface IUVariableCellConfigurationCache : NSObject
{
    NSMutableDictionary *_caches;
    float _tableHeight;
}

- (void).cxx_destruct;
- (void)reset;
@property(readonly, nonatomic) NSArray *caches;
- (id)cacheForClass:(Class)arg1;
- (void)dealloc;
- (id)initWithTableHeight:(float)arg1;

@end

