/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class <UICollectionViewDataSource>, GKColorPalette, GKLoadableContentStateMachine, GKPlaceholderView, GKSearchBar, GKSwipeToEditStateMachine, NSMapTable, NSString, UIActivityIndicatorView, UICollectionViewLayout;

@interface GKCollectionViewController : UICollectionViewController <GKStateMachineDelegate, GKCollectionViewDataSourceDelegate, UISearchBarDelegate, UITextFieldDelegate, GKSegmentedSectionDataSourceEventHandler> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    GKSearchBar *_activeSearchBar;
    long long _appearCount;
    GKColorPalette *_colorPalette;
    } _contentInsetsBeforeKeyboard;
    NSString *_currentSearchText;
    <UICollectionViewDataSource> *_dataSource;
    UICollectionViewLayout *_defaultLayout;
    long long _gkFocusBubbleType;
    UIActivityIndicatorView *_loadingIndicatorView;
    GKLoadableContentStateMachine *_loadingMachine;
    GKPlaceholderView *_placeholderView;
    long long _previousOrientation;
    NSMapTable *_reusableViewsIHaveSeen;
    } _scrollInsetsBeforeKeyboard;
    GKSwipeToEditStateMachine *_swipeStateMachine;
    bool_active;
    bool_didSlideIn;
    bool_hasViewFactories;
    bool_readyToDisplayData;
    bool_shouldSlideInContents;
    bool_showSupplementaryViewsWhileLoading;
    bool_skipLoadAfterViewDidLoad;
    bool_supportsMasterSelectionBehavior;
}

