/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface AVMetadataMachineReadableCodeObjectInternal : NSObject
{
    BOOL decoded;
    NSArray *corners;
    NSString *stringValue;
    NSDictionary *basicDescriptor;
}

@property BOOL decoded; // @synthesize decoded;
@property(retain) NSDictionary *basicDescriptor; // @synthesize basicDescriptor;
@property(retain) NSString *stringValue; // @synthesize stringValue;
@property(retain) NSArray *corners; // @synthesize corners;
- (void)dealloc;

@end

