/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface OAXTextCharPropertyBag : NSObject
{
}

+ (void)readCharacterProperties:(struct _xmlNode *)arg1 characterProperties:(id)arg2 drawingState:(id)arg3;
+ (void)readFont:(struct _xmlNode *)arg1 characterProperties:(id)arg2;
+ (void)readFormatting:(struct _xmlNode *)arg1 characterProperties:(id)arg2 drawingState:(id)arg3;
+ (void)readUnderlineFill:(struct _xmlNode *)arg1 underline:(id)arg2 drawingState:(id)arg3;
+ (void)readUnderlineType:(id)arg1 underline:(id)arg2;

@end

