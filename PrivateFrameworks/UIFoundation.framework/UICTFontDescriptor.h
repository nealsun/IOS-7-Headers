/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIFoundation/UIFontDescriptor.h>

__attribute__((visibility("hidden")))
@interface UICTFontDescriptor : UIFontDescriptor
{
}

+ (id)fontDescriptorWithName:(id)arg1 matrix:(struct CGAffineTransform)arg2;
+ (id)fontDescriptorWithName:(id)arg1 size:(float)arg2;
+ (id)fontDescriptorWithFontAttributes:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)matchingFontDescriptorWithMandatoryKeys:(id)arg1;
- (id)matchingFontDescriptorsWithMandatoryKeys:(id)arg1;
- (id)fontAttributes;
- (id)fontDescriptorByAddingAttributes:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)finalize;
- (unsigned int)retainCount;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (oneway void)release;
- (id)retain;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned long)_cfTypeID;

@end

