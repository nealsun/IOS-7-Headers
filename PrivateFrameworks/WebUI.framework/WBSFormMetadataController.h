/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class WBSFormMetadataControllerPrivate;

@interface WBSFormMetadataController : NSObject
{
    WBSFormMetadataControllerPrivate *_private;
    BOOL _isAutoFillingForm;
}

@property(readonly, nonatomic) BOOL isAutoFillingForm; // @synthesize isAutoFillingForm=_isAutoFillingForm;
- (id)formAutoFillNodeForField:(id)arg1 form:(double)arg2 inFrame:(id)arg3;
- (id)formAutoFillNodeForJSWrapper:(struct OpaqueJSValue *)arg1 inContext:(struct OpaqueJSContext *)arg2;
- (void)creditCardFieldBlurredInFrame:(id)arg1;
- (void)creditCardFieldFocused:(id)arg1 inFrame:(id)arg2;
- (void)passwordFieldTextDidChange:(id)arg1 inFrame:(id)arg2;
- (void)passwordFieldBlurredInFrame:(id)arg1;
- (void)passwordFieldFocused:(id)arg1 inFrame:(id)arg2;
- (void)textFieldTextDidChange:(id)arg1 inFrame:(id)arg2;
- (void)textFieldBlurred:(id)arg1 inFrame:(id)arg2;
- (void)textFieldFocused:(id)arg1 inFrame:(id)arg2;
- (BOOL)pageWithMainFrameMeetsEditedFormTextWarningCriteria:(id)arg1;
- (void)recursivelyCountUserEditedTextControlsInFrame:(id)arg1 textFields:(unsigned int *)arg2 textAreas:(unsigned int *)arg3;
- (void)countUserEditedTextControlsInFrame:(id)arg1 textFields:(unsigned int *)arg2 textAreas:(unsigned int *)arg3;
- (unsigned int)userEditedTextControlCountInArray:(struct OpaqueJSValue *)arg1 context:(struct OpaqueJSContext *)arg2 expectTextFieldsRatherThanTextAreas:(BOOL)arg3;
- (void)getMetadataForTextField:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id *)arg3 formMetadata:(id *)arg4 canAutoComplete:(char *)arg5;
- (id)metadataForForm:(id)arg1 inFrame:(id)arg2 requestType:(unsigned int)arg3;
- (void)getMetadataForAllFormsInPageWithMainFrame:(id)arg1 requestType:(unsigned int)arg2 frames:(id *)arg3 formMetadata:(id *)arg4;
- (void)recursivelyCollectMetadataInFrame:(id)arg1 requestType:(unsigned int)arg2 frames:(id)arg3 formMetadata:(id)arg4;
- (struct FrameMetadata *)metadataForFrame:(id)arg1 requestType:(unsigned int)arg2;
- (void)recursivelyClearMetadataForFrames:(id)arg1;
- (void)clearMetadataForFrame:(id)arg1;
- (id)metadataForTextField:(id)arg1 form:(double)arg2 inFrame:(id)arg3 afterReplacingRange:(struct _NSRange)arg4 withString:(id)arg5 andSelectingTailStartingAt:(unsigned int)arg6;
- (void)selectRange:(struct _NSRange)arg1 inField:(id)arg2 form:(double)arg3 inFrame:(id)arg4;
- (void)removeAutoFillHighlightFromField:(id)arg1 form:(double)arg2 inFrame:(id)arg3;
- (void)focusField:(id)arg1 inForm:(double)arg2 inFrame:(id)arg3;
- (void)fillForm:(double)arg1 inFrame:(id)arg2 withPassword:(id)arg3;
- (void)autoFillForm:(double)arg1 inFrame:(id)arg2 withValues:(id)arg3;
- (void)clearScriptWorld;
- (void)dealloc;
- (id)init;

@end

