/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKCollectionViewDataSource, GKCollectionViewLayoutAttributes, GKDataSourceMetrics, GKSectionMetrics, NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSMutableOrderedSet, NSMutableSet, NSPointerArray, NSSet;

@interface GKGridLayout : UICollectionViewLayout {
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    GKCollectionViewLayoutAttributes *_clipViewAttributes;
    NSArray *_currentUpdateItems;
    GKCollectionViewDataSource *_dataSourceForUpdate;
    GKDataSourceMetrics *_dataSourceMetrics;
    GKSectionMetrics *_defaultSectionMetricsInternal;
    double _hiddenSearchBarOffset;
    NSIndexPath *_indexPathOfTouchedShowMore;
    NSMutableDictionary *_indexPathToDecoration;
    NSMutableDictionary *_indexPathToItem;
    NSMutableDictionary *_indexPathToMetrics;
    NSMutableDictionary *_indexPathToSupplementary;
    unsigned long long _invalidationFlags;
    NSMutableDictionary *_keyToMetricData;
    NSMutableSet *_knownSupplementaryKinds;
    NSMutableArray *_laidOutAttributes;
    } _laidOutContentSize;
    NSMutableOrderedSet *_laidOutPinnableAttributes;
    unsigned long long _landscapeInterleavedSectionsCount;
    double _leftLayoutGuideOffset;
    long long _metricsInvalidationCount;
    } _minimumLaidOutContentSize;
    NSMutableDictionary *_oldIndexPathToDecoration;
    NSMutableDictionary *_oldIndexPathToItem;
    NSMutableDictionary *_oldIndexPathToSupplementary;
    } _oldLaidOutContentSize;
    NSMutableDictionary *_oldSectionToMetricKeys;
    unsigned long long _portraitInterleavedSectionsCount;
    NSMutableSet *_revealedIndexPaths;
    double _rightLayoutGuideOffset;
    NSPointerArray *_sectionToMetricData;
    NSPointerArray *_sectionToPresentationData;
    NSMutableIndexSet *_sectionsWithPinnedHeaders;
    double _segmentedBoxY;
    double _segmentedHeaderPinningOffset;
    unsigned long long _updateType;
    NSSet *_visibleIndexPathsFilter;
    bool_displayClipView;
    bool_displayingOverlay;
    bool_hideAboveSegmentOnAppear;
    bool_hideSearchBarOnAppear;
    bool_movedItemsInUpdateCarrySections;
    bool_noMoreShowMore;
    bool_showPlaceholder;
}

@property(retain) GKCollectionViewLayoutAttributes * clipViewAttributes;
@property(retain) NSArray * currentUpdateItems;
@property(retain) GKCollectionViewDataSource * dataSourceForUpdate;
@property(retain) GKDataSourceMetrics * dataSourceMetrics;
@property(retain) GKSectionMetrics * defaultSectionMetricsInternal;
@property bool displayClipView;
@property bool displayingOverlay;
@property double hiddenSearchBarOffset;
@property bool hideAboveSegmentOnAppear;
@property bool hideSearchBarOnAppear;
@property(retain) NSIndexPath * indexPathOfTouchedShowMore;
@property(retain) NSMutableDictionary * indexPathToDecoration;
@property(retain) NSMutableDictionary * indexPathToItem;
@property(retain) NSMutableDictionary * indexPathToMetrics;
@property(retain) NSMutableDictionary * indexPathToSupplementary;
@property unsigned long long invalidationFlags;
@property(retain) NSMutableDictionary * keyToMetricData;
@property(retain) NSMutableSet * knownSupplementaryKinds;
@property(retain) NSMutableArray * laidOutAttributes;
@property struct CGSize { double x1; double x2; } laidOutContentSize;
@property(retain) NSMutableOrderedSet * laidOutPinnableAttributes;
@property unsigned long long landscapeInterleavedSectionsCount;
@property double leftLayoutGuideOffset;
@property long long metricsInvalidationCount;
@property struct CGSize { double x1; double x2; } minimumLaidOutContentSize;
@property bool movedItemsInUpdateCarrySections;
@property bool noMoreShowMore;
@property(retain) NSMutableDictionary * oldIndexPathToDecoration;
@property(retain) NSMutableDictionary * oldIndexPathToItem;
@property(retain) NSMutableDictionary * oldIndexPathToSupplementary;
@property struct CGSize { double x1; double x2; } oldLaidOutContentSize;
@property(retain) NSMutableDictionary * oldSectionToMetricKeys;
@property unsigned long long portraitInterleavedSectionsCount;
@property(retain) NSMutableSet * revealedIndexPaths;
@property double rightLayoutGuideOffset;
@property(retain) NSPointerArray * sectionToMetricData;
@property(retain) NSPointerArray * sectionToPresentationData;
@property(retain) NSMutableIndexSet * sectionsWithPinnedHeaders;
@property double segmentedBoxY;
@property double segmentedHeaderPinningOffset;
@property bool showPlaceholder;
@property unsigned long long updateType;
@property NSSet * visibleIndexPathsFilter;

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;

