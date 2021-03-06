/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@class HMMessageDispatcher, NSMutableSet, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface HMDConnectionProxy : NSObject <HMDaemonConnection> {
    unsigned long long _activeMessageCount;
    NSObject<OS_dispatch_group> *_activeMessageTracker;
    NSString *_clientName;
    NSMutableSet *_pendingRequests;
    HMMessageDispatcher *_recvDispatcher;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSXPCConnection *_xpcConnection;
    bool_activated;
    bool_ready;
}

@property bool activated;
@property unsigned long long activeMessageCount;
@property(retain) NSObject<OS_dispatch_group> * activeMessageTracker;
@property(retain) NSString * clientName;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) NSMutableSet * pendingRequests;
@property bool ready;
@property(retain) HMMessageDispatcher * recvDispatcher;
@property(readonly) Class superclass;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;
@property NSXPCConnection * xpcConnection;

- (void).cxx_destruct;
- (bool)_checkForAuthorizationForMessage:(id)arg1 client:(id)arg2 responseHandler:(id)arg3;
- (void)activate;
- (bool)activated;
- (unsigned long long)activeMessageCount;
- (id)activeMessageTracker;
- (void)checkinWithName:(id)arg1 handleMessageWithName:(id)arg2 messageIdentifier:(id)arg3 messagePayload:(id)arg4 target:(id)arg5 responseHandler:(id)arg6;
- (id)clientName;
- (int)clientPid;
- (void)deactivate;
- (void)dealloc;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 responseHandler:(id)arg5;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4;
- (id)initWithConnection:(id)arg1 queue:(id)arg2 activeMessageTracker:(id)arg3 recvDispatcher:(id)arg4;
- (id)name;
- (id)pendingRequests;
- (bool)ready;
- (void)recheckinWithName:(id)arg1;
- (id)recvDispatcher;
- (id)remoteProxy;
- (void)setActivated:(bool)arg1;
- (void)setActiveMessageCount:(unsigned long long)arg1;
- (void)setActiveMessageTracker:(id)arg1;
- (void)setClientName:(id)arg1;
- (void)setPendingRequests:(id)arg1;
- (void)setReady:(bool)arg1;
- (void)setRecvDispatcher:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (bool)shouldSendResponseForMessageIdentifier:(id)arg1;
- (id)workQueue;
- (id)xpcConnection;

@end
