/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"

@class BBAssertion, NSArray, NSString;

@interface BBResponse : NSObject <NSCoding>
{
    BBAssertion *_lifeAssertion;
    id _sendBlock;
    NSString *_bulletinID;
    BOOL _sent;
    NSString *_replyText;
    NSArray *_lifeAssertions;
    int _actionType;
    NSString *_buttonID;
}

@property(copy, nonatomic) NSString *buttonID; // @synthesize buttonID=_buttonID;
@property(copy, nonatomic) NSString *replyText; // @synthesize replyText=_replyText;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *bulletinID; // @synthesize bulletinID=_bulletinID;
@property(copy, nonatomic) id sendBlock; // @synthesize sendBlock=_sendBlock;
@property(copy, nonatomic) NSArray *lifeAssertions; // @synthesize lifeAssertions=_lifeAssertions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)send;
- (void)dealloc;

@end

