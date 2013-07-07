/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSString;

@interface RTCReportingBackEnd : NSObject
{
    NSDictionary *_profile;
    NSString *_name;
    unsigned int _sessionID;
    int _compType;
    unsigned short _version;
    unsigned short _eventID;
    char *_udid;
    NSString *_displayURL;
}

@property(copy) NSString *displayURL; // @synthesize displayURL=_displayURL;
@property char *udid; // @synthesize udid=_udid;
@property unsigned short version; // @synthesize version=_version;
@property int compType; // @synthesize compType=_compType;
@property unsigned int sessionID; // @synthesize sessionID=_sessionID;
- (BOOL)uploadFileAtPath:(id)arg1;
- (id)sendMsgOfType:(int)arg1 method:(unsigned short)arg2 respCode:(unsigned short)arg3 dict:(id)arg4;
- (id)sendMsgOfType:(int)arg1 method:(unsigned short)arg2 respCode:(unsigned short)arg3 eventID:(unsigned short)arg4 dict:(id)arg5;
- (void)dealloc;
- (id)initWithName:(id)arg1 profile:(id)arg2;

@end

