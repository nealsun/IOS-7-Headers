/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface MPAVDestinationBrowser : NSObject
{
    BOOL _scansForDestinationsWhenEnteringForeground;
    BOOL _isScanning;
}

- (void)_endScanningForDestinationsNotification:(id)arg1;
- (void)_beginScanningForDestinationsNotification:(id)arg1;
@property(nonatomic) BOOL scansForDestinationsWhenEnteringForeground;
- (void)endScanningForDestinations;
- (void)beginScanningForDestinations;
- (void)dealloc;
- (id)init;

@end

