/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UILabel, UITextView, _UIDefinitionValue;

__attribute__((visibility("hidden")))
@interface _UIShortDefinitionView : UIView
{
    _UIDefinitionValue *_definitionValue;
    UILabel *_localizedDictionaryLabel;
    UITextView *_definitionTextView;
    UIView *_lineView;
    id <_UIShortDefinitionViewDelegate> _delegate;
}

@property(nonatomic) id <_UIShortDefinitionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) _UIDefinitionValue *definitionValue;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

