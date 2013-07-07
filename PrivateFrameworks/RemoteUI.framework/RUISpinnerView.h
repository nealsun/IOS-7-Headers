/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <RemoteUI/RUIElement.h>

@class RUIObjectModel, UIActivityIndicatorView, UIView;

@interface RUISpinnerView : RUIElement
{
    UIView *_view;
    UIActivityIndicatorView *_spinner;
    RUIObjectModel *_objectModel;
}

@property(nonatomic) RUIObjectModel *objectModel; // @synthesize objectModel=_objectModel;
- (void)dealloc;
- (void)viewDidLayout;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)spinnerView;

@end

