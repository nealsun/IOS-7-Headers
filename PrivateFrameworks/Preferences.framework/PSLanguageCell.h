/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Preferences/PSTableCell.h>

@class NSString, UIImageView;

@interface PSLanguageCell : PSTableCell
{
    UIImageView *_languageNameImage;
    NSString *_languageNameText;
}

@property(retain, nonatomic) UIImageView *languageNameImage; // @synthesize languageNameImage=_languageNameImage;
@property(retain, nonatomic) NSString *languageNameText; // @synthesize languageNameText=_languageNameText;
- (void)dealloc;
- (void)prepareForReuse;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setChecked:(BOOL)arg1;
- (void)turnOffLanguageNameImage;

@end

