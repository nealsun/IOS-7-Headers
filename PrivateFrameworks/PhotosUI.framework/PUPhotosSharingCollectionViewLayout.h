/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotosUI/PUHorizontalCollectionViewLayout.h>

@class NSIndexPath;

@interface PUPhotosSharingCollectionViewLayout : PUHorizontalCollectionViewLayout
{
    unsigned int _sharingBadgeCorner;
    NSIndexPath *_zoomingCellIndexPath;
    struct UIOffset _sharingBadgeOffset;
    struct CGSize _sharingBadgeSize;
}

@property(retain, nonatomic) NSIndexPath *zoomingCellIndexPath; // @synthesize zoomingCellIndexPath=_zoomingCellIndexPath;
@property(nonatomic) struct CGSize sharingBadgeSize; // @synthesize sharingBadgeSize=_sharingBadgeSize;
@property(nonatomic) unsigned int sharingBadgeCorner; // @synthesize sharingBadgeCorner=_sharingBadgeCorner;
@property(nonatomic) struct UIOffset sharingBadgeOffset; // @synthesize sharingBadgeOffset=_sharingBadgeOffset;
- (void).cxx_destruct;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)_badgeLayoutAttributesForItemLayoutAttributes:(id)arg1;
- (struct CGRect)selectionBadgeFrameForItemFrame:(struct CGRect)arg1;
- (struct CGRect)_floatingSelectionBadgeFrameForItemFrame:(struct CGRect)arg1 visibleItemFrame:(struct CGRect)arg2;
- (id)_layoutAttrsForAttrs:(id)arg1;

@end

