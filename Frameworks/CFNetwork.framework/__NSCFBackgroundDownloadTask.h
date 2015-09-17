/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFBackgroundDownloadTask : __NSCFBackgroundSessionTask {
    BOOL _finished;
}

@property BOOL finished;

- (void)_onqueue_cancelByProducingResumeData:(id /* block */)arg1;
- (void)_onqueue_didFinishDownloadingToURL:(id)arg1;
- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)_onqueue_didReceiveResponse:(id)arg1;
- (void)_onqueue_didResumeAtOffset:(long long)arg1 expectedTotalBytes:(long long)arg2;
- (void)_onqueue_didWriteData:(long long)arg1 totalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3;
- (void)cancelByProducingResumeData:(id /* block */)arg1;
- (BOOL)finished;
- (BOOL)isKindOfClass:(Class)arg1;
- (void)setFinished:(BOOL)arg1;

@end