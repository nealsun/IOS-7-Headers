/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <TextInput/TIKeyboardOperation.h>

@class NSString;

@interface TIKeyboardOperationUnmarkText : TIKeyboardOperation
{
    NSString *_text;
}

+ (id)operationWithText:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (id)propertiesForDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1;
- (void)dealloc;

@end

