/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class WebResourcePrivate;

@interface WebResource : NSObject <NSCoding, NSCopying>
{
    WebResourcePrivate *_private;
}

- (id)description;
- (id)frameName;
- (id)textEncodingName;
- (id)MIMEType;
- (id)URL;
- (id)data;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5;
- (id)init;
- (struct ArchiveResource *)_coreResource;
- (id)_initWithCoreResource:(PassRefPtr_43de0ce5)arg1;
- (id)_stringValue;
- (id)_response;
- (id)_suggestedFilename;
- (id)_initWithData:(id)arg1 URL:(id)arg2 response:(id)arg3;
- (id)_initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5 response:(id)arg6 copyData:(BOOL)arg7;
- (void)_ignoreWhenUnarchiving;

@end

