/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface OAXDrawable : NSObject
{
}

+ (id)readDrawablesFromXmlNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 drawingState:(id)arg3;
+ (id)readDrawableFromXmlNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 drawingState:(id)arg3;
+ (void)readNonVisualPropertiesFromDrawableXmlNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 visualNodeName:(const char *)arg3 toDrawable:(id)arg4 drawingState:(id)arg5;

@end

