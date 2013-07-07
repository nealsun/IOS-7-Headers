/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class CALayer, UIColor, UIPDFAnnotation, UIPDFMarkupAnnotation, UIPDFPageView;

@interface UIPDFAnnotationController : NSObject <UIGestureRecognizerDelegate>
{
    UIPDFPageView *_pageView;
    int _lock;
    struct CGPoint _startPoint;
    BOOL _moving;
    UIPDFMarkupAnnotation *_currentAnnotation;
    CDStruct_dff5684f _initialRange;
    BOOL _tracking;
    CALayer *_drawingSurface;
    id <NSObject><UIPDFAnnotationControllerDelegate> _delegate;
    struct CGSize _cachedMarginNoteSize;
    BOOL makeUnderlineAnnotation;
    BOOL _allowEditing;
    UIColor *_currentColor;
}

+ (struct CGImage *)newMaskImage:(struct CGPDFPage *)arg1 size:(struct CGSize)arg2;
+ (id)newAnnotation:(struct CGPDFDictionary *)arg1 type:(const char *)arg2;
+ (BOOL)pageHasAnnotations:(id)arg1;
@property(nonatomic) UIColor *currentColor; // @synthesize currentColor=_currentColor;
@property(nonatomic) BOOL allowEditing; // @synthesize allowEditing=_allowEditing;
@property(readonly, nonatomic) UIPDFPageView *pageView; // @synthesize pageView=_pageView;
@property(readonly, nonatomic) BOOL tracking; // @synthesize tracking=_tracking;
@property(nonatomic) id <NSObject><UIPDFAnnotationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) CALayer *drawingSurface; // @synthesize drawingSurface=_drawingSurface;
@property(nonatomic) BOOL makeUnderlineAnnotation; // @synthesize makeUnderlineAnnotation;
@property(retain, nonatomic) UIPDFAnnotation *currentAnnotation; // @synthesize currentAnnotation=_currentAnnotation;
- (id)marginNoteImage:(id)arg1;
- (struct CGSize)marginNoteImageSize;
- (struct CGImage *)underlineImageFor:(struct CGRect)arg1;
- (struct CGImage *)newHighlightMaskImageFor:(struct CGRect)arg1;
- (void)copyAttributesOf:(id)arg1 to:(id)arg2;
- (id)annotatePageSelection;
- (BOOL)willDoSomethingWithTap:(struct CGPoint)arg1;
- (BOOL)annotationLongPressRecognized:(id)arg1;
- (BOOL)annotationSingleTapRecognized:(id)arg1;
- (BOOL)annotationBriefPressRecognized:(id)arg1;
- (id)linkAnnotationAt:(struct CGPoint)arg1;
- (id)annotationAt:(struct CGPoint)arg1;
- (BOOL)linkAnnotationShouldBegin:(id)arg1;
- (BOOL)isLinkAnnotationAt:(struct CGPoint)arg1;
- (id)_linkAnnotationViewAt:(struct CGPoint)arg1;
- (void)didEndTrackingAtPoint:(struct CGPoint)arg1;
- (void)endTrackingAtPoint:(struct CGPoint)arg1;
- (void)tracking:(struct CGPoint)arg1;
- (void)startTracking:(struct CGPoint)arg1;
- (BOOL)willTrackAtPoint:(struct CGPoint)arg1;
- (void)_initialRange:(struct CGPoint)arg1;
- (BOOL)trackMoved:(struct CGPoint)arg1;
- (BOOL)madeInstantAnnotation;
- (void)mergeSelectionOfAnnotation:(id)arg1;
- (BOOL)isSelection:(struct CGPDFSelection *)arg1 equalTo:(struct CGPDFSelection *)arg2;
- (BOOL)intersects:(struct CGPDFSelection *)arg1 with:(struct CGPDFSelection *)arg2;
- (void)annotationTapRecognized:(id)arg1;
- (void)linkPressRecognized:(id)arg1;
- (void)doubleTapRecognized:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)unlock;
- (void)lock;
- (void)drawAnnotations:(struct CGContext *)arg1;
- (void)setNeedsDisplay;
- (void)setView:(id)arg1;
- (void)layoutAnnotationViews:(id)arg1;
- (void)_addAnnotationViewFor:(id)arg1;
- (void)_addLinkAnnotationViewFor:(id)arg1;
- (void)_addRecognizers:(id)arg1;
- (void)hostViewDidScroll;
- (void)setSurfacePosition:(id)arg1;
- (void)addDrawingSurface:(id)arg1 view:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toSurfaceLayer:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toSurfaceLayer:(id)arg2;
- (void)addLinkAnnotationViews;
- (BOOL)willHandleTouchGestureAtPoint:(struct CGPoint)arg1;
- (void)addAnnotation:(id)arg1;
- (void)dealloc;
- (id)initWithPageView:(id)arg1;
- (id)init;

@end

