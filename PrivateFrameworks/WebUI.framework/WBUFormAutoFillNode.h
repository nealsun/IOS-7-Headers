/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "WBSFormAutoFillNode.h"

@class DOMNode;

@interface WBUFormAutoFillNode : NSObject <WBSFormAutoFillNode>
{
    DOMNode *_domNode;
}

+ (id)autoFillNodeWithDOMNode:(id)arg1;
@property(readonly, nonatomic) DOMNode *domNode; // @synthesize domNode=_domNode;
- (id)htmlTableCellElementCellAbove;
- (BOOL)isHTMLTextAreaElementUserEdited;
- (BOOL)isHTMLInputElementUserEdited;
- (void)setHTMLInputElementAutofilled:(BOOL)arg1;
- (BOOL)isHTMLInputElementAutofilled;
- (struct CGRect)elementBounds;
- (void)dealloc;
- (id)initWithDOMNode:(id)arg1;
- (id)initWithJSWrapper:(struct OpaqueJSValue *)arg1 inContext:(struct OpaqueJSContext *)arg2;

@end

