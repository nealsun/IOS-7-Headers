/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class ICCameraFile, NSDictionary, NSString;

@interface PLCameraImportItemRepresentation : NSObject
{
    ICCameraFile *_cameraFile;
    NSDictionary *_metadata;
    BOOL _canRequestMetadata;
    BOOL _canRequestThumbnail;
    NSString *_path;
    BOOL _inDatabase;
}

@property(nonatomic) BOOL inDatabase; // @synthesize inDatabase=_inDatabase;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) BOOL canRequestThumbnail; // @synthesize canRequestThumbnail=_canRequestThumbnail;
@property(nonatomic) BOOL canRequestMetadata; // @synthesize canRequestMetadata=_canRequestMetadata;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) ICCameraFile *cameraFile; // @synthesize cameraFile=_cameraFile;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)isAudio;
- (BOOL)isMovie;
- (BOOL)isRaw;
- (BOOL)isJPEG;
- (id)fileExtension;
- (BOOL)isInDatabaseForce:(BOOL)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithCameraFile:(id)arg1;

@end

