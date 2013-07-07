/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "MKMapViewDelegate.h"

@class MKMapView;

@interface CKMapViewController : UIViewController <MKMapViewDelegate>
{
    id <MKAnnotation> _annotation;
    MKMapView *_mapView;
}

@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) id <MKAnnotation> annotation; // @synthesize annotation=_annotation;
- (void)selectPin;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)initWithAnnotation:(id)arg1;
- (BOOL)wantsFullScreenLayout;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;

@end

