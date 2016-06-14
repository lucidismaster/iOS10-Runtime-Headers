/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATDispatchTimer : NSObject {
    NSDate * _fireDate;
    double  _timeInterval;
    double  _tolerance;
    id  _userInfo;
    unsigned long long  mCallingOutSelector;
    NSObject<OS_dispatch_queue> * mDelegateQueue;
    NSObject<OS_dispatch_queue> * mQueue;
    SEL  mSelector;
    id  mTarget;
    NSObject<OS_dispatch_source> * mTimerSource;
}

@property (retain) NSDate *fireDate;
@property double timeInterval;
@property double tolerance;
@property (nonatomic, readonly) id userInfo;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)new;

- (void).cxx_destruct;
- (void)dealloc;
- (void)fire;
- (id)fireDate;
- (id)init;
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(bool)arg6 queue:(id)arg7;
- (void)invalidate;
- (bool)isValid;
- (void)performFire;
- (void)setFireDate:(id)arg1;
- (void)setTimeInterval:(double)arg1;
- (void)setTolerance:(double)arg1;
- (double)timeInterval;
- (double)tolerance;
- (void)updateTimerFireDate:(id)arg1;
- (id)userInfo;

@end