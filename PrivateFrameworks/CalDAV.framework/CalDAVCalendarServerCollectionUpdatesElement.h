/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CalDAV/CalDAVCalendarServerResourceChangeElement.h>

@interface CalDAVCalendarServerCollectionUpdatesElement : CalDAVCalendarServerResourceChangeElement
{
    int _state;
}

@property(readonly) int state; // @synthesize state=_state;
- (id)copyParseRules;
- (void)setUnpublish:(id)arg1;
- (void)setPublish:(id)arg1;

@end

