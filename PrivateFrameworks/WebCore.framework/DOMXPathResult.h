/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <WebCore/DOMObject.h>

@class DOMNode, NSString;

__attribute__((visibility("hidden")))
@interface DOMXPathResult : DOMObject
{
}

- (id)snapshotItem:(unsigned int)arg1;
- (id)iterateNext;
@property(readonly) unsigned int snapshotLength;
@property(readonly) BOOL invalidIteratorState;
@property(readonly) DOMNode *singleNodeValue;
@property(readonly) BOOL booleanValue;
@property(readonly) NSString *stringValue;
@property(readonly) double numberValue;
@property(readonly) unsigned short resultType;
- (void)finalize;
- (void)dealloc;

@end

