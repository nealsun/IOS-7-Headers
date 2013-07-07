/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSOperationQueue, UIPDFDocument;

@interface UIPDFPageImageCache : NSObject
{
    UIPDFDocument *_document;
    unsigned int _lookAhead;
    unsigned int _jobCount;
    id *_jobsPrioritized;
    unsigned int _nextJobIndex;
    unsigned int _pageCount;
    id *_jobsByPage;
    NSOperationQueue *_renderQueue;
    int _lock;
}

@property(readonly) unsigned int lookAhead; // @synthesize lookAhead=_lookAhead;
@property(readonly) unsigned int pageCount; // @synthesize pageCount=_pageCount;
@property(readonly) UIPDFDocument *document; // @synthesize document=_document;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)cancelPendingRenderOperationsForTarget:(id)arg1;
- (void)cancelPendingRenderOperations;
- (id)getImageIfAvailableForPage:(unsigned int)arg1;
- (void)deliverImageOfPage:(unsigned int)arg1 maxSize:(struct CGSize)arg2 quality:(char *)arg3 receiver:(id)arg4 selector:(SEL)arg5 info:(id)arg6;
- (void)cacheImageOfPage:(unsigned int)arg1 maxSize:(struct CGSize)arg2;
- (void)addRenderJob:(id)arg1;
- (void)dealloc;
- (void)clearCache;
- (id)initWithDocument:(id)arg1 cacheCount:(unsigned int)arg2 lookAhead:(unsigned int)arg3;
- (id)initWithDocument:(id)arg1;

@end

