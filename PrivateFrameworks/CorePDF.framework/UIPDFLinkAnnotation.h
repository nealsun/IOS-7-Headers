/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CorePDF/UIPDFMarkupAnnotation.h>

@interface UIPDFLinkAnnotation : UIPDFMarkupAnnotation
{
}

- (BOOL)recognizeGestures;
- (BOOL)shouldRecognizeTapOrPress:(struct CGPoint)arg1;
- (BOOL)quadPoints:(struct CGPDFArray *)arg1 within:(struct CGRect)arg2;
- (struct CGRect)linkRectangle;
- (unsigned int)pageNumber;
- (id)url;
- (unsigned int)getNamedDestination:(struct CGPDFDictionary *)arg1;
- (unsigned int)getDestination:(struct CGPDFDictionary *)arg1;
- (id)newBaseURL;

@end

