/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBCacheToken_Keyplane : UIKBCacheToken {
    NSString *_geometrySetName;
    NSString *_keySetName;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    union { 
        struct { 
            unsigned int idiom : 6; 
            unsigned int landscape : 1; 
            unsigned int split : 1; 
            unsigned int appearance : 8; 
            unsigned int rendering : 16; 
        } styling; 
        int intValue; 
    } _style;
}

+ (id)tokenForKeyplane:(id)arg1;

- (id)_initWithKeyplane:(id)arg1 keylayout:(id)arg2;
- (void)dealloc;
- (BOOL)isUsableForCacheToken:(id)arg1 withRenderFlags:(int)arg2;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg1;
- (struct CGSize { float x1; float x2; })size;
- (id)stringForSplitState:(BOOL)arg1;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })styling;

@end