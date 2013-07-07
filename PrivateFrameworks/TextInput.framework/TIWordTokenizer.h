/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface TIWordTokenizer : NSObject
{
    NSString *m_string;
    struct {
        unsigned short buffer[64];
        struct __CFString *theString;
        unsigned short *directUniCharBuffer;
        char *directCStringBuffer;
        struct {
            int location;
            int length;
        } rangeToBuffer;
        int bufferedRangeStart;
        int bufferedRangeEnd;
    } m_inlineBuffer;
    struct _NSRange m_tokenRange;
    struct _NSRange m_searchRange;
    unsigned int m_bufferOffset;
}

- (id)allTokensForString:(id)arg1;
- (struct _NSRange)rangeOfCurrentToken;
- (struct _NSRange)advanceToNextToken;
- (void)setString:(id)arg1 withSearchRange:(struct _NSRange)arg2;
- (void)dealloc;
- (id)init;

@end

