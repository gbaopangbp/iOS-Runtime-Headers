/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

@class MSAudioProgressView, SUPlayerStatus, UIImageView, UIView;

@interface MSTableCell : SUTableCell {
    UIImageView *_backsideSnapshotView;
    UIView *_previewContainerView;
    MSAudioProgressView *_previewProgressView;
    SUPlayerStatus *_previewStatus;
}

@property(retain) SUPlayerStatus * previewStatus;

- (void)_destroyPreviewProgressView;
- (void)_flipFromPreviewProgressView;
- (void)_flipToPreviewProgressView;
- (void)dealloc;
- (id)previewStatus;
- (void)setPreviewStatus:(id)arg1 animated:(bool)arg2;
- (void)setPreviewStatus:(id)arg1;

@end
