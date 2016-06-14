/* Generated by RuntimeBrowser.
 */

@protocol VKPuckAnimatorDelegate <NSObject>

@required

- (void)puckAnimator:(VKPuckAnimator *)arg1 runAnimation:(VKAnimation *)arg2;
- (void)puckAnimator:(VKPuckAnimator *)arg1 updatedPosition:(const struct Mercator3<double> { double x1[3]; }*)arg2 course:(double)arg3;
- (void)puckAnimator:(VKPuckAnimator *)arg1 updatedTargetPosition:(struct Matrix<double, 3, 1> { double x1[3]; })arg2;
- (void)puckAnimatorDidStop:(VKPuckAnimator *)arg1;

@end