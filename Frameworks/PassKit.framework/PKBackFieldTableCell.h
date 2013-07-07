/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class PKPassField, UITextView;

@interface PKBackFieldTableCell : UITableViewCell
{
    PKPassField *_field;
    UITextView *_valueTextView;
    BOOL _showLinks;
}

+ (id)_linkColor;
+ (id)_linkTextAttributes;
+ (id)valueFont;
+ (id)titleFont;
+ (void)initializeParsingRegex;
+ (id)reuseIdentifier;
@property(retain, nonatomic) PKPassField *field; // @synthesize field=_field;
@property(nonatomic) BOOL showLinks; // @synthesize showLinks=_showLinks;
- (id)_attributedStringByParsingLinksInString:(id)arg1;
- (struct CGSize)_sizeForValueTextWithWidth:(float)arg1;
- (void)_setupTextAttributes;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithField:(id)arg1;

@end

