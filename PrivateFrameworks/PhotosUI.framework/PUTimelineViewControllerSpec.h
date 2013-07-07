/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class UIColor;

@interface PUTimelineViewControllerSpec : NSObject
{
    BOOL _shouldReloadEventsOnOrientationChange;
    BOOL _shouldHideBarsInLandscape;
    int _interfaceOrientation;
    int _sectionCaptionLocation;
    float _sectionCaptionHeight;
    struct UIOffset _sectionCaptionOffset;
}

+ (id)specWithDefaultClass:(Class)arg1;
@property(readonly, nonatomic) float sectionCaptionHeight; // @synthesize sectionCaptionHeight=_sectionCaptionHeight;
@property(readonly, nonatomic) struct UIOffset sectionCaptionOffset; // @synthesize sectionCaptionOffset=_sectionCaptionOffset;
@property(readonly, nonatomic) int sectionCaptionLocation; // @synthesize sectionCaptionLocation=_sectionCaptionLocation;
@property(nonatomic) int interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(readonly, nonatomic) BOOL shouldHideBarsInLandscape; // @synthesize shouldHideBarsInLandscape=_shouldHideBarsInLandscape;
@property(readonly, nonatomic) BOOL shouldReloadEventsOnOrientationChange; // @synthesize shouldReloadEventsOnOrientationChange=_shouldReloadEventsOnOrientationChange;
- (void)configureSplitView:(id)arg1;
- (void)configureSideSectionCaptionView:(id)arg1;
- (void)configureSideSectionBackgroundView:(id)arg1;
- (void)configureSideCommentCell:(id)arg1 withVisibleEdges:(int)arg2;
- (void)configureSidePhotoCell:(id)arg1;
@property(readonly, nonatomic) int sideCollectionViewCommentCellStyle;
@property(readonly, nonatomic) int sideEventTypes;
- (void)configureSideCollectionViewLayout:(id)arg1;
@property(readonly, nonatomic) UIColor *sideCollectionViewBackgroundColor;
@property(readonly, nonatomic) float sideViewWidth;
@property(readonly, nonatomic) int sideViewEdge;
- (void)configureSectionCaptionBackgroundView:(id)arg1;
- (void)configureSectionCaptionView:(id)arg1;
- (void)configureSectionBackgroundView:(id)arg1;
- (void)configureCommentCell:(id)arg1 withVisibleEdges:(int)arg2;
- (void)configurePhotoCell:(id)arg1;
@property(readonly, nonatomic) int collectionViewCommentCellStyle;
@property(readonly, nonatomic) int eventTypes;
- (void)configureCollectionViewLayout:(id)arg1;
- (id)backgroundFixedImageForOrientation:(int)arg1;
- (id)photoBrowserSpec;
@property(readonly, nonatomic) UIColor *collectionViewBackgroundColor;

@end

