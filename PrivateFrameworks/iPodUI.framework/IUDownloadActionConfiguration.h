/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class UIButton;

@interface IUDownloadActionConfiguration : NSObject
{
    id _downloadableMediaEntity;
    int _confirmationState;
}

@property(nonatomic) int confirmationState; // @synthesize confirmationState=_confirmationState;
@property(readonly, nonatomic) id downloadableMediaEntity; // @synthesize downloadableMediaEntity=_downloadableMediaEntity;
- (void).cxx_destruct;
- (void)cancelPendingActionForButton:(id)arg1;
- (void)downloadAssetForButtonPressed:(id)arg1 completionHandler:(id)arg2;
- (void)configureButtonForButtonPressed:(id)arg1 animate:(BOOL)arg2;
- (void)configureButton:(id)arg1 animate:(BOOL)arg2;
@property(readonly, nonatomic) UIButton *newButton;
- (id)initWithMediaEntity:(id)arg1;

@end

