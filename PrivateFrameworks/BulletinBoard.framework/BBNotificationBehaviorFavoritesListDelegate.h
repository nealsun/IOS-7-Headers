/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "ABPredicateDelegate.h"

@interface BBNotificationBehaviorFavoritesListDelegate : NSObject <ABPredicateDelegate>
{
    id _handlerBlock;
}

- (BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void *)arg2;
- (BOOL)predicateShouldContinue:(id)arg1;
- (void)dealloc;
- (id)initWithHandlerBlock:(id)arg1;

@end

