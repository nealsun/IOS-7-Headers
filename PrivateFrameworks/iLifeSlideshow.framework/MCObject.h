/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iLifeSlideshow/MCObjectBase.h>

@class MCMontage, NSString;

@interface MCObject : MCObjectBase
{
    MCMontage *mMontage;
    NSString *mObjectID;
}

+ (id)objectWithImprint:(id)arg1 andMontage:(id)arg2;
@property(readonly, nonatomic) MCMontage *montage; // @synthesize montage=mMontage;
@property(readonly, nonatomic) NSString *objectID; // @synthesize objectID=mObjectID;
- (id)snapshot;
- (id)imprint;
- (BOOL)isSnapshot;
- (void)demolish;
- (void)dealloc;
- (void)finalize;
- (id)initSnapshot;
- (id)initWithImprint:(id)arg1 andMontage:(id)arg2;
- (id)initFromScratchWithMontage:(id)arg1;

@end

