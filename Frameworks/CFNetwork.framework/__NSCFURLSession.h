/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFURLSession : NSURLSession {
    NSDictionary * _atsState;
    id /* block */  _connBlock;
    <NSURLSessionDelegate> * _delegate;
    NSOperationQueue * _delegateQueue;
    BOOL  _invalid;
    BOOL  _isSharedSession;
    NSURLSessionConfiguration * _local_immutable_configuration;
    NSString * _sessionDescription;
    NSString * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSDictionary *delegateOptions;

- (id)_atsState;
- (id /* block */)_connBlock;
- (BOOL)_isSharedSession;
- (id)_local_immutable_configuration;
- (id)_uuid;
- (void)dealloc;
- (id)delegate;
- (id)delegateOptions;
- (id)delegateQueue;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (BOOL)invalid;
- (id)sessionDescription;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setInvalid:(BOOL)arg1;
- (void)setSessionDescription:(id)arg1;
- (void)set_atsState:(id)arg1;
- (void)set_connBlock:(id /* block */)arg1;
- (void)set_isSharedSession:(BOOL)arg1;
- (void)set_local_immutable_configuration:(id)arg1;
- (void)set_uuid:(id)arg1;
- (id)workQueue;

@end
