/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Foundation/NSKeyValueProxyGetter.h>

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableCollectionGetter : NSKeyValueProxyGetter
{
    NSKeyValueGetter *_baseGetter;
    NSKeyValueSetter *_baseSetter;
}

- (BOOL)treatNilValuesLikeEmptyCollections;
- (id)baseSetter;
- (id)baseGetter;
- (void)dealloc;
- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 baseGetter:(id)arg3 baseSetter:(id)arg4 containerIsa:(Class)arg5 proxyClass:(Class)arg6;

@end

