/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class NSDictionary, NSArray;

@interface SPBundleManager : NSObject  {
    NSArray *_searchBundles;
    NSArray *_datastores;
    NSDictionary *_domainMap;
}

@property(readonly) NSArray * searchBundles;
@property(readonly) NSArray * datastores;

+ (id)sharedManager;

- (void)dealloc;
- (id)searchBundles;
- (void)resetDatastores;
- (id)domainMap;
- (id)datastores;
- (void)_loadSearchBundles;
- (id)datastoreForDomain:(unsigned int)arg1;

@end