/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class IMAttributedStringParserContext;

@interface IMAttributedStringParser : NSObject {
    IMAttributedStringParserContext *_context;
}

+ (id)sharedInstance;

- (void)_preprocessWithContext:(id)arg1 string:(id*)arg2;
- (BOOL)allowsWeakReference;
- (void)parseContext:(id)arg1;
- (BOOL)retainWeakReference;

@end