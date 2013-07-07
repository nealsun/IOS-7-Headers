/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray, NSDictionary, NSString;

@interface PLCloudSharingInvitationChangeJob : PLCloudSharingJob
{
    NSArray *_MSASSharingRelationships;
    NSString *_albumGUID;
    NSString *_resendInvitationGUID;
    NSDictionary *_mstreamdInfoDictionary;
    long long _relationshipChangeType;
    long long _jobType;
}

+ (void)resendPendingInvitationWithGUID:(id)arg1 albumGUID:(id)arg2;
+ (void)sendServerPendingInvitationsForAlbumWithGUID:(id)arg1;
+ (void)saveServerStateLocallyForSharingInvitationRelationships:(id)arg1 changeType:(long long)arg2 info:(id)arg3;
+ (void)saveServerStateLocallyForSharingACLRelationships:(id)arg1 changeType:(long long)arg2 info:(id)arg3;
@property(retain, nonatomic) NSDictionary *mstreamdInfoDictionary; // @synthesize mstreamdInfoDictionary=_mstreamdInfoDictionary;
@property(nonatomic) long long jobType; // @synthesize jobType=_jobType;
@property(retain, nonatomic) NSString *resendInvitationGUID; // @synthesize resendInvitationGUID=_resendInvitationGUID;
@property(retain, nonatomic) NSString *albumGUID; // @synthesize albumGUID=_albumGUID;
@property(nonatomic) long long relationshipChangeType; // @synthesize relationshipChangeType=_relationshipChangeType;
@property(retain, nonatomic) NSArray *MSASSharingRelationships; // @synthesize MSASSharingRelationships=_MSASSharingRelationships;
- (void)executeSendServerPendingInvitationsForAlbumWithGUID;
- (void)executeSaveServerStateLocallyForSharingACLRelationships;
- (void)executeSaveServerStateLocallyForSharingInvitationRelationships;
- (void)runDaemonSide;
- (BOOL)shouldArchiveXPCToDisk;
- (void)run;
- (long long)daemonOperation;
- (void)dealloc;
- (id)description;
- (id)initFromXPCObject:(id)arg1;
- (void)encodeToXPCObject:(id)arg1;

@end

