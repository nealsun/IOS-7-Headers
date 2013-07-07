/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface SLTwitterRequestMultiPart : NSObject
{
    NSData *_payload;
    NSString *_name;
    NSString *_type;
}

+ (id)multipartBoundary;
+ (id)multiPartWithName:(id)arg1 payload:(id)arg2 type:(id)arg3;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSData *payload; // @synthesize payload=_payload;
- (void).cxx_destruct;
- (id)partData;
- (id)formPartData;
- (id)imagePartData;

@end

