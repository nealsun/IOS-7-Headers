/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCWebContentFilterPayload : MCPayload
{
    BOOL _autoFilterEnabled;
    NSArray *_permittedURLStrings;
    NSArray *_whitelistedBookmarks;
    NSArray *_blacklistedURLStrings;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(retain, nonatomic) NSArray *blacklistedURLStrings; // @synthesize blacklistedURLStrings=_blacklistedURLStrings;
@property(retain, nonatomic) NSArray *whitelistedBookmarks; // @synthesize whitelistedBookmarks=_whitelistedBookmarks;
@property(retain, nonatomic) NSArray *permittedURLStrings; // @synthesize permittedURLStrings=_permittedURLStrings;
@property(nonatomic) BOOL autoFilterEnabled; // @synthesize autoFilterEnabled=_autoFilterEnabled;
- (void).cxx_destruct;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)title;
- (id)description;
- (id)restrictions;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end

