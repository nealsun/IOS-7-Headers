/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIModalItem.h"

@class NSString, UIImage, _RUTrackActionsModalItemContentView;

@interface RUTrackActionsModalItem : UIModalItem
{
    _RUTrackActionsModalItemContentView *_contentView;
    NSString *_artistText;
    UIImage *_artworkImage;
    int _enabledActions;
    int _onActions;
    NSString *_songText;
}

+ (struct CGSize)artworkSize;
@property(copy, nonatomic) NSString *songText; // @synthesize songText=_songText;
@property(nonatomic) int onActions; // @synthesize onActions=_onActions;
@property(nonatomic) int enabledActions; // @synthesize enabledActions=_enabledActions;
@property(retain, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
@property(copy, nonatomic) NSString *artistText; // @synthesize artistText=_artistText;
- (void).cxx_destruct;
- (int)actionForButtonIndex:(int)arg1;
- (id)_contentView;

@end

