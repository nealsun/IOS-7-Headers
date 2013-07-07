/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class NSMutableDictionary, NSMutableString;

@interface MobileActivationNSXMLParserDelegate : NSObject <NSXMLParserDelegate>
{
    int _state;
    _Bool _renderHTML;
    NSMutableString *_currentPlist;
    NSMutableDictionary *_activationTicket;
}

- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)appendClosingTagForElementName:(id)arg1;
- (void)appendOpeningTagForElementName:(id)arg1 andAttributes:(id)arg2;
- (id)flattenedDictString:(id)arg1;
- (id)activationTicket:(id *)arg1 andRenderHTML:(_Bool *)arg2;
- (id)activationTicket:(id *)arg1;
- (void)dealloc;
- (id)init;
- (id)stringForState:(int)arg1;

@end

