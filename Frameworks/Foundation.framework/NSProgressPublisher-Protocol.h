/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol NSProgressPublisher <NSObject>
- (oneway void)appWithBundleID:(id)arg1 didAcknowledgeWithSuccess:(BOOL)arg2;
- (oneway void)prioritize;
- (oneway void)pause;
- (oneway void)cancel;
- (oneway void)stopProvidingValues;
- (oneway void)startProvidingValuesWithInitialAcceptor:(id)arg1;
@end

