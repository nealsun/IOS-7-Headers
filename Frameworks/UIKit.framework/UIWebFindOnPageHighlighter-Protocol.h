/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@protocol UIWebFindOnPageHighlighter <NSObject>
@property(readonly, nonatomic) unsigned int highlightedMatchIndex;
@property(readonly, nonatomic) unsigned int numberOfMatches;
@property(nonatomic) id <UIWebFindOnPageHighlighterDelegate> delegate;
@property(readonly, nonatomic) NSString *searchText;
- (void)highlightPreviousMatch;
- (void)highlightNextMatch;
- (void)setSearchText:(id)arg1 matchLimit:(unsigned int)arg2;
@end

