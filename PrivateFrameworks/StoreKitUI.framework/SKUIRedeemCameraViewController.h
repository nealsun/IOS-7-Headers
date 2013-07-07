/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <StoreKitUI/SKUIRedeemStepViewController.h>

#import "CRCodeRedeemerControllerDelegate.h"
#import "SKUIRedeemCameraViewControllerDelegate.h"
#import "SKUIRedeemCameraViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class CRCodeRedeemerController, NSString, SKUIRedeem, UIBarButtonItem;

@interface SKUIRedeemCameraViewController : SKUIRedeemStepViewController <CRCodeRedeemerControllerDelegate, SKUIRedeemCameraViewDelegate, UIAlertViewDelegate, SKUIRedeemCameraViewControllerDelegate>
{
    BOOL _alreadyPushed;
    CRCodeRedeemerController *_camera;
    int _category;
    UIBarButtonItem *_redeemButton;
    NSString *_initialCode;
    SKUIRedeem *_successfulRedeem;
    BOOL _fullscreen;
    id <SKUIRedeemCameraViewControllerDelegate> _delegate;
}

@property(copy, nonatomic) NSString *initialCode; // @synthesize initialCode=_initialCode;
@property(nonatomic) __weak id <SKUIRedeemCameraViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) int category; // @synthesize category=_category;
- (void).cxx_destruct;
- (void)_redeemDidFinish:(id)arg1 error:(id)arg2;
- (void)_cameraRedeemDidFinish:(id)arg1 error:(id)arg2;
- (BOOL)_enabled;
- (void)_setEnabled:(BOOL)arg1;
- (void)SKUIRedeemPreflightImagesDidLoad:(id)arg1;
- (void)codeRedeemerControllerDidDisplayMessage:(id)arg1;
- (void)codeRedeemerController:(id)arg1 didEndWithInfo:(id)arg2;
- (void)codeRedeemerControllerDidCancel:(id)arg1;
- (void)redeemCameraViewController:(id)arg1 didFinishWithRedeem:(id)arg2;
- (void)redeemCameraViewControllerDidCancel:(id)arg1;
- (void)presentFullScreenCameraViewForSKUIRedeemCameraView:(id)arg1;
- (void)flipRedeemerViewForSKUIRedeemCameraView:(id)arg1;
- (void)startRedeemerViewForSKUIRedeemCameraView:(id)arg1;
- (void)cancelRedeemerViewForSKUIRedeemCameraView:(id)arg1;
- (id)redeemerViewForSKUIRedeemCameraView:(id)arg1;
- (void)SKUIRedeemCameraView:(id)arg1 textFieldDidRedeem:(id)arg2;
- (void)SKUIRedeemCameraView:(id)arg1 textFieldDidChange:(id)arg2;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (void)_redeemAction:(id)arg1;
- (void)_cancelAction:(id)arg1;
- (id)contentScrollView;
- (BOOL)disablesAutomaticKeyboardDismissal;
- (void)loadView;
- (void)dealloc;
- (id)initWithRedeemCategoryFullscreen:(int)arg1;
- (id)initWithRedeemCategory:(int)arg1;

@end

