/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableData;

@interface ABVCardLexer : NSObject
{
    NSMutableData *_data;
    char *_bytes;
    unsigned int _length;
    unsigned int _peakedPoint;
    unsigned int _cursor;
    BOOL _unicode;
    int _errorCount;
    NSArray *_activeTokenSets;
}

- (BOOL)atEOF;
- (BOOL)advancePastEOL;
- (BOOL)advancePastEOLSingle;
- (BOOL)advancePastEOLUnicode;
- (BOOL)advanceToEOL;
- (BOOL)advanceToEOLSingle;
- (BOOL)advanceToEOLUnicode;
- (BOOL)advanceToToken:(int)arg1 throughTypes:(int)arg2;
- (int)advanceToString;
- (int)advanceToSingleByteString;
- (int)advanceToUnicodeString;
- (void)advanceToPeakPoint;
- (id)nextBase64Data;
- (id)nextBase64Line:(char *)arg1;
- (id)nextSingleByteBase64Line:(char *)arg1;
- (id)nextUnicodeBase64Line:(char *)arg1;
- (id)nextArraySeperatedByToken:(int)arg1 stoppingAt:(int)arg2 inEncoding:(unsigned int)arg3;
- (int)tokenAtCursor;
- (id)nextStringInEncoding:(unsigned int)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(int)arg3 trim:(BOOL)arg4;
- (void)_applyNextStringInEncoding:(unsigned int)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(int)arg3 trim:(BOOL)arg4 intoString:(id)arg5;
- (BOOL)_advancePastLineFoldingSequenceIfNeeded;
- (id)nextUnicodeStringStopTokens:(int)arg1 quotedPrintable:(BOOL)arg2 trim:(BOOL)arg3;
- (id)nextSingleByteStringInEncoding:(unsigned int)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(int)arg3 trim:(BOOL)arg4;
- (BOOL)advancedPastToken:(int)arg1;
- (id)nextEscapedCharacter;
- (id)nextQuotedPrintableData;
- (int)nextTokenPeak:(BOOL)arg1;
- (int)nextTokenPeakUnicode:(BOOL)arg1 length:(int)arg2;
- (int)nextTokenPeakSingle:(BOOL)arg1 length:(int)arg2;
- (id)tokenSetForLength:(int)arg1;
- (int)errorCount;
- (unsigned int)cursor;
- (void)finalize;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)tokenName:(int)arg1;

@end

