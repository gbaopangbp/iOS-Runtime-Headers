/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@class NSDate, NSString, UIImage, UIImageView, UILabel;

@interface HKMedicalIDPersonSummaryCell : UITableViewCell {
    NSDate *_birthdate;
    UILabel *_birthdateLabel;
    NSString *_name;
    UILabel *_nameLabel;
    UIImage *_picture;
    UIImageView *_pictureView;
}

@property(retain) NSDate * birthdate;
@property(retain) NSString * name;
@property(retain) UIImage * picture;

- (void).cxx_destruct;
- (double)_scaledValueForSmallWidth:(double)arg1 bigWidth:(double)arg2;
- (bool)_viewIsGinormous;
- (id)birthdate;
- (double)calculatedHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)name;
- (id)picture;
- (void)setBirthdate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPicture:(id)arg1;
- (void)updateSubviewsFromData;

@end
