/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MediaPlayer/MPAVErrorResolver.h>

#import "SSRequestDelegate.h"

@class MPHomeSharingML3DataProvider, NSError, SSRentalCheckoutRequest;

@interface MPHomeSharingRentalErrorResolver : MPAVErrorResolver <SSRequestDelegate>
{
    unsigned long long _accountID;
    MPHomeSharingML3DataProvider *_dataProvider;
    NSError *_error;
    unsigned long long _itemID;
    unsigned long long _rentalID;
    SSRentalCheckoutRequest *_request;
}

@property(readonly, nonatomic) unsigned long long itemID; // @synthesize itemID=_itemID;
@property(retain, nonatomic) MPHomeSharingML3DataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
- (void).cxx_destruct;
- (BOOL)_errorIsFairPlayError:(id)arg1;
- (void)requestDidFinish:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)resolveError:(id)arg1;
- (void)dealloc;
- (id)initWithItemID:(unsigned long long)arg1 rentalID:(unsigned long long)arg2 accountID:(unsigned long long)arg3;

@end

