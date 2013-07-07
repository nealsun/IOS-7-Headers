/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class MPMediaItem;

@interface SUScriptMediaItem : SUScriptObject
{
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)scriptMediaTypeForNativeMediaType:(unsigned int)arg1;
+ (unsigned int)nativeMediaTypesForScriptMediaTypes:(id)arg1;
+ (id)copyScriptMediaTypesForNativeMediaTypes:(unsigned int)arg1;
- (id)_className;
- (id)valueForProperty:(id)arg1;
- (id)imageURLWithWidth:(id)arg1 height:(id)arg2;
@property(readonly, nonatomic) MPMediaItem *nativeItem;

@end

