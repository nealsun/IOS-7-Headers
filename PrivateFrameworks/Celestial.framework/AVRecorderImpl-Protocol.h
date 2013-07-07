/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol AVRecorderImpl <NSObject>
- (double)recordedDuration;
- (long long)recordedFileSizeInBytes;
- (BOOL)audioCurrentAverageDecibelLevels:(float *)arg1 andPeakDecibelLevels:(float *)arg2;
- (BOOL)audioCurrentAverageVolumeLevels:(float *)arg1 andPeakVolumeLevels:(float *)arg2;
- (unsigned int)audioNumDeviceChannels;
- (void)setMicVolume:(float)arg1;
- (float)micVolume;
- (BOOL)autoFocusAtPoint:(struct CGPoint)arg1;
- (BOOL)takePhoto;
- (BOOL)isRecording;
- (void)stop;
- (BOOL)start;
- (BOOL)isActive;
- (void)deactivate;
- (BOOL)activate:(id *)arg1;
- (id)attributeForKey:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)init;
@end

