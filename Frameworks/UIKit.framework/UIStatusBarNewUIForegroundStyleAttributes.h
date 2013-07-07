/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIStatusBarForegroundStyleAttributes.h>

@class NSMutableDictionary, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface UIStatusBarNewUIForegroundStyleAttributes : UIStatusBarForegroundStyleAttributes
{
    NSMutableDictionary *_tintedImageCache;
    UIImage *_bluetoothDimmedImage;
    BOOL _isTintColorBlack;
    UIColor *_tintColor;
}

@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
- (struct CGPoint)positionForMoonMaskInBounds:(struct CGRect)arg1;
- (float)sizeForMoonMaskVisible:(BOOL)arg1;
- (float)bluetoothBatteryExtraPadding;
- (id)textForNetworkType:(int)arg1;
- (id)bluetoothImageForConnected:(BOOL)arg1;
- (id)_bluetoothImageName;
- (id)textColorForStyle:(int)arg1;
- (id)makeTextFontForStyle:(int)arg1;
- (float)textOffsetForStyle:(int)arg1;
- (id)proportionalFontForFont:(id)arg1;
- (id)imageNamed:(id)arg1;
- (id)expandedNameForImageName:(id)arg1;
- (float)edgePadding;
- (void)drawBluetoothBatteryInsidesWithSize:(struct CGSize)arg1 capacity:(float)arg2;
- (struct UIEdgeInsets)edgeInsetsForBluetoothBatteryInsides;
- (struct UIEdgeInsets)edgeInsetsForBatteryInsides;
- (float)batteryAccessoryMargin;
- (float)batteryInsidesCornerRadius;
- (id)_batteryColorForCapacity:(float)arg1 lowCapacity:(float)arg2 charging:(BOOL)arg3;
- (void)drawBatteryInsidesWithSize:(struct CGSize)arg1 capacity:(float)arg2 charging:(BOOL)arg3;
- (float)_roundDimension:(float)arg1;
- (BOOL)shouldAnimateBattery;
- (BOOL)useModernChargingEffect;
- (int)activityIndicatorStyleWithSyncActivity:(BOOL)arg1;
- (void)dealloc;
- (id)initWithHeight:(float)arg1 legibilityStyle:(int)arg2;
- (id)initWithHeight:(float)arg1 legibilityStyle:(int)arg2 tintColor:(id)arg3;

@end

