/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SARestartRequest : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * lastResponseId;
@property(copy) NSString * requestId;
@property(copy) NSString * refId;
@property(copy) NSString * aceId;

+ (id)restartRequest;
+ (id)restartRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)lastResponseId;
- (void)setLastResponseId:(id)arg1;
- (id)encodedClassName;
- (void)setRequestId:(id)arg1;
- (id)requestId;

@end