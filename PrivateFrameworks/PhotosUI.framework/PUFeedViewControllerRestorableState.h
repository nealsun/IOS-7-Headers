/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSDate, NSURL;

@interface PUFeedViewControllerRestorableState : NSObject <NSCoding>
{
    BOOL _scrolledToNewest;
    NSDate *_date;
    int _interfaceOrientation;
    NSArray *_centerAssetUUIDs;
    NSArray *_centerAssetFrames;
    NSURL *_centerSectionEntryURIRepresentation;
    struct CGRect _centerSectionFrame;
}

@property(nonatomic) struct CGRect centerSectionFrame; // @synthesize centerSectionFrame=_centerSectionFrame;
@property(copy, nonatomic) NSURL *centerSectionEntryURIRepresentation; // @synthesize centerSectionEntryURIRepresentation=_centerSectionEntryURIRepresentation;
@property(copy, nonatomic) NSArray *centerAssetFrames; // @synthesize centerAssetFrames=_centerAssetFrames;
@property(copy, nonatomic) NSArray *centerAssetUUIDs; // @synthesize centerAssetUUIDs=_centerAssetUUIDs;
@property(nonatomic) BOOL scrolledToNewest; // @synthesize scrolledToNewest=_scrolledToNewest;
@property(nonatomic) int interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

