/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/SADomainObject.h>

@class NSDate, NSString;

@interface SAMovieV2ReviewListCell : SADomainObject
{
}

+ (id)reviewListCellWithDictionary:(id)arg1 context:(id)arg2;
+ (id)reviewListCell;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
@property(copy, nonatomic) NSString *reviewText;
@property(copy, nonatomic) NSDate *reviewDate;
@property(copy, nonatomic) NSString *reviewAuthor;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

