/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/PDAnimateBehavior.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface PDAnimateColorBehavior : PDAnimateBehavior
{
    OADColor *mBy;
    OADColor *mFrom;
    OADColor *mTo;
    int mColorSpace;
    int mDirection;
}

- (void)setDirection:(int)arg1;
- (int)direction;
- (void)setColorSpace:(int)arg1;
- (int)colorSpace;
- (void)setTo:(id)arg1;
- (id)to;
- (void)setFrom:(id)arg1;
- (id)from;
- (void)setBy:(id)arg1;
- (id)by;

@end

