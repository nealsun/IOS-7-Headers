/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

#import "GEOResourceManifestTileGroupObserver.h"
#import "MKAnnotationContainerViewDelegate.h"
#import "MKAnnotationManagerDelegate.h"
#import "MKAnnotationMarkerContainer.h"
#import "MKMapGestureControllerDelegate.h"
#import "MKOverlayContainerViewDelegate.h"
#import "MKVariableDelayTapRecognizerDelegate.h"
#import "NSCoding.h"
#import "UIGestureRecognizerDelegate.h"
#import "VKMapViewDelegate.h"
#import "VKPuckAnimatorDelegate.h"

@class CLLocation, MKAnnotationContainerView, MKAnnotationView, MKAttributionLabel, MKBasicMapView, MKCompassView, MKMapAnnotationManager, MKMapCamera, MKMapGestureController, MKMapViewInternal, MKOverlayContainerView, MKScaleView, MKUserLocation, MKVariableDelayTapRecognizer, NSArray, NSTimer, UIGestureRecognizer, UIImageView, UILabel, UILongPressGestureRecognizer, UITapGestureRecognizer, VKMapView, VKPuckAnimator;

@interface MKMapView : UIView <VKPuckAnimatorDelegate, MKOverlayContainerViewDelegate, UIGestureRecognizerDelegate, MKVariableDelayTapRecognizerDelegate, MKAnnotationContainerViewDelegate, VKMapViewDelegate, MKMapGestureControllerDelegate, MKAnnotationMarkerContainer, MKAnnotationManagerDelegate, GEOResourceManifestTileGroupObserver, NSCoding>
{
    MKMapViewInternal *_internal;
    UIView *_contentView;
    MKMapAnnotationManager *_annotationManager;
    MKAnnotationContainerView *_annotationContainer;
    MKAttributionLabel *_attributionLabel;
    id _annotationRectTest;
    id _annotationCoordinateTest;
    UIImageView *_attributionBadgeView;
    NSTimer *_startEffectsTimer;
    id <MKMapViewDelegate><MKMapViewDelegatePrivate> _delegate;
    int _animationType;
    unsigned int _suspendedEffectsCount;
    unsigned int _eventMode;
    unsigned int _eventModeHistory;
    unsigned int _mapType;
    struct CGRect _centeringRect;
    NSTimer *_defaultLocationTimer;
    UILabel *_debugView;
    NSTimer *_debugTimer;
    double _heading;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UITapGestureRecognizer *_immediateTapGesture;
    MKVariableDelayTapRecognizer *_doubleTapGestureRecognizer;
    UITapGestureRecognizer *_twoFingerTapGestureRecognizer;
    UIGestureRecognizer *_locationConsoleGesture;
    MKMapGestureController *_gestureController;
    MKOverlayContainerView *_overlayContainer;
    int _rotationState;
    float _angularVelocity;
    int _userTrackingMode;
    MKBasicMapView *_basicMapView;
    VKMapView *_mapView;
    MKScaleView *_scaleView;
    MKCompassView *_compassView;
    BOOL _scaleVisible;
    BOOL _compassVisible;
    BOOL _suppressCompassDisplay;
    BOOL _scaleEnabled;
    BOOL _compassEnabled;
    UIView *_scrollContainerView;
    id _regionSetterWhenSized;
    MKUserLocation *_userLocation;
    VKPuckAnimator *_userLocationAnimator;
    MKMapCamera *_camera;
    id _showCalloutAfterRegionChangeBlock;
    id _showCalloutAfterPanBlock;
    struct {
        unsigned int callsDelegateForAllRegionChanges:1;
        unsigned int changingRegion:1;
        unsigned int debugViewHeading:1;
        unsigned int didStartDragging:1;
        unsigned int draggingInterrupted:1;
        unsigned int didStartSmoothScrolling:1;
        unsigned int hasRenderedSomething:1;
        unsigned int ignoreHeadingUpdates:1;
        unsigned int ignoreLocationUpdates:1;
        unsigned int isSuspended:1;
        unsigned int liveTrackingAutoSelectZoomLevel:1;
        unsigned int longPressing:1;
        unsigned int persistFixedUserLocation:1;
        unsigned int regionChangeIsAnimated:1;
        unsigned int regionChangeIsUserInitiated:1;
        unsigned int rotationSupported:1;
        unsigned int scrollEnabled:1;
        unsigned int scrolling:1;
        unsigned int scrollIsAnimated:1;
        unsigned int shouldRotateForHeading:1;
        unsigned int showsUserLocation:1;
        unsigned int zoomEnabled:1;
        unsigned int zoomIsAnimated:1;
        unsigned int zooming:1;
        unsigned int wasZooming:1;
        unsigned int isChangingViewSize:1;
        unsigned int shouldSetRegionOnSizeChange:1;
        unsigned int showsAttribution:1;
        unsigned int showsAttributionBadge:1;
        unsigned int locationUpdatesPausedForRegionChange:1;
        unsigned int useOld2DAnnotationContainer:1;
        unsigned int rotating:1;
        unsigned int rotateEnabled:1;
        unsigned int pitchEnabled:1;
        unsigned int delegateShouldReceiveTouch:1;
        unsigned int delegateShouldDelayTapResponse:1;
        unsigned int delegateWillChangeRotation:1;
        unsigned int delegateDidUpdateUserLocation:1;
        unsigned int delegateDidFailToLocateUser:1;
        unsigned int delegateWillChangeRegion:1;
        unsigned int delegateDidChangeRegion:1;
        unsigned int delegateDidStartMapRendering:1;
        unsigned int delegateDidFinishMapRendering:1;
        unsigned int delegateDidChangeUserTrackingMode:1;
        unsigned int delegateDidChangeUserTrackingModeButton:1;
        unsigned int delegateDidChangeMapType:1;
    } _flags;
}

