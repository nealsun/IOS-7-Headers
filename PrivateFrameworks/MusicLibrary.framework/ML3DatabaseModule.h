/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface ML3DatabaseModule : NSObject
{
    NSString *_name;
    const struct sqlite3_module *_moduleMethods;
    void *_context;
    id _contextReleaseBlock;
}

@property(copy, nonatomic) id contextReleaseBlock; // @synthesize contextReleaseBlock=_contextReleaseBlock;
@property(nonatomic) void *context; // @synthesize context=_context;
@property(nonatomic) const struct sqlite3_module *moduleMethods; // @synthesize moduleMethods=_moduleMethods;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)registerWithConnection:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithName:(id)arg1 moduleMethods:(const struct sqlite3_module *)arg2;

@end

