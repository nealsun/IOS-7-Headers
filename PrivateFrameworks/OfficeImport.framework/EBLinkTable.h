/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface EBLinkTable : NSObject
{
}

+ (struct XlLinkTable *)createXlLinkTableFromLinksCollection:(id)arg1 workbook:(id)arg2 state:(id)arg3;
+ (void)readFromState:(id)arg1;
+ (int)mapEDLinkTypeToXl:(int)arg1;
+ (int)mapXlLinkTypeToED:(int)arg1;

@end

