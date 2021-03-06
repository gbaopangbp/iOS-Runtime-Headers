/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@class UIView;

@interface SiriUIReviewsHeaderView : SiriUIReusableSubtitledHeaderView {
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    UIView *_providerView;
    } _providerViewOffset;
    UIView *_ratingView;
    } _ratingViewOffset;
    double _verticalSpaceNeededForRatingsView;
}

@property(retain) UIView * providerView;
@property struct UIOffset { double x1; double x2; } providerViewOffset;
@property(retain) UIView * ratingView;
@property struct UIOffset { double x1; double x2; } ratingViewOffset;
@property double verticalSpaceNeededForRatingsView;

- (void).cxx_destruct;
- (double)desiredHeightForWidth:(double)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)providerView;
- (struct UIOffset { double x1; double x2; })providerViewOffset;
- (id)ratingView;
- (struct UIOffset { double x1; double x2; })ratingViewOffset;
- (void)setProviderView:(id)arg1;
- (void)setProviderViewOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setRatingView:(id)arg1;
- (void)setRatingViewOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setVerticalSpaceNeededForRatingsView:(double)arg1;
- (double)verticalSpaceNeededForRatingsView;

@end
