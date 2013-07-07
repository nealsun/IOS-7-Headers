/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DOMRange.h"

#import "UIWebSelectionBlock.h"

@interface DOMRange (UIWebSelectionAdditions) <UIWebSelectionBlock>
- (id)enclosingDocument;
- (id)rangeOfContents;
- (BOOL)canShrinkDirectlyToTextOnly;
- (BOOL)containsRange:(id)arg1;
- (id)asDomRange;
- (id)asDomNode;
- (BOOL)selectable;
- (BOOL)rendersAsBlock;
- (BOOL)strictlyContainsBlock:(id)arg1;
- (BOOL)containsBlock:(id)arg1;
- (BOOL)isSameBlock:(id)arg1;
- (id)largerParent;
- (id)parentBlock;
- (struct CGRect)boundingRectAndInsideFixedPosition:(int *)arg1;
- (struct CGRect)boundingRect;
- (id)webFrame;
- (void)unionWithRange:(id)arg1;
@end

