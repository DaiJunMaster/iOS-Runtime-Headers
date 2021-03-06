/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKPlayerPickerViewController : GKCollectionViewController {
    GKGame * _game;
    id /* block */  _handler;
    int  _maxSelectable;
    <GKNearbyBrowserDelegate> * _nearbyDelegate;
    NSArray * _preselectedPlayers;
    GKSearchBarView * _searchBar;
    BOOL  _supportsNearby;
}

@property (nonatomic, retain) GKGame *game;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic) int maxSelectable;
@property (nonatomic) <GKNearbyBrowserDelegate> *nearbyDelegate;
@property (nonatomic, retain) NSArray *preselectedPlayers;
@property (nonatomic) GKSearchBarView *searchBar;
@property (nonatomic) BOOL supportsNearby;

+ (id)challengesPickerWithChallenge:(id)arg1 selectedPlayers:(id)arg2;
+ (id)multiplayerPickerForGame:(id)arg1 hiddenPlayers:(id)arg2;

- (BOOL)_gkWantsCustomRightBarButtonItemInViewService;
- (void)cancel;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)configureSearchBar:(id)arg1;
- (void)configureSectionHeader:(id)arg1 indexPath:(id)arg2;
- (void)configureViewFactories;
- (void)dealloc;
- (void)done;
- (id)game;
- (id /* block */)handler;
- (id)initWithGame:(id)arg1 selectedPlayers:(id)arg2;
- (int)maxSelectable;
- (id)nearbyDelegate;
- (id)preselectedPlayers;
- (id)searchBar;
- (void)setGame:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setMaxSelectable:(int)arg1;
- (void)setNearbyDelegate:(id)arg1;
- (void)setPreselectedPlayers:(id)arg1;
- (void)setSearchBar:(id)arg1;
- (void)setSupportsNearby:(BOOL)arg1;
- (id)splitingDataSource;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)supportsNearby;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateMetrics;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
