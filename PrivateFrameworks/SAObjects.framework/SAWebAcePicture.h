/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSNumber, NSString;

@interface SAWebAcePicture : AceObject <SAAceSerializable>
{
}

+ (id)acePictureWithDictionary:(id)arg1 context:(id)arg2;
+ (id)acePicture;
@property(copy, nonatomic) NSNumber *width;
@property(copy, nonatomic) NSNumber *height;
@property(copy, nonatomic) NSString *format;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

