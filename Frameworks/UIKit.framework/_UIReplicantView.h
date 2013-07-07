/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSMutableArray, UIScreen, _SlotIdWrapper, _UIReplicantContentView;

__attribute__((visibility("hidden")))
@interface _UIReplicantView : UIView
{
    _SlotIdWrapper *_slotIdWrapper;
    BOOL _deferred;
    NSMutableArray *_dependantSnapshots;
    UIScreen *_screen;
    struct CGSize _snapshotSize;
    _UIReplicantContentView *_contentView;
}

+ (id)snapshotWithScreen:(id)arg1;
+ (id)snapshotWithView:(id)arg1 fromRect:(struct CGRect)arg2 capInsets:(struct UIEdgeInsets)arg3;
+ (id)snapshotWindows:(id)arg1 withRect:(struct CGRect)arg2;
+ (id)snapshotContext;
+ (Class)layerClass;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)resizableSnapshotFromRect:(struct CGRect)arg1 withCapInsets:(struct UIEdgeInsets)arg2;
- (void)updateDependantSnapshots;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

