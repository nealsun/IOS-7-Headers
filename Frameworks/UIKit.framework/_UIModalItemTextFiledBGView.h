/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIModalItemTextFiledBGView : UIView
{
    int _textFieldsCount;
    UIColor *_backgroundColor;
    UIColor *_separatorsColor;
}

@property(retain, nonatomic) UIColor *separatorsColor; // @synthesize separatorsColor=_separatorsColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int textFieldsCount; // @synthesize textFieldsCount=_textFieldsCount;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

