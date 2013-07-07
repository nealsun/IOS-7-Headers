/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

@class ABImagePickerController;

@protocol ABImagePickerControllerDelegate
@property(readonly, nonatomic) ABImagePickerController *imagePicker;
@property(nonatomic) BOOL popoverSizeUpdatesDisabled;
- (id)styleProvider;
- (id)imagePickerControllerViewControllerToPresentModal:(id)arg1;
- (id)imagePickerControllerViewForApplyImageAnimation:(id)arg1;
- (void)imagePicker:(id)arg1 didDismissActionSheet:(id)arg2;
- (void)imagePicker:(id)arg1 presentActionSheet:(id)arg2;
- (void)showImageMenuForHelper:(id)arg1;
- (void)imagePicker:(id)arg1 pickedPhoto:(id)arg2;
- (void)finishTearingDownImagePickerController;
- (void)removeImagePickerControllerFromUI;
- (void)imagePickerWillBeRemoved:(id)arg1;
- (void)imagePickerWillBeShown:(id)arg1;
- (id)personImageView;
- (id)selectedPeople;
@end

