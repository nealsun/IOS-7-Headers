/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIAppearanceCustomizableClassInfo : NSObject
{
    BOOL _isGuideClassRoot;
    BOOL _isCustomizableViewClassRoot;
    NSString *_appearanceNodeKey;
    unsigned int _hash;
    Class _customizableViewClass;
    Class _guideClass;
}

+ (id)_customizableClassInfoForViewClass:(Class)arg1 withGuideClass:(Class)arg2;
@property(readonly, nonatomic) Class _customizableViewClass; // @synthesize _customizableViewClass;
@property(readonly, nonatomic) unsigned int _hash; // @synthesize _hash;
@property(readonly, nonatomic) NSString *_appearanceNodeKey; // @synthesize _appearanceNodeKey;
- (void)dealloc;
- (id)description;
- (id)_superClassInfo;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) Class _guideClass; // @synthesize _guideClass;

@end

