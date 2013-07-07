/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "UITableViewSubviewReusing.h"

@class NSString, UIColor, UIImage, UILabel, UITableView;

@interface UITableViewHeaderFooterView : UIView <UITableViewSubviewReusing>
{
    int _tableViewStyle;
    UIImage *_backgroundImage;
    struct CGRect _frame;
    int _textAlignment;
    UITableView *_tableView;
    float _maxTitleWidth;
    NSString *_reuseIdentifier;
    UIView *_backgroundView;
    UILabel *_label;
    UILabel *_detailLabel;
    UIView *_contentView;
    UIView *_topSeparatorView;
    UIColor *_tintColor;
    float _marginWidth;
    float _rightMarginWidth;
    struct {
        unsigned int isHeader:1;
        unsigned int labelBackgroundColorNeedsUpdate:1;
        unsigned int detailLabelBackgroundColorNeedsUpdate:1;
        unsigned int floating:1;
    } _headerFooterFlags;
}

+ (id)_defaultFontForTableViewStyle:(int)arg1 isSectionHeader:(BOOL)arg2;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) float maxTitleWidth; // @synthesize maxTitleWidth=_maxTitleWidth;
@property(nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)_tableViewDidUpdateMarginWidth;
@property(retain, nonatomic) UIColor *tintColor;
- (id)_scriptingInfo;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setOpaque:(BOOL)arg1;
@property(nonatomic) BOOL floating;
@property(nonatomic) int tableViewStyle;
- (void)_updateLayerContents;
@property(nonatomic, getter=_rightMarginWidth, setter=_setRightMarginWidth:) float rightMarginWidth;
@property(nonatomic, getter=_marginWidth, setter=_setMarginWidth:) float marginWidth;
- (void)_updateContentAndBackgroundView;
- (struct CGRect)_backgroundRect;
@property(retain, nonatomic) UIView *backgroundView;
- (void)_setupBackgroundView;
- (void)_updateBackgroundImage;
- (struct CGSize)_sizeThatFits:(struct CGSize)arg1 stripPaddingForAbuttingView:(BOOL)arg2 isTopHeader:(BOOL)arg3;
- (BOOL)_useDetailText;
- (struct CGRect)_detailLabelFrame;
- (struct CGRect)_labelFrame;
@property(copy, nonatomic) NSString *text;
@property(readonly, nonatomic) UILabel *detailTextLabel;
@property(readonly, nonatomic) UILabel *textLabel;
- (id)_label:(BOOL)arg1;
- (void)_setupLabelAppearance;
- (void)_updateDetailLabelBackgroundColorIfNeeded;
- (void)_updateDetailLabelBackgroundColor;
- (void)_updateLabelBackgroundColorIfNeeeded;
- (void)_updateLabelBackgroundColor;
- (void)_invalidateDetailLabelBackgroundColor;
- (void)_invalidateLabelBackgroundColor;
- (struct CGSize)_detailTextSizeForWidth:(float)arg1;
- (struct CGSize)_textSizeForWidth:(float)arg1;
@property(nonatomic) int textAlignment;
@property(nonatomic) BOOL sectionHeader;
- (struct CGRect)frame;
- (void)setFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end

