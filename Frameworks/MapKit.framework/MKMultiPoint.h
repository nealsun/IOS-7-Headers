/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MapKit/MKShape.h>

@interface MKMultiPoint : MKShape
{
    CDStruct_c3b9c2ee *_points;
    unsigned int _pointCount;
    CDStruct_02837cd9 _boundingRect;
}

@property(readonly, nonatomic) unsigned int pointCount; // @synthesize pointCount=_pointCount;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *points; // @synthesize points=_points;
- (BOOL)intersectsMapRect:(CDStruct_90e2a262)arg1;
- (CDStruct_c3b9c2ee)coordinate;
- (void)getCoordinates:(CDStruct_c3b9c2ee *)arg1 range:(struct _NSRange)arg2;
- (void)_assignPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned int)arg2;
- (void)_setPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned int)arg2;
- (void)_setCoordinates:(CDStruct_c3b9c2ee *)arg1 count:(unsigned int)arg2;
- (void)_calculateBounds;
- (void)_setBounds:(CDStruct_90e2a262)arg1;
- (CDStruct_90e2a262)boundingMapRect;
- (void)dealloc;

@end

