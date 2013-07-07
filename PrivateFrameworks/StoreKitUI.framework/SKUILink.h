/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSNumber, NSString, NSURL, SKUICountdown, SKUIItem;

@interface SKUILink : NSObject
{
    SKUICountdown *_countdown;
    SKUIItem *_item;
    NSNumber *_itemIdentifier;
    NSString *_target;
    NSString *_title;
    NSURL *_url;
}

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *targetString; // @synthesize targetString=_target;
@property(readonly, nonatomic) NSNumber *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, nonatomic) SKUIItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)_setItem:(id)arg1;
@property(readonly, nonatomic, getter=isActionable) BOOL actionable;
- (id)initWithURL:(id)arg1;
- (id)initWithComponentContext:(id)arg1;
- (id)initWithLinkDictionary:(id)arg1;

@end

