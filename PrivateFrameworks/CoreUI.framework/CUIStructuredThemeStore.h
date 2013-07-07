/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "CUIStructuredThemeStorage.h"
#import "CUIStructuredThemeStorage2.h"

@class CUICommonAssetStorage, NSLock, NSMutableDictionary, NSString;

@interface CUIStructuredThemeStore : NSObject <CUIStructuredThemeStorage, CUIStructuredThemeStorage2>
{
    NSMutableDictionary *_cache;
    CUICommonAssetStorage *_store;
    NSLock *_cacheLock;
    NSLock *_storeLock;
    unsigned int _themeIndex;
    NSString *_bundleID;
}

- (void)clearRenditionCache;
- (id)cacheLock;
- (id)cache;
- (const struct _renditionkeytoken *)renditionKeyForName:(id)arg1 cursorHotSpot:(struct CGPoint *)arg2;
- (const struct _renditionkeytoken *)renditionKeyForName:(id)arg1;
- (id)zeroCodeGlyphList;
- (BOOL)canGetRenditionWithKey:(const struct _renditionkeytoken *)arg1 isFPO:(char *)arg2;
- (BOOL)canGetRenditionWithKey:(const struct _renditionkeytoken *)arg1;
- (id)renditionWithKey:(const struct _renditionkeytoken *)arg1;
- (id)prefilteredAssetDataForKey:(struct _renditionkeytoken *)arg1;
- (id)lookupAssetForKey:(struct _renditionkeytoken *)arg1;
- (id)debugDescriptionForKeyList:(const struct _renditionkeytoken *)arg1;
- (const struct _renditionkeyfmt *)renditionKeyFormat;
- (void)_getKeyForAssetInOtherLookGroupClosestToKey:(struct _renditionkeytoken *)arg1 foundAsset:(char *)arg2;
- (void)_getKeyForAssetClosestToKey:(struct _renditionkeytoken *)arg1 foundAsset:(char *)arg2;
- (id)convertRenditionKeyToKeyData:(struct _renditionkeytoken *)arg1;
- (id)_newRenditionKeyDataFromKey:(struct _renditionkeytoken *)arg1;
- (void)_updateKeyWithCompatibilityMapping:(struct _renditionkeytoken *)arg1;
- (float)fontSizeForFontSizeType:(id)arg1;
- (BOOL)getFontName:(id *)arg1 baselineOffset:(float *)arg2 forFontType:(id)arg3;
- (BOOL)hasPhysicalColorWithName:(id)arg1;
- (BOOL)getPhysicalColor:(struct _colordef *)arg1 withName:(id)arg2;
- (unsigned int)authoredWithSchemaVersion;
- (unsigned int)distilledInCoreUIVersion;
- (unsigned int)documentFormatVersion;
- (id)themeStore;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithPath:(id)arg1;
- (BOOL)assetExistsForKey:(struct _renditionkeytoken *)arg1;
- (id)keySignatureForKey:(const struct _renditionkeytoken *)arg1;
- (id)baseGradationKeySignatureForKey:(const struct _renditionkeytoken *)arg1;
- (const struct _renditionkeyfmt *)keyFormat;
- (BOOL)usesCUISystemThemeRenditionKey;
- (int)maximumRenditionKeyTokenCount;
- (unsigned int)colorSpaceID;
- (id)debugDescription;
- (void)setThemeIndex:(unsigned int)arg1;
- (id)bundleID;
- (id)displayNameForPartID:(int)arg1;
- (id)constantNameForPartID:(int)arg1;
- (id)displayNameForElementID:(int)arg1;
- (id)constantNameForElementID:(int)arg1;

@end

