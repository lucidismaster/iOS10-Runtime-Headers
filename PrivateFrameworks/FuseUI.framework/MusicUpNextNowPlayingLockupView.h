/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicUpNextNowPlayingLockupView : MusicEntityHorizontalLockupView {
    <MusicUpNextNowPlayingLockupViewDelegate> * _dismissalDelegate;
    UIView * _itemContentViewContainerView;
    MusicPlaybackProgressScrubberController * _playbackProgressController;
    MusicMiniPlayerPlaybackProgressView * _playbackProgressView;
    MPAVController * _player;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic) <MusicUpNextNowPlayingLockupViewDelegate> *dismissalDelegate;
@property (nonatomic, retain) UIView *itemContentViewContainerView;
@property (nonatomic, retain) MPAVController *player;
@property (nonatomic, readonly) UITapGestureRecognizer *tapGestureRecognizer;

- (void).cxx_destruct;
- (void)_handleTap:(id)arg1;
- (id)dismissalDelegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)itemContentViewContainerView;
- (void)layoutSubviews;
- (id)player;
- (void)setDismissalDelegate:(id)arg1;
- (void)setItemContentViewContainerView:(id)arg1;
- (void)setPlayer:(id)arg1;
- (id)tapGestureRecognizer;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
