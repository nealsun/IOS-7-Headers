/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface CNContactIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_stringValue;
}

+ (BOOL)supportsSecureCoding;
+ (id)identifierWithString:(id)arg1;
@property(readonly) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;

@end

