/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKCellShortener>, UILabel;

@interface CalendarEventEditedByCell : EKUIConstrainedFontsTableViewCell {
    unsigned int _valuePlaceholder : 2;
    <EKCellShortener> *_shortener;
    UILabel *_titleLabel2;
    UILabel *_valueLabel2;
}

@property(retain,readonly) UILabel * detailTextLabel2;
@property <EKCellShortener> * shortener;
@property(retain,readonly) UILabel * textLabel2;

- (void).cxx_destruct;
- (void)_checkValueWidth;
- (void)_copyTextLabelAttributesFrom:(id)arg1 to:(id)arg2;
- (bool)detailText2IsPlaceholder;
- (bool)detailTextIsPlaceholder;
- (id)detailTextLabel2;
- (void)layoutSubviews;
- (void)setDetailText2IsPlaceholder:(bool)arg1;
- (void)setDetailTextIsPlaceholder:(bool)arg1;
- (void)setShortener:(id)arg1;
- (id)shortener;
- (id)textLabel2;

@end
