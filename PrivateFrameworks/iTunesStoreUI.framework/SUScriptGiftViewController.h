/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iTunesStoreUI/SUScriptViewController.h>

@class SKUIItem;

@interface SUScriptGiftViewController : SUScriptViewController
{
    int _giftCategory;
    SKUIItem *_item;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly, nonatomic) int giftCategoryMedia;
@property(readonly, nonatomic) int giftCategoryBooks;
@property(readonly, nonatomic) int giftCategoryApps;
- (id)_className;
- (void)setProductGiftItem:(id)arg1;
- (void)setCreditGiftStyle:(int)arg1;
- (id)newNativeViewController;

@end

