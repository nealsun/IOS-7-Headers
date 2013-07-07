/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Search/SPSearchResult.h>

@class NSString;

@interface SPContentResult : SPSearchResult
{
    NSString *_extid;
    NSString *_content;
}

+ (id)resultWithIdentifier:(id)arg1 title:(id)arg2 subtitle:(id)arg3 summary:(id)arg4 auxiliaryTitle:(id)arg5 auxiliarySubtitle:(id)arg6 actionURL:(id)arg7 searchableContent:(id)arg8;
+ (id)resultWithSearchResult:(id)arg1 identifier:(id)arg2 searchableContent:(id)arg3;
+ (id)resultWithRecord:(id)arg1 domain:(unsigned int)arg2 displayIdentifier:(id)arg3 query:(id)arg4;
+ (id)resultWithRecord:(id)arg1;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *extid; // @synthesize extid=_extid;
- (void)dealloc;

@end

