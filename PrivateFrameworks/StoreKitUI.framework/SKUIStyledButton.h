/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIItemOfferButtonDelegate>, NSString, SKUIAttributedStringLayout, SKUIAttributedStringView, SKUIItemOfferButton, UIImageView;

@interface SKUIStyledButton : UIControl <SKUIViewElementOfferButton> {
    SKUIAttributedStringView *_attributedStringView;
    long long _buttonType;
    UIImageView *_disclosureImageView;
    SKUIItemOfferButton *_itemOfferButton;
    <SKUIItemOfferButtonDelegate> *_itemOfferDelegate;
    bool_didInitialHighlightForTouch;
    bool_usesTintColor;
}

@property(readonly) double baselineOffset;
@property long long buttonType;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) double firstBaselineOffset;
@property(readonly) unsigned long long hash;
@property <SKUIItemOfferButtonDelegate> * itemOfferDelegate;
@property(readonly) Class superclass;
@property(retain) SKUIAttributedStringLayout * titleLayout;
@property bool usesTintColor;
@property(getter=isUsingItemOfferAppearance,readonly) bool usingItemOfferAppearance;

+ (struct CGSize { double x1; double x2; })sizeForTextSize:(struct CGSize { double x1; double x2; })arg1 buttonType:(long long)arg2;
+ (bool)usesItemOfferAppearanceForButtonType:(long long)arg1 itemState:(id)arg2;

- (void).cxx_destruct;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)_itemOfferButtonAction:(id)arg1;
- (void)_reloadDisclosureImage;
- (void)_reloadOverrideTextColor;
- (void)_showConfirmationAction:(id)arg1;
- (id)_textColor;
- (bool)_usesTintColor;
- (double)baselineOffset;
- (long long)buttonType;
- (void)dealloc;
- (double)firstBaselineOffset;
- (bool)isUsingItemOfferAppearance;
- (id)itemOfferDelegate;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setButtonType:(long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setItemOfferDelegate:(id)arg1;
- (void)setTitleLayout:(id)arg1;
- (void)setUsesTintColor:(bool)arg1;
- (bool)setValuesUsingViewElement:(id)arg1 itemState:(id)arg2 clientContext:(id)arg3 animated:(bool)arg4;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (id)titleLayout;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (bool)usesTintColor;

@end
