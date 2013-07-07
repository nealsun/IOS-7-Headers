/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

@class NSNumber, NSString;

@interface SKUIItemState : NSObject <NSCopying>
{
    NSString *_downloadPhase;
    float _downloadProgress;
    long long _installedVersionIdentifier;
    NSNumber *_itemIdentifier;
    unsigned int _state;
}

@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(copy, nonatomic) NSNumber *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(nonatomic) long long installedVersionIdentifier; // @synthesize installedVersionIdentifier=_installedVersionIdentifier;
@property(nonatomic) float downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(copy, nonatomic) NSString *downloadPhase; // @synthesize downloadPhase=_downloadPhase;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

