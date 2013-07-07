/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CalDAV/CalDAVContainerSyncTaskGroup.h>

@class CoreDAVItemParserMapping, NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface CalDAVContainerChecksumSyncTaskGroup : CalDAVContainerSyncTaskGroup
{
    NSArray *_preferredChecksumVersions;
    NSString *_unusedSyncToken;
    NSString *_unusedCTag;
    CoreDAVItemParserMapping *_bestServerChecksumVersion;
    NSMutableDictionary *_serverURLsToChecksums;
    NSDictionary *_localURLsToChecksums;
    BOOL _mismatchDetected;
}

@property(readonly) BOOL mismatchDetected; // @synthesize mismatchDetected=_mismatchDetected;
@property(retain, nonatomic) CoreDAVItemParserMapping *bestServerChecksumVersion; // @synthesize bestServerChecksumVersion=_bestServerChecksumVersion;
@property(retain, nonatomic) NSArray *preferredChecksumVersions; // @synthesize preferredChecksumVersions=_preferredChecksumVersions;
- (void)deleteResourceURLs:(id)arg1;
- (BOOL)shouldDownloadResource:(id)arg1 localETag:(id)arg2 serverETag:(id)arg3;
- (void)receivedPropertiesToValues:(id)arg1 forURL:(id)arg2;
- (id)copyAdditionalResourcePropertiesToFetch;
- (void)startTaskGroup;
- (void)_serverChecksumSupportPropfind;
- (BOOL)_hadOutOfDateCollectionToken;
- (id)_calculatedCalendarHome;
- (void)_handleResponseToChecksumPropfind:(id)arg1;
- (void)dealloc;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6 appSpecificCalendarItemClass:(Class)arg7;

// Remaining properties
@property(nonatomic) id <CalDAVChecksumLocalDBInfoProvider> delegate; // @dynamic delegate;

@end

