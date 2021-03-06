/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSError, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSObject<OS_dispatch_semaphore>, NSObject<OS_xpc_object>, NSString;

@interface NSFileAccessClaim : NSObject {
    unsigned long long _blockageCount;
    NSMutableSet *_blockingClaims;
    NSMutableSet *_blockingReactorIDs;
    NSString *_claimID;
    NSMutableArray *_claimerBlockageReasons;
    NSError *_claimerError;
    id _claimerOrNil;
    NSObject<OS_dispatch_semaphore> *_claimerWaiterOrNull;
    NSObject<OS_xpc_object> *_client;
    NSMutableArray *_devaluationProcedures;
    NSMutableArray *_finishingProcedures;
    NSMutableOrderedSet *_pendingClaims;
    NSMutableArray *_providerCancellationProcedures;
    NSString *_purposeIDOrNil;
    NSMutableDictionary *_reacquisitionProceduresByPresenterID;
    NSMutableArray *_revocationProcedures;
    NSMutableArray *_sandboxTokens;
    bool_cameFromSuperarbiter;
    bool_didWait;
    bool_isRevoked;
}

+ (bool)canReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 safelyOverlapWritingItemAtLocation:(id)arg3 options:(unsigned long long)arg4;
+ (bool)canWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 safelyOverlapWritingItemAtLocation:(id)arg3 options:(unsigned long long)arg4;
+ (bool)readingItemAtLocation:(id)arg1 withPurposeID:(id)arg2 requiresOnlyPhysicalItemWithOptions:(unsigned long long)arg3;
+ (bool)writingItemAtLocation:(id)arg1 withPurposeID:(id)arg2 requiresOnlyPhysicalItemWithOptions:(unsigned long long)arg3;

- (bool)_writeArchiveOfDirectoryAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (void)addPendingClaim:(id)arg1;
- (void)block;
- (void)blockClaimerForReason:(id)arg1;
- (bool)cameFromSuperarbiter;
- (bool)canAccessLocations:(id)arg1 forReading:(bool)arg2 error:(id*)arg3;
- (void)cancelled;
- (bool)checkIfSymbolicLinkAtURL:(id)arg1 withResolutionCount:(long long*)arg2 andIfSoThenReevaluateSelf:(id)arg3;
- (id)claimID;
- (id)claimerError;
- (bool)claimerInvokingIsBlockedByReactorWithID:(id)arg1;
- (id)client;
- (void)dealloc;
- (id)description;
- (id)descriptionWithIndenting:(id)arg1;
- (void)devalueOldClaim:(id)arg1;
- (void)devalueSelf;
- (bool)didWait;
- (void)evaluateNewClaim:(id)arg1;
- (bool)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(bool)arg2;
- (void)finalize;
- (void)finished;
- (void)forwardUsingMessageSender:(id)arg1 crashHandler:(id)arg2;
- (void)granted;
- (id)initWithClient:(id)arg1 claimID:(id)arg2 purposeID:(id)arg3;
- (id)initWithClient:(id)arg1 messageParameters:(id)arg2 replySender:(id)arg3;
- (void)invokeClaimer;
- (bool)isBlockedByClaimWithPurposeID:(id)arg1;
- (bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (bool)isGranted;
- (bool)isRevoked;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (void)makePresentersOfItemAtLocation:(id)arg1 orContainedItem:(bool)arg2 relinquishUsingProcedureGetter:(id)arg3;
- (void)makeProviderOfItemAtLocation:(id)arg1 providePhysicalURLThenContinue:(id)arg2;
- (void)makeProviderOfItemAtLocation:(id)arg1 provideThenContinue:(id)arg2;
- (id)newClaimerWaiter;
- (id)pendingClaims;
- (void)prepareItemForUploadingFromURL:(id)arg1 thenContinue:(id)arg2;
- (id)purposeID;
- (id)purposeIDOfClaimOnItemAtLocation:(id)arg1 forMessagingPresenter:(id)arg2;
- (void)removePendingClaims:(id)arg1;
- (void)revoked;
- (void)setCameFromSuperarbiter;
- (void)setClaimerError:(id)arg1;
- (bool)shouldBeRevokedPriorToInvokingAccessor;
- (void)unblock;
- (void)unblockClaimerForReason:(id)arg1;
- (void)whenDevaluedPerformProcedure:(id)arg1;
- (void)whenFinishedPerformProcedure:(id)arg1;
- (void)whenRevokedPerformProcedure:(id)arg1;

@end
