/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface NSPortNameServer : NSObject
{
}

+ (id)defaultPortNameServer;
+ (id)systemDefaultPortNameServer;
- (id)portForName:(id)arg1 onHost:(id)arg2;
- (BOOL)registerPort:(id)arg1 forName:(id)arg2;
- (BOOL)removePortForName:(id)arg1;
- (BOOL)registerPort:(id)arg1 name:(id)arg2;
- (id)portForName:(id)arg1 host:(id)arg2;
- (id)portForName:(id)arg1;

@end

