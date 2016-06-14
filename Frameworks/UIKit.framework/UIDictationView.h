/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDictationView : UIView <SUICFlamesViewDelegate> {
    bool  _automaticAppearanceWasEnabled;
    UIKeyboardDicationBackground * _background;
    UIButton * _endpointButton;
    UIButton * _endpointButtonLandscape;
    SUICFlamesView * _flamesView;
    bool  _keyboardInTransition;
    UIDictationMeterView * _meterView;
    int  _state;
    UIButton * _waveTapEndpointButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)activeInstance;
+ (Class)dictationViewClass;
+ (struct CGSize { double x1; double x2; })layoutSize;
+ (id)sharedInstance;
+ (struct CGSize { double x1; double x2; })viewSize;

- (void)applicationEnteredBackground;
- (void)applicationWillResignActive;
- (float)audioLevelForFlamesView:(id)arg1;
- (struct CGPoint { double x1; double x2; })backgroundOffset;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (struct CGSize { double x1; double x2; })currentScreenSize;
- (void)dealloc;
- (bool)drawsOwnBackground;
- (id)endpointButton;
- (void)endpointButtonPressed;
- (void)finishReturnToKeyboard;
- (void)highlightEndpointButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isShowing;
- (void)keyboardDidShow:(id)arg1;
- (struct CGPoint { double x1; double x2; })positionForShow;
- (void)prepareForReturnToKeyboard;
- (void)returnToKeyboard;
- (void)setState:(int)arg1;
- (void)show;
- (bool)visible;

@end