/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRedeemOperation : NSOperation {
    BOOL _cameraRecognized;
    SKUIClientContext *_clientContext;
    NSString *_code;
    id /* block */ _resultBlock;
}

@property (nonatomic) BOOL cameraRecognized;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (copy) id /* block */ resultBlock;

- (void).cxx_destruct;
- (void)_applyThankYouDictionary:(id)arg1 toRedeem:(id)arg2;
- (id)_itemsForItemIdentifiers:(id)arg1;
- (id)_performRequestWithProperties:(id)arg1 error:(id*)arg2;
- (id)_redeemForSuccessDictionary:(id)arg1;
- (id)_requestPropertiesForThankYouWithURL:(id)arg1;
- (BOOL)cameraRecognized;
- (id)clientContext;
- (id)initWithCode:(id)arg1;
- (void)main;
- (id /* block */)resultBlock;
- (void)setCameraRecognized:(BOOL)arg1;
- (void)setClientContext:(id)arg1;
- (void)setResultBlock:(id /* block */)arg1;

@end