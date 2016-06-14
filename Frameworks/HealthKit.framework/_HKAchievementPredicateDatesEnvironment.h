/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKAchievementPredicateDatesEnvironment : _HKBaseAchievementPredicateEnvironment {
    NSCalendar * _calendar;
    double  _currentTimeZoneOffset;
    long long  _dayOfMonthToday;
    long long  _dayOfWeekToday;
    NSDate * _endOfCurrentFitnessWeek;
    NSDate * _endOfToday;
    long long  _firstDayOfFitnessWeek;
    NSDate * _firstWristOnDateToday;
    NSDate * _now;
    long long  _numberOfDaysInCurrentMonth;
    NSDate * _startOfCurrentFitnessWeek;
    NSDate * _startOfToday;
    NSDate * _startOfYesterday;
}

@property (nonatomic, readonly) double currentTimeZoneOffset;
@property (nonatomic, readonly) long long dayOfMonthToday;
@property (nonatomic, readonly) long long dayOfWeekToday;
@property (nonatomic, readonly) NSDate *endOfCurrentFitnessWeek;
@property (nonatomic, readonly) NSDate *endOfToday;
@property (nonatomic, readonly) long long firstDayOfFitnessWeek;
@property (nonatomic, readonly) NSDate *firstWristOnDateToday;
@property (nonatomic, readonly) long long lastDayOfFitnessWeek;
@property (nonatomic, readonly) NSDate *now;
@property (nonatomic, readonly) long long numberOfDaysInCurrentMonth;
@property (nonatomic, readonly) NSDate *startOfCurrentFitnessWeek;
@property (nonatomic, readonly) NSDate *startOfToday;
@property (nonatomic, readonly) NSDate *startOfYesterday;

- (void).cxx_destruct;
- (void)_clearDateCaches;
- (double)currentTimeZoneOffset;
- (long long)dayOfMonthToday;
- (long long)dayOfWeekToday;
- (id)endOfCurrentFitnessWeek;
- (id)endOfToday;
- (long long)firstDayOfFitnessWeek;
- (id)firstWristOnDateToday;
- (id)init;
- (long long)lastDayOfFitnessWeek;
- (id)now;
- (long long)numberOfDaysInCurrentMonth;
- (void)setCalendar:(id)arg1;
- (void)setCurrentDate:(id)arg1;
- (id)startOfCurrentFitnessWeek;
- (id)startOfToday;
- (id)startOfYesterday;

@end