/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface SKUIMenuPageSectionContext : NSObject
{
    NSMutableDictionary *_sections;
    int _selectedIndex;
}

@property(nonatomic) int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
- (void)setSections:(id)arg1 forIndex:(int)arg2;
- (id)sectionsForIndex:(int)arg1;

@end

