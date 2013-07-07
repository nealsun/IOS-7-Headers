/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSMutableArray, NSString, NSTimer;

@interface City : NSObject
{
    id <CityUpdaterDelegate> _delegate;
    NSString *_updateTimeString;
    NSMutableArray *_dayForecasts;
    NSMutableArray *_hourlyForecasts;
    BOOL _autoUpdate;
    BOOL _isLocalWeatherCity;
    BOOL _isHourlyDataCelsius;
    BOOL _dataCelsius;
    BOOL _isUpdating;
    BOOL _isRequestedByFrameworkClient;
    BOOL _lockedForDemoMode;
    NSString *_temperature;
    NSDate *_updateTime;
    unsigned int _conditionCode;
    NSString *_woeid;
    NSString *_name;
    NSString *_locationID;
    NSString *_state;
    unsigned int _observationTime;
    unsigned int _sunsetTime;
    unsigned int _sunriseTime;
    unsigned int _moonPhase;
    NSString *_link;
    float _longitude;
    float _latitude;
    int _secondsFromGMT;
    unsigned int _lastUpdateDetail;
    float _windChill;
    float _windDirection;
    float _windSpeed;
    float _humidity;
    float _visibility;
    float _pressure;
    int _pressureRising;
    float _dewPoint;
    float _feelsLike;
    float _heatIndex;
    int _lastUpdateStatus;
    int _updateInterval;
    NSTimer *_autoUpdateTimer;
}

+ (id)descriptionForWeatherUpdateDetail:(unsigned int)arg1;
@property(retain, nonatomic) NSTimer *autoUpdateTimer; // @synthesize autoUpdateTimer=_autoUpdateTimer;
@property(nonatomic) int updateInterval; // @synthesize updateInterval=_updateInterval;
@property(nonatomic) BOOL lockedForDemoMode; // @synthesize lockedForDemoMode=_lockedForDemoMode;
@property(nonatomic) BOOL isRequestedByFrameworkClient; // @synthesize isRequestedByFrameworkClient=_isRequestedByFrameworkClient;
@property(nonatomic) BOOL isUpdating; // @synthesize isUpdating=_isUpdating;
@property(nonatomic) int lastUpdateStatus; // @synthesize lastUpdateStatus=_lastUpdateStatus;
@property(nonatomic) float heatIndex; // @synthesize heatIndex=_heatIndex;
@property(nonatomic) float feelsLike; // @synthesize feelsLike=_feelsLike;
@property(nonatomic) float dewPoint; // @synthesize dewPoint=_dewPoint;
@property(nonatomic) int pressureRising; // @synthesize pressureRising=_pressureRising;
@property(nonatomic) float pressure; // @synthesize pressure=_pressure;
@property(nonatomic) float visibility; // @synthesize visibility=_visibility;
@property(nonatomic) float humidity; // @synthesize humidity=_humidity;
@property(nonatomic) float windSpeed; // @synthesize windSpeed=_windSpeed;
@property(nonatomic) float windDirection; // @synthesize windDirection=_windDirection;
@property(nonatomic) float windChill; // @synthesize windChill=_windChill;
@property(nonatomic, getter=isDataCelsius) BOOL dataCelsius; // @synthesize dataCelsius=_dataCelsius;
@property(nonatomic) unsigned int lastUpdateDetail; // @synthesize lastUpdateDetail=_lastUpdateDetail;
@property(nonatomic) BOOL isHourlyDataCelsius; // @synthesize isHourlyDataCelsius=_isHourlyDataCelsius;
@property(nonatomic) int secondsFromGMT; // @synthesize secondsFromGMT=_secondsFromGMT;
@property(nonatomic) float latitude; // @synthesize latitude=_latitude;
@property(nonatomic) float longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(nonatomic) unsigned int moonPhase; // @synthesize moonPhase=_moonPhase;
@property(nonatomic) unsigned int sunriseTime; // @synthesize sunriseTime=_sunriseTime;
@property(nonatomic) unsigned int sunsetTime; // @synthesize sunsetTime=_sunsetTime;
@property(nonatomic) unsigned int observationTime; // @synthesize observationTime=_observationTime;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *locationID; // @synthesize locationID=_locationID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *woeid; // @synthesize woeid=_woeid;
@property(nonatomic) BOOL isLocalWeatherCity; // @synthesize isLocalWeatherCity=_isLocalWeatherCity;
@property(nonatomic) id <CityUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDate *updateTime; // @synthesize updateTime=_updateTime;
- (void)_generateLocalizableStrings;
- (int)precipitationForecast;
- (id)naturalLanguageDescription;
- (int)locationOfTime:(int)arg1;
- (int)primaryConditionForRange:(struct _NSRange)arg1;
- (id)windDirectionAsString:(float)arg1;
- (BOOL)populateWithDataFromCity:(id)arg1;
@property(nonatomic) unsigned int conditionCode; // @synthesize conditionCode=_conditionCode;
- (id)cityAndState;
- (id)updateTimeString;
- (BOOL)isUpdatingOrNoData;
- (BOOL)_isUpdating;
- (void)finishedUpdating:(int)arg1 statusDetail:(unsigned int)arg2;
- (void)addHourlyForecast:(id)arg1;
- (id)hourlyForecasts;
- (void)setHourlyForecasts:(id)arg1;
- (void)addDayForecast:(id)arg1;
- (void)clearForecasts;
- (void)update;
- (void)localWeatherDidBeginUpdate;
- (int)weatherDataAge;
- (BOOL)isDay;
- (int)timeDigit;
- (id)dayForecasts;
- (void)setDayForecasts:(id)arg1;
@property(copy, nonatomic) NSString *temperature; // @synthesize temperature=_temperature;
- (id)displayName;
- (void)setAutoUpdate:(BOOL)arg1;
- (void)_clearAutoUpdateTimer;
- (void)disassociateWithDelegate:(id)arg1;
- (void)associateWithDelegate:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

