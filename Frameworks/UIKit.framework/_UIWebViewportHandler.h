/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface _UIWebViewportHandler : NSObject
{
    struct _UIWebViewportConfiguration _defaultConfiguration;
    struct _UIWebViewportConfiguration _configuration;
    unsigned int _webkitDefinedConfigurationFlags;
    struct CGSize _availableViewSize;
    unsigned int _configurationChangeFlags;
    BOOL _classicViewportMode;
    id <_UIWebViewportHandlerDelegate> _delegate;
    struct CGRect _documentBounds;
}

@property(readonly, nonatomic, getter=isClassicViewportMode) BOOL classicViewportMode; // @synthesize classicViewportMode=_classicViewportMode;
@property(readonly, nonatomic) unsigned int webkitDefinedConfigurationFlags; // @synthesize webkitDefinedConfigurationFlags=_webkitDefinedConfigurationFlags;
@property(readonly, nonatomic) struct CGSize availableViewSize; // @synthesize availableViewSize=_availableViewSize;
@property(readonly, nonatomic) struct CGRect documentBounds; // @synthesize documentBounds=_documentBounds;
@property(nonatomic) id <_UIWebViewportHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (float)minimumScaleForViewSize:(struct CGSize)arg1;
- (float)integralScaleForScale:(float)arg1 keepingPointFixed:(struct CGPoint *)arg2;
- (float)integralInitialScale;
- (float)viewportHeight;
- (float)viewportWidth;
- (void)resetViewportConfiguration:(struct _UIWebViewportConfiguration *)arg1;
- (void)overrideViewportConfiguration:(struct _UIWebViewportConfiguration *)arg1;
- (void)clearWebKitViewportConfigurationFlags;
- (void)applyWebKitViewportArgumentsSize:(struct CGSize)arg1 initialScale:(float)arg2 minimumScale:(float)arg3 maximumScale:(float)arg4 allowsUserScaling:(float)arg5;
- (void)setAvailableViewSize:(struct CGSize)arg1;
- (void)setDocumentBounds:(struct CGRect)arg1;
- (void)update:(id)arg1;
@property(readonly, nonatomic) struct _UIWebViewportConfiguration rawViewConfiguration;
@property(readonly, nonatomic) BOOL allowsUserScaling;
@property(readonly, nonatomic) float maximumScale;
@property(readonly, nonatomic) float minimumScale;
@property(readonly, nonatomic) float initialScale;
- (id)init;

@end

