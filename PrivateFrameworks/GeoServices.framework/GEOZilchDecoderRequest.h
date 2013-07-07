/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <GeoServices/GEOMapRequest.h>

@class GEOZilchDecoder, NSObject<OS_dispatch_semaphore>;

__attribute__((visibility("hidden")))
@interface GEOZilchDecoderRequest : GEOMapRequest
{
    struct unique_ptr<geo::ZilchMapModel, std::__1::default_delete<geo::ZilchMapModel>> _mapModel;
    GEOZilchDecoder *_decoder;
    shared_ptr_27244a92 _message;
    id _pathHandler;
    NSObject<OS_dispatch_semaphore> *_finishedSemaphore;
}

@property(copy) id pathHandler; // @synthesize pathHandler=_pathHandler;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancel;
- (void)decodeWithPathHandler:(id)arg1;
- (void)dealloc;
- (id)initWithDecoder:(id)arg1 message:(shared_ptr_27244a92)arg2;

@end

