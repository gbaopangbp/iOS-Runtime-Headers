/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, UIImageView, UINavigationBar, UIView, _UIBackdropView, _UINavigationControllerPalette;

@interface _UINavigationPaletteBackground : UIView <_UIBackdropViewGraphicsQualityChangeDelegate> {
    struct { 
        unsigned int barTranslucence : 3; 
        unsigned int barStyle : 3; 
        unsigned int paletteWantsAdaptiveBackdrop : 1; 
    _UIBackdropView *_adaptiveBackdrop;
    UINavigationBar *_bar;
    UIColor *_barTintColor;
    } _navbarFlags;
    _UINavigationControllerPalette *_palette;
    UIImageView *_shadowView;
}

@property long long barStyle;
@property(retain) UIColor * barTintColor;
@property bool paletteWantsAdaptiveBackdrop;
@property(getter=_shadowView,setter=_setShadowView:,retain) UIView * shadowView;
@property(getter=isTranslucent) bool translucent;

- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forceUpdateBackgroundImage:(bool)arg2;
- (void)_setShadowView:(id)arg1;
- (id)_shadowView;
- (void)_syncWithBarStyles;
- (void)backdropView:(id)arg1 didChangeToGraphicsQuality:(long long)arg2;
- (id)backdropView:(id)arg1 willChangeToGraphicsQuality:(long long)arg2;
- (long long)barStyle;
- (id)barTintColor;
- (void)dealloc;
- (void)didMoveToSuperview;
- (id)initWithNavigationBar:(id)arg1 forPalette:(id)arg2;
- (bool)isTranslucent;
- (bool)paletteWantsAdaptiveBackdrop;
- (void)setBarStyle:(long long)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPaletteWantsAdaptiveBackdrop:(bool)arg1;
- (void)setTranslucent:(bool)arg1;
- (void)updateBackgroundView;

@end
