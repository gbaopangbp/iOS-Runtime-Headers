/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@class SBKTransactionController;

@interface SBKSimpleTransactionRequestHandler : SBKRequestHandler {
    SBKTransactionController *_transactionController;
    bool_canceled;
}

@property(readonly) bool canceled;
@property(readonly) SBKTransactionController * transactionController;

- (void).cxx_destruct;
- (void)cancel;
- (void)cancelWithError:(id)arg1;
- (bool)canceled;
- (id)initWithBagContext:(id)arg1;
- (void)scheduleTransaction:(id)arg1 finishedBlock:(id)arg2;
- (void)timeout;
- (id)transactionController;

@end
