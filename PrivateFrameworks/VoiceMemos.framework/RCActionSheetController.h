/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSString, RCActionSheetAlertController, UIResponder, UIViewController;

@interface RCActionSheetController : NSObject <UIActionSheetDelegate> {
    UIViewController *_accessoryViewController;
    NSArray *_actionButtonTitles;
    id _actionHandlerBlock;
    RCActionSheetAlertController *_alertController;
    NSString *_alertMessage;
    NSString *_alertTitle;
    NSString *_cancelButtonTitle;
    UIViewController *_modalItemPresentationViewController;
    UIResponder *_originalFirstResponder;
    bool_autoDismissDisabled;
    bool_dismissWhenDismissIsEnabled;
    bool_enabled;
    bool_showing;
}

@property(readonly) UIViewController * accessoryViewController;
@property(copy,readonly) id actionHandlerBlock;
@property bool autoDismissDisabled;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property bool enabled;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invokeActionHandlerWithActionIndex:(long long)arg1;
- (void)_willDismiss;
- (id)accessoryViewController;
- (id)actionHandlerBlock;
- (bool)autoDismissDisabled;
- (void)cancel;
- (void)dealloc;
- (void)dismissWithActionIndex:(long long)arg1 invokeActionHandler:(bool)arg2;
- (void)dismissWithActionIndex:(long long)arg1;
- (bool)enabled;
- (id)initWithTitle:(id)arg1 cancelTitle:(id)arg2 actionTitles:(id)arg3 accessoryViewController:(id)arg4;
- (void)setAutoDismissDisabled:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)showInView:(id)arg1 actionHandlerBlock:(id)arg2;
- (void)showInViewController:(id)arg1 actionHandlerBlock:(id)arg2;

@end