- (id)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;
- (bool)_areWePortrait;
- (id)_existingPresentationDataForSection:(long long)arg1;
- (void)_filterPinnedAttributes;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (unsigned long long)_prepareItemLayoutForSection:(long long)arg1;
- (long long)_prepareOverlayLayoutForSection:(long long)arg1 offset:(long long)arg2;
- (void)_prepareSegmentedBoxLayoutWithOffset:(long long)arg1;
- (long long)_prepareSupplementaryLayoutForSection:(long long)arg1 atLocation:(unsigned long long)arg2 offset:(long long)arg3 globalOffset:(long long*)arg4;
- (void)_resetState;
- (struct CGSize { double x1; double x2; })_sizeAdjustedForTabBarSettingsBasedOnSize:(struct CGSize { double x1; double x2; })arg1;
- (double)applyBottomPinningToAttributes:(id)arg1 minY:(double)arg2 maxY:(double)arg3;
- (double)applyTopPinningToAttributes:(id)arg1 minY:(double)arg2 maxY:(double)arg3;
- (id)attributesForSupplementaryIndexPath:(id)arg1;
- (void)calculateCollectionViewContentSize;
- (double)calculatedBottomPaddingForSection:(long long)arg1;
- (id)clipViewAttributes;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (unsigned long long)currentMaxVisibleItemCountForSection:(long long)arg1;
- (id)currentUpdateItems;
- (id)dataSourceForUpdate;
- (id)dataSourceMetrics;
- (void)dealloc;
- (id)defaultSectionMetricsInternal;
- (void)disableClipView;
- (bool)displayClipView;
- (bool)displayingOverlay;
- (void)enableClipView;
- (void)enumerateSectionsIndexesOverlappingYOffset:(double)arg1 block:(id)arg2;
- (unsigned long long)filteredTotalItemCountForSection:(long long)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForSlidingAwayItemAtIndexPath:(id)arg1;
- (void)finalizeAnimatedBoundsChange;
- (void)finalizeCollectionViewUpdates;
- (void)finalizeGlobalPresentationDataWithSectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)finalizePinnedAttributes:(id)arg1 forSection:(long long)arg2 footer:(bool)arg3;
- (id)firstVisibleIndexAtOrAfterItem:(long long)arg1 itemCount:(long long)arg2 inSection:(long long)arg3;
- (void)forceFullInvalidate;
- (void)fullyRebuildLayout;
- (double)hiddenSearchBarOffset;
- (bool)hideAboveSegmentOnAppear;
- (bool)hideSearchBarOnAppear;
- (long long)indexOfSupplementaryMetricsOfKind:(id)arg1 inList:(id)arg2;
- (id)indexPathOfTouchedShowMore;
- (id)indexPathToDecoration;
- (id)indexPathToItem;
- (id)indexPathToMetrics;
- (id)indexPathToSupplementary;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)init;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForSlidingInItemAtIndexPath:(id)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)invalidationFlags;
- (id)keyToMetricData;
- (id)knownSupplementaryKinds;
- (id)laidOutAttributes;
- (struct CGSize { double x1; double x2; })laidOutContentSize;
- (id)laidOutPinnableAttributes;
- (unsigned long long)landscapeInterleavedSectionsCount;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (double)layoutBottomPinningAttributes:(id)arg1 minY:(double)arg2 maxY:(double)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutBounds;
- (double)layoutTopPinningAttributes:(id)arg1 minY:(double)arg2 maxY:(double)arg3;
- (double)leftLayoutGuideOffset;
- (id)metricDataForKey:(id)arg1;
- (id)metricDataForSection:(long long)arg1;
- (id)metricsForSection:(long long)arg1;
- (long long)metricsInvalidationCount;
- (struct CGSize { double x1; double x2; })minimumLaidOutContentSize;
- (bool)movedItemsInUpdateCarrySections;
- (bool)noMoreShowMore;
- (id)oldIndexPathToDecoration;
- (id)oldIndexPathToItem;
- (id)oldIndexPathToSupplementary;
- (struct CGSize { double x1; double x2; })oldLaidOutContentSize;
- (id)oldSectionToMetricKeys;
- (unsigned long long)portraitInterleavedSectionsCount;
- (void)prepareForAnimatedBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareForMovingItemsCarryingSections;
- (void)prepareForUpdate:(unsigned long long)arg1 inDataSource:(id)arg2;
- (void)prepareLayout;
- (id)presentationDataForSection:(long long)arg1;
- (void)refreshMetrics;
- (id)revealMoreForSectionIndex:(long long)arg1 revealCount:(unsigned long long)arg2 andDeleteItemCount:(unsigned long long)arg3;
- (id)revealMoreForSectionIndex:(long long)arg1;
- (id)revealedIndexPaths;
- (double)rightLayoutGuideOffset;
- (double)scale;
- (long long)searchResultsCount;
- (id)sectionToMetricData;
- (id)sectionToPresentationData;
- (unsigned long long)sectionsPerRow;
- (id)sectionsWithPinnedHeaders;
- (double)segmentedBoxY;
- (double)segmentedHeaderPinningOffset;
- (void)setClipViewAttributes:(id)arg1;
- (void)setCurrentUpdateItems:(id)arg1;
- (void)setDataSourceForUpdate:(id)arg1;
- (void)setDataSourceMetrics:(id)arg1;
- (void)setDefaultSectionMetricsInternal:(id)arg1;
- (void)setDisplayClipView:(bool)arg1;
- (void)setDisplayingOverlay:(bool)arg1;
- (void)setHiddenSearchBarOffset:(double)arg1;
- (void)setHideAboveSegmentOnAppear:(bool)arg1;
- (void)setHideSearchBarOnAppear:(bool)arg1;
- (void)setIndexPathOfTouchedShowMore:(id)arg1;
- (void)setIndexPathToDecoration:(id)arg1;
- (void)setIndexPathToItem:(id)arg1;
- (void)setIndexPathToMetrics:(id)arg1;
- (void)setIndexPathToSupplementary:(id)arg1;
- (void)setInvalidationFlags:(unsigned long long)arg1;
- (void)setKeyToMetricData:(id)arg1;
- (void)setKnownSupplementaryKinds:(id)arg1;
- (void)setLaidOutAttributes:(id)arg1;
- (void)setLaidOutContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLaidOutPinnableAttributes:(id)arg1;
- (void)setLandscapeInterleavedSectionsCount:(unsigned long long)arg1;
- (void)setLeftLayoutGuideOffset:(double)arg1;
- (void)setMetricData:(id)arg1 forSection:(long long)arg2;
- (void)setMetricsInvalidationCount:(long long)arg1;
- (void)setMinimumLaidOutContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMovedItemsInUpdateCarrySections:(bool)arg1;
- (void)setNoMoreShowMore:(bool)arg1;
- (void)setOldIndexPathToDecoration:(id)arg1;
- (void)setOldIndexPathToItem:(id)arg1;
- (void)setOldIndexPathToSupplementary:(id)arg1;
- (void)setOldLaidOutContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setOldSectionToMetricKeys:(id)arg1;
- (void)setPortraitInterleavedSectionsCount:(unsigned long long)arg1;
- (void)setRevealedIndexPaths:(id)arg1;
- (void)setRightLayoutGuideOffset:(double)arg1;
- (void)setSectionToMetricData:(id)arg1;
- (void)setSectionToPresentationData:(id)arg1;
- (void)setSectionsWithPinnedHeaders:(id)arg1;
- (void)setSegmentedBoxY:(double)arg1;
- (void)setSegmentedHeaderPinningOffset:(double)arg1;
- (void)setShowPlaceholder:(bool)arg1;
- (void)setUpdateType:(unsigned long long)arg1;
- (void)setVisibleIndexPathsFilter:(id)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldSlideInSupplementaryElementOfKind:(id)arg1 forUpdateItem:(id)arg2 atIndexPath:(id)arg3;
- (bool)shouldSlideOutSupplementaryElementOfKind:(id)arg1 forUpdateItem:(id)arg2 atIndexPath:(id)arg3;
- (bool)shouldUpdateVisibleCellLayoutAttributes;
- (bool)showPlaceholder;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 withScrollingVelocity:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)updatePinnableAreas;
- (void)updatePlaceholderVisibility;
- (void)updatePresentationDataForLastInterleavedSections;
- (void)updatePresentationDataInSection:(long long)arg1 withAttributes:(id)arg2 supplementaryLocation:(unsigned long long)arg3;
- (unsigned long long)updateType;
- (id)visibleIndexPathsFilter;
- (double)yOffsetForSection:(long long)arg1;
- (double)yOffsetForSlidingUpdate;

@end