+ (CDStruct_90e2a262)_mapRectThatFitsViewBounds:(struct CGRect)arg1 centeringRect:(struct CGRect)arg2 mapRect:(CDStruct_90e2a262)arg3 edgePadding:(struct UIEdgeInsets)arg4 minZoomLevel:(float)arg5 maxZoomLevel:(float)arg6;
+ (void)setRendersInBackgroundByDefault:(BOOL)arg1;
+ (CDStruct_90e2a262)_regionThatFitsMapType:(unsigned int)arg1 viewSize:(struct CGSize)arg2 region:(CDStruct_90e2a262)arg3 minZoomLevel:(float)arg4 maxZoomLevel:(float)arg5;
+ (CDStruct_90e2a262)regionThatFitsMapType:(unsigned int)arg1 viewSize:(struct CGSize)arg2 region:(CDStruct_90e2a262)arg3;
+ (unsigned int)minZoomLevelForMapType:(unsigned int)arg1 viewSize:(struct CGSize)arg2;
- (void)setCamera:(id)arg1 animated:(BOOL)arg2;
@property(copy, nonatomic) MKMapCamera *camera;
- (void)annotationManager:(id)arg1 didDeselectAnnotationRepresentation:(id)arg2;
- (void)annotationManager:(id)arg1 didSelectAnnotationRepresentation:(id)arg2;
- (id)annotationManager:(id)arg1 representationForAnnotation:(id)arg2;
- (void)annotationManager:(id)arg1 didAddAnnotationRepresentations:(id)arg2;
- (BOOL)shouldHideOffscreenSelectedAnnotation;
- (id)annotationCoordinateTest;
- (id)annotationRectTest;
- (CDStruct_90e2a262)_mapRectWithFraction:(double)arg1 ofVisible:(CDStruct_90e2a262)arg2;
- (void)setAnnotationDeselectionCallback:(id)arg1;
- (void)moveAnnotationRepresentation:(id)arg1 fromCoordinate:(CDStruct_c3b9c2ee)arg2 animated:(BOOL)arg3 duration:(double)arg4;
- (void)deselectAnnotationRepresentation:(id)arg1 animated:(BOOL)arg2;
- (void)showCalloutIfNecessaryForAnnotationRepresentation:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect)arg3;
- (void)selectAnnotationRepresentation:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect)arg3;
- (void)removeAnnotationRepresentation:(id)arg1;
- (void)addAnnotationRepresentation:(id)arg1 allowAnimation:(BOOL)arg2;
- (void)setVisibleMapRect:(CDStruct_90e2a262)arg1 animated:(BOOL)arg2;
@property(nonatomic) CDStruct_90e2a262 visibleMapRect;
- (CDStruct_90e2a262)_visibleUnderRotationMapRect;
- (void)setVisibleMapRect:(CDStruct_90e2a262)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(BOOL)arg3;
- (CDStruct_90e2a262)mapRectThatFits:(CDStruct_90e2a262)arg1;
- (CDStruct_90e2a262)mapRectThatFits:(CDStruct_90e2a262)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (CDStruct_0c7fa811)_zoomRegionForMapRect:(CDStruct_90e2a262)arg1 edgePadding:(struct UIEdgeInsets)arg2 maxZoomLevel:(int)arg3 minZoomLevel:(int)arg4;
- (void)drawRect:(struct CGRect)arg1 forViewPrintFormatter:(id)arg2;
- (void)setHidden:(BOOL)arg1;
- (void)layoutSubviews;
- (id)viewForAnnotation:(id)arg1;
- (id)dequeueReusableAnnotationViewWithIdentifier:(id)arg1;
- (void)removeAnnotations:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (void)addAnnotations:(id)arg1;
- (void)addAnnotation:(id)arg1;
- (void)_addAnnotation:(id)arg1 allowAnimation:(BOOL)arg2;
- (void)deselectAnnotation:(id)arg1 animated:(BOOL)arg2;
- (void)selectAnnotation:(id)arg1 animated:(BOOL)arg2;
- (struct CADoubleRect)_convertMapRect:(CDStruct_90e2a262)arg1 toDoubleRectToView:(id)arg2;
- (CDStruct_90e2a262)_convertDoubleRect:(struct CADoubleRect)arg1 toMapRectFromView:(id)arg2;
- (struct CADoublePoint)_convertMapPoint:(CDStruct_c3b9c2ee)arg1 toDoublePointToView:(id)arg2;
- (CDStruct_90e2a262)convertRect:(struct CGRect)arg1 toRegionFromView:(id)arg2;
- (struct CGRect)convertRegion:(CDStruct_90e2a262)arg1 toRectToView:(id)arg2;
- (CDStruct_c3b9c2ee)_convertDoublePoint:(struct CADoublePoint)arg1 toCoordinateFromView:(id)arg2;
- (CDStruct_c3b9c2ee)_convertDoublePoint:(struct CADoublePoint)arg1 toMapPointFromView:(id)arg2;
- (CDStruct_c3b9c2ee)convertPoint:(struct CGPoint)arg1 toCoordinateFromView:(id)arg2;
- (struct CADoublePoint)_convertCoordinate:(CDStruct_c3b9c2ee)arg1 toDoublePointToView:(id)arg2;
- (struct CGPoint)convertCoordinate:(CDStruct_c3b9c2ee)arg1 toPointToView:(id)arg2;
@property(copy, nonatomic) NSArray *selectedAnnotations;
- (id)annotationsInMapRect:(CDStruct_90e2a262)arg1;
@property(readonly, nonatomic) NSArray *annotations;
- (BOOL)goToRegion:(CDStruct_90e2a262)arg1 animationType:(int)arg2;
@property(nonatomic) CDStruct_90e2a262 region;
- (void)setRegion:(CDStruct_90e2a262)arg1 animated:(BOOL)arg2;
- (CDStruct_c3b9c2ee)_centerMapPoint;
@property(nonatomic) CDStruct_c3b9c2ee centerCoordinate;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 animated:(BOOL)arg2;
- (void)goToDefaultLocation;
- (void)_displayWorld;
- (void)annotationContainer:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)annotationContainerDidDropPins:(id)arg1;
- (void)annotationContainerWillDropPins:(id)arg1;
- (float)annotationContainer:(id)arg1 pinDropDistanceForCoordinate:(CDStruct_c3b9c2ee)arg2 maxDistance:(float *)arg3 startPoint:(struct CGPoint *)arg4 shadowStartPoint:(struct CGPoint *)arg5;
- (struct CGRect)annotationContainerVisibleRect:(id)arg1;
- (void)annotationContainerDidAnimateBubble:(id)arg1;
- (void)annotationContainerWillAnimateBubble:(id)arg1;
- (void)annotationContainer:(id)arg1 scrollToRevealCalloutWithOffset:(struct CGPoint)arg2 completionHandler:(id)arg3;
- (void)annotationContainerDidHideUserLocationView;
- (void)annotationContainerDidShowUserLocationView;
@property(readonly, nonatomic) struct CGRect annotationVisibleRect;
- (struct CGRect)visibleCenteringRectInView:(id)arg1;
- (struct CGRect)visibleRectInView:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)mapViewDidStopRegionAnimation:(id)arg1 completed:(BOOL)arg2;
- (void)mapViewWillStartRegionAnimation:(id)arg1;
- (void)mapViewDidDraw:(id)arg1;
- (void)mapViewDidChangeVisibleRegion:(id)arg1;
- (void)gestureControllerDidStopRotatingDecelerating:(id)arg1;
- (void)gestureControllerDidStopTiltingDecelerating:(id)arg1;
- (void)gestureControllerDidStopTilting:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)gestureControllerWillStartTilting:(id)arg1;
- (void)gestureControllerDidStopRotating:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)gestureControllerWillStartRotating:(id)arg1;
- (void)gestureControllerDidStopTwoFingerLongPress:(id)arg1;
- (void)gestureControllerWillStartTwoFingerLongPress:(id)arg1;
- (void)gestureControllerDidStopZoomingDecelerating:(id)arg1 direction:(int)arg2;
- (void)gestureControllerDidStopZooming:(id)arg1 direction:(int)arg2 willDecelerate:(BOOL)arg3;
- (void)gestureControllerWillStartZooming:(id)arg1 animated:(BOOL)arg2;
- (void)gestureControllerDidStopPanningDecelerating:(id)arg1;
- (void)gestureControllerDidStopPanning:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)gestureControllerWillStartPanning:(id)arg1;
- (void)gestureControllerDidStopUserInteraction:(id)arg1;
- (void)gestureControllerWillStartUserInteraction:(id)arg1;
- (id)mapView:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)mapViewDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2;
- (void)mapViewDidBecomePartiallyDrawn:(id)arg1;
- (void)mapViewDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapViewDidFinishLoadingTiles:(id)arg1;
- (void)mapViewDidStartLoadingTiles:(id)arg1;
- (id)compassVisibilityAnimation;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (BOOL)compassVisible;
- (void)_setCompassVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)snapToNorth:(id)arg1;
- (void)_updateCompassPosition;
- (void)_updateCompassVisibility;
- (id)compassView;
- (void)_updateScalePosition;
- (id)scaleVisibilityAnimation;
- (void)_setScaleVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_updateScaleVisibility;
- (id)scaleView;
- (void)updateTiling;
- (void)_sizeDidChangeWithCenterCoordinate:(CDStruct_c3b9c2ee)arg1;
- (void)_sizeWillChange;
- (void)_updateRotationAttributes;
- (void)_updateCenteredAttributesWithCoordinate:(CDStruct_c3b9c2ee)arg1;
- (void)_userScrollingEnded;
- (void)_selectUserLocationTypeWithDeltaZoomLevel:(float)arg1;
- (void)resumeUserLocationUpdates;
- (void)pauseUserLocationUpdates;
- (CDStruct_c3b9c2ee)_zoomCenterPointWithAnchor:(int)arg1 point:(struct CGPoint)arg2 zoomScale:(float)arg3;
- (double)_goToCenterCoordinate:(CDStruct_c3b9c2ee)arg1 zoomLevel:(float)arg2 animationType:(int)arg3 cancelDefaultLocationTimer:(BOOL)arg4;
- (float)_zoomScaleForMapRegion:(id)arg1;
- (CDStruct_c3b9c2ee)_centerMapPointForMapRegion:(id)arg1;
- (id)_mapRegionWithCenterCoordinate:(CDStruct_c3b9c2ee)arg1 zoomScale:(float)arg2;
- (double)_goToCenterCoordinate:(CDStruct_c3b9c2ee)arg1 zoomLevel:(float)arg2 animationType:(int)arg3;
- (BOOL)goToCenterCoordinate:(CDStruct_c3b9c2ee)arg1 longLatSpan:(struct CGSize)arg2 animationType:(int)arg3;
- (BOOL)goToCenterCoordinate:(CDStruct_c3b9c2ee)arg1 zoomLevel:(float)arg2 animationType:(int)arg3;
- (float)_zoomLevelForRegion:(CDStruct_90e2a262)arg1 includeAccessoryPadding:(BOOL)arg2;
- (float)_zoomLevelForMapRect:(CDStruct_90e2a262)arg1 includeAccessoryPadding:(BOOL)arg2;
- (double)_panDurationFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_updateContentBounds;
- (void)_insertSubview:(id)arg1;
- (int)_viewIndexForSubview:(id)arg1;
- (float)pointDistanceFromCoordinate:(CDStruct_c3b9c2ee)arg1 toCoordinate:(CDStruct_c3b9c2ee)arg2;
- (void)scrollWithOffset:(struct CGPoint)arg1 andAnimationType:(int)arg2;
- (void)_fixUserLocationFromPresentationValue;
- (void)_clearFixedUserLocation;
- (BOOL)_shouldConservePowerAnimationType:(int)arg1;
- (void)setCallsDelegateForAllRegionChanges:(BOOL)arg1;
- (BOOL)callsDelegateForAllRegionChanges;
- (id)_stringWithEventMode:(int)arg1;
- (void)_cancelAccessoriesAndDoubleTap;
- (void)_cancelDoubleTap;
- (void)_cancelAccessories;
- (void)_clearEventMode:(int)arg1;
- (void)startEffects;
- (void)stopEffects;
- (BOOL)annotationContainerShouldAlignToPixels:(id)arg1;
- (BOOL)annotationContainerIsRotated:(id)arg1;
- (void)_setZoomScale:(float)arg1 centerMapPoint:(CDStruct_c3b9c2ee)arg2 duration:(double)arg3 animationType:(int)arg4;
- (void)_addSetRegionBlockWhenSized:(id)arg1;
- (void)showAnnotations:(id)arg1 animated:(BOOL)arg2;
- (void)_goToMapRegion:(id)arg1 duration:(double)arg2 animationType:(int)arg3;
- (void)_setZoomScale:(float)arg1 centerCoordinate:(CDStruct_c3b9c2ee)arg2 duration:(double)arg3 animationType:(int)arg4;
- (void)_updateEffects;
- (void)_updateShouldDisplayEffects;
- (void)_updateScrollContainerView:(BOOL)arg1;
- (id)scrollContainerView;
- (void)_updateAccessories;
- (BOOL)_animationTypeIgnoresEvents:(int)arg1;
- (void)_updateScrollingAndGestures;
- (float)_boundedZoomLevel:(float)arg1 coordinate:(CDStruct_c3b9c2ee)arg2;
- (float)_boundedZoomLevel:(float)arg1;
- (float)_maxZoomLevelForCoordinate:(CDStruct_c3b9c2ee)arg1;
- (void)_annotationViewDragStateChanged:(id)arg1;
- (void)_didEndUserInteraction;
- (void)_willStartUserInteraction;
- (void)_didEndScroll;
- (void)_willStartScroll:(BOOL)arg1;
- (void)_didEndZoom;
- (void)_willStartZoom:(BOOL)arg1;
- (void)_didChangeRegionMidstream:(BOOL)arg1;
- (void)_willChangeRegionAnimated:(BOOL)arg1 userInitiated:(BOOL)arg2;
- (void)_updateIconsShouldAlignToPixels;
- (void)toggleLocationConsole:(id)arg1;
- (void)handleTap:(id)arg1;
- (BOOL)calloutViewIsExpanded;
- (BOOL)calloutViewContainsPoint:(struct CGPoint)arg1;
- (void)handleLongPress:(id)arg1;
- (void)_handleLongPressDidEnd;
- (void)_dropDraggingAnnotationView:(BOOL)arg1;
- (double)variableDelayTapRecognizer:(id)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(id)arg3;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_configureGestureRecognizers;
- (void)_addDebugGesture;
- (id)annotationContainer;
- (void)_setUserTrackingMode:(int)arg1 animated:(BOOL)arg2 fromTrackingButton:(BOOL)arg3;
- (void)setUserTrackingMode:(int)arg1 animated:(BOOL)arg2;
@property(nonatomic) int userTrackingMode;
- (BOOL)canRotateForHeading;
- (BOOL)hasUserLocation;
@property(readonly, nonatomic) MKUserLocation *userLocation;
- (BOOL)hasRenderedSomething;
@property(readonly, nonatomic, getter=isUserLocationVisible) BOOL userLocationVisible;
@property(nonatomic) BOOL showsUserLocation;
@property(nonatomic, getter=isPitchEnabled) BOOL pitchEnabled;
@property(nonatomic, getter=isRotateEnabled) BOOL rotateEnabled;
@property(nonatomic, getter=isZoomEnabled) BOOL zoomEnabled;
@property(nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
- (void)setCenteringRect:(struct CGRect)arg1;
- (struct CGRect)centeringRect;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (float)_zoomLevel;
- (void)set_zoomScale:(float)arg1;
- (float)_zoomScale;
- (void)set_rotationState:(int)arg1;
- (int)_rotationState;
- (id)debugView;
- (int)mapRegionZoomLevel;
- (id)mapRegion;
- (BOOL)_isHandlingUserEvent;
- (int)_roundedZoomLevel;
@property(readonly) float minZoomLevel;
- (struct CGPoint)centerLongLat;
- (struct CGPoint)_centerPointOffset;
- (struct CGPoint)_centerPoint;
- (void)_setScrolling:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setScrolling:(BOOL)arg1;
- (BOOL)_isScrollingAnimation;
- (BOOL)_isVisible;
- (BOOL)_wasScrolling;
- (BOOL)isGoingToDefaultLocation;
- (BOOL)isRegionChanging;
- (BOOL)isScrolling;
- (BOOL)isZooming;
- (void)_setEventMode:(int)arg1;
- (void)setShouldReloadSynchronously:(BOOL)arg1;
- (BOOL)shouldReloadSynchronously;
- (BOOL)isCompassEnabled;
- (void)setCompassEnabled:(BOOL)arg1;
- (BOOL)isScaleEnabled;
- (void)setScaleEnabled:(BOOL)arg1;
- (void)setLoadingEnabled:(BOOL)arg1;
- (BOOL)isLoadingEnabled;
- (BOOL)isSuspended;
- (void)setSuspended:(BOOL)arg1;
- (BOOL)effectsEnabled;
- (void)set_startEffectsTimer:(id)arg1;
- (id)_startEffectsTimer;
- (void)_setAnimationType:(int)arg1;
- (int)animationType;
- (void)_setMapType:(unsigned int)arg1 onInit:(BOOL)arg2;
@property(nonatomic) unsigned int mapType;
- (int)_interfaceOrientation;
- (void)_updateHeadingOrientation;
@property(nonatomic) id <MKMapViewDelegate> delegate;
- (void)set_defaultLocationTimer:(id)arg1;
- (id)_defaultLocationTimer;
- (Class)_calloutViewClass;
- (void)_setCalloutViewClass:(Class)arg1;
- (void)set_annotationViewsAreAddedImmediately:(BOOL)arg1;
- (BOOL)_annotationViewsAreAddedImmediately;
- (void)setRendersInBackground:(BOOL)arg1;
- (void)setShowsPOIIcons:(BOOL)arg1;
- (BOOL)showsPOIIcons;
- (BOOL)isShowingNoDataPlaceholders;
- (void)setShowsAttributionBadge:(BOOL)arg1;
- (BOOL)showsAttributionBadge;
- (void)setShowsAttribution:(BOOL)arg1;
- (BOOL)showsAttribution;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)geoDefaultsDidChange:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)_updatePitchAllowed;
- (id)mapAttributionWithStringAttributes:(id)arg1;
- (struct CGRect)attributionFrame;
- (void)_updateAttribution;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initFromIBWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)_commonInitAndEnableLoading:(BOOL)arg1 fromIB:(BOOL)arg2;
- (CDStruct_90e2a262)regionThatFits:(CDStruct_90e2a262)arg1;
- (void)stopUpdatingUserLocation;
- (void)startUpdatingUserLocation;
- (void)puckAnimator:(id)arg1 updatedTargetPosition:(CDStruct_31142d93)arg2;
- (void)puckAnimatorDidStop:(id)arg1;
- (void)puckAnimator:(id)arg1 updatedPosition:(CDStruct_31142d93)arg2 course:(double)arg3;
- (void)puckAnimator:(id)arg1 runAnimation:(id)arg2;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (BOOL)_deviceIsPluggedIn;
@property(readonly, nonatomic) MKAnnotationView *userLocationView;
- (void)_resumeUserLocationUpdates:(BOOL)arg1;
- (void)_pauseUserLocationUpdates;
@property(nonatomic) BOOL ignoreLocationUpdates;
- (BOOL)_haveNewPendingLocation;
- (void)removeUserLocation;
- (void)resetUserLocation;
- (struct CGPoint)userPosition;
@property(nonatomic) int userLocationSource;
@property(retain, nonatomic) CLLocation *predictedUserLocation;
- (BOOL)isTrackingUserLocation;
- (BOOL)isUserLocationViewCentered;
- (BOOL)_isUserLocationInView:(BOOL)arg1;
- (void)_ensureLiveTrackingResourcesInitialized;
- (void)_updateLocationConsole;
- (id)descriptionForLocation:(id)arg1 compact:(BOOL)arg2;
- (void)setLocationConsoleEnabled:(BOOL)arg1;
- (BOOL)isLocationConsoleEnabled;
- (struct CGRect)_debugViewFrame;
- (void)setLiveTrackingAutoSelectZoomLevel:(BOOL)arg1;
- (BOOL)liveTrackingAutoSelectZoomLevel;
- (void)disableLiveTracking;
- (void)locationManagerFailedToUpdateHeading:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedHeading:(id)arg1;
- (void)_considerMovingToThrottledHeading;
- (void)_updateHeading:(id)arg1 rotationType:(int)arg2 animated:(BOOL)arg3;
- (BOOL)_updateRotationSupported;
- (BOOL)_rotationPossible;
- (void)_stopTrackingHeading;
- (void)_startTrackingHeading;
- (void)enableMapRotationIfNeeded;
- (void)disableMapRotation:(BOOL)arg1;
- (void)disableHeadingTracking:(BOOL)arg1;
- (void)setHeadingTrackingEnabled:(BOOL)arg1;
- (BOOL)isHeadingTrackingEnabled;
- (void)resumeUserHeadingUpdates;
- (void)pauseUserHeadingUpdates;
- (void)setShouldRotateForHeading:(BOOL)arg1;
- (BOOL)shouldRotateForHeading;
- (struct CGRect)contentBounds;
- (void)_updateCameraState;
- (void)_updateFromCamera:(id)arg1;
- (void)_updateFromCamera:(id)arg1 duration:(double)arg2 timing:(id)arg3;
- (void)_setCamera:(id)arg1 duration:(double)arg2 timing:(id)arg3;
- (void)_setCamera:(id)arg1 duration:(double)arg2 timingCurve:(int)arg3;
- (void)_setCamera:(id)arg1 animated:(BOOL)arg2;
- (void)_setCamera:(id)arg1;
- (id)_camera;
- (id)vk_mapLayer;
- (void)overlayContainerAddedDrawables:(id)arg1;
- (id)createDrawableForOverlay:(id)arg1;
- (id)overlayContainer;
- (id)overlaysInLevel:(int)arg1;
@property(readonly, nonatomic) NSArray *overlays;
- (id)rendererForOverlay:(id)arg1;
- (id)viewForOverlay:(id)arg1;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)exchangeOverlay:(id)arg1 withOverlay:(id)arg2;
- (void)exchangeOverlayAtIndex:(unsigned int)arg1 withOverlayAtIndex:(unsigned int)arg2;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeOverlays:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned int)arg2 level:(int)arg3;
- (void)addOverlays:(id)arg1 level:(int)arg2;
- (void)addOverlay:(id)arg1 level:(int)arg2;
- (void)addOverlays:(id)arg1;
- (void)addOverlay:(id)arg1;

@end

