/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CoreData/NSPropertyStoreMapping.h>

__attribute__((visibility("hidden")))
@interface NSAttributeStoreMapping : NSPropertyStoreMapping
{
    int _externalType;
    unsigned int _externalPrecision;
    int _externalScale;
}

- (id)columnDefinition;
- (id)sqlType;
- (void)setExternalScale:(int)arg1;
- (int)externalScale;
- (void)setExternalPrecision:(unsigned int)arg1;
- (unsigned int)externalPrecision;
- (void)setExternalType:(int)arg1;
- (int)externalType;
- (id)attribute;
- (BOOL)isEqual:(id)arg1;
- (id)initWithProperty:(id)arg1;

@end

