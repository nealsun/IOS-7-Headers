/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol SPSearchDatastore <NSObject>
- (id)displayIdentifierForDomain:(unsigned int)arg1;
- (id)searchDomains;
- (void)performQuery:(id)arg1 withResultsPipe:(id)arg2;

@optional
- (id)imageDataForResultIdentifier:(unsigned long long)arg1 domain:(unsigned int)arg2 size:(struct CGSize)arg3;
- (id)resultForIdentifier:(id)arg1 domain:(unsigned int)arg2;
- (id)categoryForDomain:(unsigned int)arg1;
- (BOOL)wantsEveryResultInItsOwnSection;
@end

