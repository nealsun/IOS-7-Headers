/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "EKIdentityProtocol.h"

@class EKObjectID, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface EKCalendarNotification : NSObject <EKIdentityProtocol>
{
    int _type;
    NSString *_title;
    NSString *_name;
    NSString *_emailAddress;
    NSURL *_URI;
    EKObjectID *_objectID;
    struct CGColor *_dotColor;
    BOOL _hiddenFromNotificationCenter;
    BOOL _alerted;
}

@property(nonatomic) BOOL alerted; // @synthesize alerted=_alerted;
@property(nonatomic) BOOL hiddenFromNotificationCenter; // @synthesize hiddenFromNotificationCenter=_hiddenFromNotificationCenter;
@property(nonatomic) struct CGColor *dotColor; // @synthesize dotColor=_dotColor;
@property(retain, nonatomic) EKObjectID *objectID; // @synthesize objectID=_objectID;
@property(retain, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(retain, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) BOOL needsAlert;
- (void)dealloc;
- (id)initWithType:(int)arg1;

@end

