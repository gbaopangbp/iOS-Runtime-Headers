/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIActionsViewElement;

@interface SKUITrackViewElement : SKUIViewElement {
    BOOL _enabled;
    bool_selected;
}

@property(getter=isSelected,readonly) bool selected;
@property(readonly) SKUIActionsViewElement * swipeActions;

- (id)applyUpdatesWithElement:(id)arg1;
- (void)enumerateChildrenUsingBlock:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isEnabled;
- (bool)isSelected;
- (id)swipeActions;

@end
