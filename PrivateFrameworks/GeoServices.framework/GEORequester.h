/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSThread;

@interface GEORequester : PBRequester {
    NSString *_debugRequestName;
    NSThread *_thread;
    bool_disableReplay;
    bool_useBackgroundConnection;
    bool_usePersistentConnection;
}

@property(retain) NSString * debugRequestName;
@property bool disableReplay;

+ (id)_logRequestResponseDirectory;
+ (void)enablePersistentConnection;
+ (void)replayRequests;
+ (void)setAppID:(id)arg1;
+ (void)setLogRequestResponseDirectory:(id)arg1;
+ (void)setOSVersion:(id)arg1;
+ (void)stopAllRequests;

- (void)_applicationDidStopAllRequests:(id)arg1;
- (void)_applicationWantsToReplayRequests:(id)arg1;
- (void)_handleResumeOnThread;
- (void)_handleSuspendOnThread;
- (void)_logErrorIfNecessary:(id)arg1;
- (void)_logRequestsIfNecessary:(id)arg1;
- (void)_logResponsesIfNecessary:(id)arg1;
- (void)dealloc;
- (id)debugRequestName;
- (bool)disableReplay;
- (id)initWithURL:(id)arg1 andDelegate:(id)arg2 useBackgroundConnection:(bool)arg3;
- (id)initWithURL:(id)arg1 andDelegate:(id)arg2;
- (id)logRequestToFile;
- (id)logResponseToFile;
- (struct _CFURLRequest { }*)newCFMutableURLRequestWithURL:(id)arg1;
- (id)newConnectionWithCFURLRequest:(struct _CFURLRequest { }*)arg1 delegate:(id)arg2;
- (id)persistentConnectionSession;
- (id)requestPreamble;
- (void)setDebugRequestName:(id)arg1;
- (void)setDisableReplay:(bool)arg1;
- (void)start;
- (void)startWithConnectionProperties:(id)arg1;

@end
