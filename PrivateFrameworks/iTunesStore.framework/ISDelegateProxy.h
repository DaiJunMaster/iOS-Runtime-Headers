/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISDelegateProxy : NSObject {
    id  _delegate;
    NSLock * _lock;
    BOOL  _shouldMessageMainThread;
}

- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)sendInvocationToDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShouldMessageMainThread:(BOOL)arg1;

@end
