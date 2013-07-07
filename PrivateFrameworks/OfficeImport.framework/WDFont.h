/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WDFont : NSObject <NSCopying>
{
    NSString *mName;
    NSString *mSecondName;
    int mFontFamily;
    int mCharacterSet;
    int mPitch;
}

- (BOOL)isEqual:(id)arg1;
- (unsigned long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)init;
- (void)setPitch:(int)arg1;
- (int)pitch;
- (void)setCharacterSet:(int)arg1;
- (int)characterSet;
- (void)setFontFamily:(int)arg1;
- (int)fontFamily;
- (void)setSecondName:(id)arg1;
- (id)secondName;
- (void)setName:(id)arg1;
- (id)name;

@end

