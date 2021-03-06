/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKLocationSeriesQuery : HKQuery {
    id /* block */  _dataHandler;
    HKLocationSeriesSample * _series;
}

@property (copy) id /* block */ dataHandler;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (Class)_queryServerDataObjectClass;

- (void).cxx_destruct;
- (void)_queue_cleanupAfterDeactivation;
- (void)_queue_configureQueryServerDataObject:(id)arg1;
- (id /* block */)_queue_errorHandler;
- (void)_queue_validate;
- (id /* block */)dataHandler;
- (void)deliverLocationSeriesDatum:(id)arg1 final:(BOOL)arg2 forQuery:(id)arg3;
- (id)initWithSeries:(id)arg1 dataHandler:(id /* block */)arg2;
- (void)setDataHandler:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (Class)hd_queryServerClass;

@end
