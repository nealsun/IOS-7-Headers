/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

@class NSOperationQueue, SKUIGift, SKUIGiftConfiguration, SKUILoadURLOperation;

@interface SKUIGiftStepViewController : UIViewController
{
    SKUIGift *_gift;
    SKUIGiftConfiguration *_giftConfiguration;
    SKUILoadURLOperation *_loadOperation;
    NSOperationQueue *_operationQueue;
}

@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) SKUIGiftConfiguration *giftConfiguration; // @synthesize giftConfiguration=_giftConfiguration;
- (void).cxx_destruct;
- (void)_finishImageLoadWithImage:(id)arg1 error:(id)arg2 block:(id)arg3;
- (void)loadItemArtworkWithArtworkContext:(id)arg1 completionBlock:(id)arg2;
@property(readonly, nonatomic) SKUIGift *gift; // @synthesize gift=_gift;
- (void)finishGiftingWithResult:(BOOL)arg1;
- (id)initWithGift:(id)arg1 configuration:(id)arg2;

@end

