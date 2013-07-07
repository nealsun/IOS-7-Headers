/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSRegularExpression, NSString;

@interface SUOverlayConfiguration : NSObject
{
    NSRegularExpression *_bagKeyPattern;
    int _cornerRadius;
    BOOL _shouldShowNavigationBar;
    struct CGSize _size;
    NSString *_transitionName;
    NSRegularExpression *_urlPattern;
}

@property(readonly, nonatomic) NSString *transitionName; // @synthesize transitionName=_transitionName;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) BOOL shouldShowNavigationBar; // @synthesize shouldShowNavigationBar=_shouldShowNavigationBar;
@property(readonly, nonatomic) int cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (BOOL)matchesURLBagKey:(id)arg1;
- (BOOL)matchesURL:(id)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