@property bool active;
@property(retain) GKSearchBar * activeSearchBar;
@property long long appearCount;
@property(retain) GKColorPalette * colorPalette;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsetsBeforeKeyboard;
@property(retain) NSString * currentSearchText;
@property(retain) <UICollectionViewDataSource> * dataSource;
@property(copy,readonly) NSString * debugDescription;
@property(retain) UICollectionViewLayout * defaultLayout;
@property(copy,readonly) NSString * description;
@property bool didSlideIn;
@property long long gkFocusBubbleType;
@property bool hasViewFactories;
@property(readonly) unsigned long long hash;
@property(retain) UIActivityIndicatorView * loadingIndicatorView;
@property(retain) GKLoadableContentStateMachine * loadingMachine;
@property(readonly) NSString * loadingState;
@property(retain) GKPlaceholderView * placeholderView;
@property long long previousOrientation;
@property(readonly) bool readyToDisplayData;
@property(retain) NSMapTable * reusableViewsIHaveSeen;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } scrollInsetsBeforeKeyboard;
@property bool shouldSlideInContents;
@property bool showSupplementaryViewsWhileLoading;
@property bool skipLoadAfterViewDidLoad;
@property(readonly) Class superclass;
@property bool supportsMasterSelectionBehavior;
@property(retain) GKSwipeToEditStateMachine * swipeStateMachine;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void)_applyUpdates:(id)arg1 withCompletionHandler:(id)arg2;
- (void)_finishUpdates:(id)arg1 withCompletionHandler:(id)arg2;
- (id)_gkRecursiveDescription;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkSetContentsNeedUpdateWithHandler:(id)arg1;
- (bool)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_loadDataWithCompletionHandlerAndError:(id)arg1;
- (void)_reallyStartLoadingIndicator;
- (void)_systemContentSizeSettingDidChange:(id)arg1;
- (bool)active;
- (id)activeSearchBar;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (long long)appearCount;
- (void)applyShowMoreLayoutAttributesForShowMoreView:(id)arg1 atIndexPath:(id)arg2;
- (void)clearButtonPressed:(id)arg1;
- (void)clearSelectionHighlight;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (id)collectionView;
- (id)colorPalette;
- (void)completeWhenReadyToDisplayData:(id)arg1;
- (void)configureDataSource;
- (void)configureViewFactories;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsetsBeforeKeyboard;
- (id)currentSearchTerms;
- (id)currentSearchText;
- (void)dataSource:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didInsertSections:(id)arg2;
- (void)dataSource:(id)arg1 didMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)dataSource:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3;
- (void)dataSource:(id)arg1 didRefreshItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didRefreshSections:(id)arg2;
- (void)dataSource:(id)arg1 didRemoveItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didRemoveSections:(id)arg2;
- (void)dataSource:(id)arg1 didUpdatePlaceholderVisibility:(bool)arg2;
- (void)dataSource:(id)arg1 performBatchUpdate:(id)arg2 complete:(id)arg3;
- (id)dataSource;
- (void)dataSourceDidMoveSectionsWithItems:(id)arg1;
- (void)dataSourceDidReloadData:(id)arg1;
- (void)dealloc;
- (id)defaultBubbleSpec;
- (id)defaultColorPalette;
- (id)defaultLayout;
- (void)didBecomeReadyToDisplayData;
- (void)didDisplayData;
- (void)didEnterErrorState;
- (void)didEnterLoadedState;
- (void)didEnterLoadingState;
- (void)didEnterNoContentState;
- (void)didEnterRefreshingState;
- (void)didExitErrorState;
- (void)didExitLoadedState;
- (void)didExitLoadingState;
- (void)didExitNoContentState;
- (void)didExitRefreshingState;
- (bool)didSlideIn;
- (void)didTouchShowMore:(id)arg1;
- (id)footerViewAboveShowMoreViewAtIndexPath:(id)arg1;
- (id)gkDataSource;
- (long long)gkFocusBubbleType;
- (bool)hasLoaded;
- (bool)hasViewFactories;
- (void)hidePlaceholderAnimated:(bool)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)invalidateSearch;
- (void)keyboardWasShown:(id)arg1;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)loadDataWithCompletionHandlerAndError:(id)arg1;
- (void)loadView;
- (id)loadingIndicatorView;
- (id)loadingMachine;
- (id)loadingState;
- (id)nearestSelectableIndexPath:(id)arg1;
- (id)placeholderView;
- (id)preservedIndexPathForSelectedItem;
- (long long)previousOrientation;
- (bool)readyToDisplayData;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (id)reusableViewsIHaveSeen;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })scrollInsetsBeforeKeyboard;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)segmentedSectionDataSource:(id)arg1 inSection:(unsigned long long)arg2 didSelectDataSourceWithIndex:(long long)arg3;
- (void)setActive:(bool)arg1;
- (void)setActiveSearchBar:(id)arg1;
- (void)setAppearCount:(long long)arg1;
- (void)setColorPalette:(id)arg1;
- (void)setContentInsetsBeforeKeyboard:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCurrentSearchText:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDefaultLayout:(id)arg1;
- (void)setDidSlideIn:(bool)arg1;
- (void)setGkFocusBubbleType:(long long)arg1;
- (void)setHasViewFactories:(bool)arg1;
- (void)setIsReadyToDisplayData:(bool)arg1;
- (void)setLoadingIndicatorView:(id)arg1;
- (void)setLoadingMachine:(id)arg1;
- (void)setNeedsReload;
- (void)setPlaceholderView:(id)arg1;
- (void)setPreviousOrientation:(long long)arg1;
- (void)setReusableViewsIHaveSeen:(id)arg1;
- (void)setScrollInsetsBeforeKeyboard:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setShouldSlideInContents:(bool)arg1;
- (void)setShowSupplementaryViewsWhileLoading:(bool)arg1;
- (void)setSkipLoadAfterViewDidLoad:(bool)arg1;
- (void)setSupportsMasterSelectionBehavior:(bool)arg1;
- (void)setSwipeStateMachine:(id)arg1;
- (bool)shouldSlideInContents;
- (void)showCollectionView;
- (void)showDetailForSelectedItem;
- (double)showMoreTextMarginAtIndexPath:(id)arg1;
- (void)showPlaceholderWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 animated:(bool)arg4 block:(id)arg5;
- (bool)showSupplementaryViewsWhileLoading;
- (void)shutActionPaneAnimated:(bool)arg1;
- (bool)skipLoadAfterViewDidLoad;
- (void)slideInContents;
- (void)startLoadingIndicator;
- (void)stateDidChange;
- (void)stateDidChangeFromErrorStateToLoadingState;
- (void)stateDidChangeFromLoadedStateToLoadingState;
- (void)stateDidChangeFromNilToLoadingState;
- (void)stateDidChangeFromNoContentStateToLoadingState;
- (void)stateWillChange;
- (void)stopLoadingIndicator;
- (void)stopLoadingIndicatorWithoutAnimation;
- (bool)supportsMasterSelectionBehavior;
- (id)swipeStateMachine;
- (void)swipeToDeleteCell:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateLayoutGuideOffsets;
- (void)updateMetrics;
- (void)updateSelectionHighlight;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidDisappearAnimated:(bool)arg1 bubbleFlow:(bool)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willDismissActionSheetFromCell:(id)arg1;

@end
