/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <DataAccessExpress/DASearchQuery.h>

@class NSString;

@interface DAContactsSearchQuery : DASearchQuery
{
    NSString *_searchBase;
    NSString *_searchScope;
    BOOL _includePhotos;
}

+ (id)contactsSearchQueryWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3 consumer:(id)arg4;
@property BOOL includePhotos; // @synthesize includePhotos=_includePhotos;
@property(retain) NSString *searchScope; // @synthesize searchScope=_searchScope;
@property(retain) NSString *searchBase; // @synthesize searchBase=_searchBase;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2;
- (void)dealloc;
- (id)initWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3 consumer:(id)arg4;

@end
