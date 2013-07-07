/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "WAKView.h"

#import "WebCoreFrameView.h"

@class WebFrameViewPrivate;

@interface WebFrameView : WAKView <WebCoreFrameView>
{
    WebFrameViewPrivate *_private;
}

+ (Class)_viewClassForMIMEType:(id)arg1 allowingPlugins:(BOOL)arg2;
+ (BOOL)_canShowMIMETypeAsHTML:(id)arg1;
+ (id)_viewTypesAllowImageTypeOmission:(BOOL)arg1;
- (void)printDocumentView;
- (BOOL)documentViewShouldHandlePrint;
- (id)_webcore_effectiveFirstResponder;
- (void)keyDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_forwardMouseEvent:(id)arg1;
- (BOOL)_firstResponderIsFormControl;
- (void)scrollLineDown:(id)arg1;
- (void)scrollLineUp:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (BOOL)_scrollLineHorizontally:(BOOL)arg1;
- (BOOL)_scrollLineVertically:(BOOL)arg1;
- (BOOL)_pageInBlockProgressionDirection:(BOOL)arg1;
- (BOOL)_pageHorizontally:(BOOL)arg1;
- (BOOL)_pageVertically:(BOOL)arg1;
- (float)_horizontalPageScrollDistance;
- (float)_horizontalKeyboardScrollDistance;
- (BOOL)_scrollHorizontallyBy:(float)arg1;
- (BOOL)_scrollVerticallyBy:(float)arg1;
- (void)_goForward;
- (void)_goBack;
- (void)scrollToEndOfDocument:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (BOOL)_scrollToEndOfDocument;
- (BOOL)_scrollToBeginningOfDocument;
- (BOOL)_isFlippedDocument;
- (BOOL)_isVerticalDocument;
- (BOOL)_scrollOverflowInDirection:(int)arg1 granularity:(int)arg2;
- (void)viewDidMoveToWindow;
- (void)setFrameSize:(struct CGSize)arg1;
- (struct CGRect)visibleRect;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (void)setNextKeyView:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (id)documentView;
- (BOOL)allowsScrolling;
- (void)setAllowsScrolling:(BOOL)arg1;
- (id)webFrame;
- (BOOL)scrollView:(id)arg1 shouldScrollToPoint:(struct CGPoint)arg2;
- (void)finalize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct Frame *)_web_frame;
- (float)_verticalKeyboardScrollDistance;
- (void)_frameSizeChanged;
- (void)_install;
- (Class)_viewClassForMIMEType:(id)arg1;
- (float)_verticalPageScrollDistance;
- (id)_scrollView;
- (void)_setWebFrame:(id)arg1;
- (id)_makeDocumentViewForDataSource:(id)arg1;
- (void)_setDocumentView:(id)arg1;
- (id)_webView;
- (Class)_customScrollViewClass;
- (id)_contentView;
- (id)_largestChildWithScrollBars;
- (BOOL)_hasScrollBars;
- (id)_largestScrollableChild;
- (BOOL)_isScrollable;
- (float)_area;
- (void)frameSizeChanged;

@end

