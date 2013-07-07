/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface TIKeyboardLayoutState : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _hasCandidateKey;
    BOOL _hasAccentKey;
    BOOL _canMultitap;
    BOOL _isAlphabeticPlane;
    BOOL _interfaceIdiomIsPad;
    NSString *_inputMode;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL interfaceIdiomIsPad; // @synthesize interfaceIdiomIsPad=_interfaceIdiomIsPad;
@property(nonatomic) BOOL isAlphabeticPlane; // @synthesize isAlphabeticPlane=_isAlphabeticPlane;
@property(nonatomic) BOOL canMultitap; // @synthesize canMultitap=_canMultitap;
@property(nonatomic) BOOL hasAccentKey; // @synthesize hasAccentKey=_hasAccentKey;
@property(nonatomic) BOOL hasCandidateKey; // @synthesize hasCandidateKey=_hasCandidateKey;
@property(copy, nonatomic) NSString *inputMode; // @synthesize inputMode=_inputMode;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

