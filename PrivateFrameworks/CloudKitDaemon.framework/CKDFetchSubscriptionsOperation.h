/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray;

@interface CKDFetchSubscriptionsOperation : CKDDatabaseOperation {
    id _subscriptionFetchedProgressBlock;
    NSArray *_subscriptionIDs;
    NSArray *_subscriptions;
    bool_isFetchAllSubscriptionsOperation;
}

@property bool isFetchAllSubscriptionsOperation;
@property(copy) id subscriptionFetchedProgressBlock;
@property(retain) NSArray * subscriptionIDs;
@property(retain) NSArray * subscriptions;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleSubscriptionFetched:(id)arg1 withID:(id)arg2 responseCode:(id)arg3;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (bool)isFetchAllSubscriptionsOperation;
- (void)main;
- (void)setIsFetchAllSubscriptionsOperation:(bool)arg1;
- (void)setSubscriptionFetchedProgressBlock:(id)arg1;
- (void)setSubscriptionIDs:(id)arg1;
- (void)setSubscriptions:(id)arg1;
- (id)subscriptionFetchedProgressBlock;
- (id)subscriptionIDs;
- (id)subscriptions;

@end
