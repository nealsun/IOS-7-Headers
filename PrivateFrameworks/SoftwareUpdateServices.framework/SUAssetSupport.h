/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface SUAssetSupport : NSObject
{
}

+ (id)assetDownloadOptionsFromMetadata:(id)arg1 priority:(int)arg2;
+ (id)assetDownloadOptionsForDocumentation;
+ (id)defaultAssetDownloadOptionsWithPriority:(int)arg1;
+ (id)getInstalledDocumentationAssetFromSoftwareUpdateAssetIfExists:(id)arg1;
+ (id)getLocalDefaultSoftwareUpdateAssetIfExists;
+ (id)findAssetWithMatcher:(id)arg1 localSearch:(BOOL)arg2 error:(id *)arg3;
+ (void)cleanupAllSoftwareUpdateAndRelatedAssets;
+ (void)cleanupAllSoftwareUpdateAssets;
+ (void)_cleanupAllAssetsOfType:(id)arg1;
+ (id)tryCreateDocumentationFromDocumentationAsset:(id)arg1;
+ (id)tryCreateDescriptorFromSoftwareUpdateAsset:(id)arg1;

@end

