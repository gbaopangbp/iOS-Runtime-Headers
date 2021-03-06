/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, TPDocumentSettings, TPDrawablesZOrder, TPFloatingDrawables, TPInteractiveCanvasController, TPPageLayoutNotifier, TPPaginatedPageController, TPSection, TPTOCController, TPTheme, TSDThumbnailController, TSSStylesheet, TSWPStorage;

@interface TPDocumentRoot : TSADocumentRoot <TSDThumbnailProducer, TSDInfoUUIDPathPrefixComponentsProvider, TSWPDrawableOLC, TSWPStorageParent, TSWPChangeSessionManager, TSWPChangeVisibility, TSTResolverContainerNameProvider, TSCEResolverContainer> {
    struct CGSize { 
        double width; 
        double height; 
    TSWPStorage *_bodyStorage;
    double _bottomMargin;
    NSMutableArray *_changeSessionHistory;
    NSMutableDictionary *_chartsUIState;
    NSArray *_citationRecords;
    double _currentThumbnailContainerWidth;
    TPDrawablesZOrder *_drawablesZOrder;
    TPFloatingDrawables *_floatingDrawables;
    double _footerMargin;
    double _headerMargin;
    struct __CFLocale { } *_hyphenationLocale;
    double _leftMargin;
    NSArray *_obsoleteTOCStyles;
    unsigned long long _orientation;
    TPPageLayoutNotifier *_pageLayoutNotifier;
    double _pageScale;
    } _pageSize;
    TPPaginatedPageController *_paginatedPageController;
    NSString *_paperID;
    NSString *_printerID;
    double _rightMargin;
    TPDocumentSettings *_settings;
    TSSStylesheet *_stylesheet;
    NSMutableDictionary *_tableInfosWithUniqueNames;
    unsigned int _tableNameCounter;
    TPTheme *_theme;
    TSDThumbnailController *_thumbnailController;
    TPTOCController *_tocController;
    double _topMargin;
    bool_changeTrackingEnabled;
    bool_changeTrackingPaused;
    bool_layoutBodyVertically;
    bool_needsInitialization;
    bool_newDocument;
    bool_shouldUniquifyTableNames;
    bool_usesSingleHeaderFooter;
    boolinitiallyShowRuler;
    TPInteractiveCanvasController *interactiveCanvasController;
}

@property(retain,readonly) TSWPStorage * bodyStorage;
@property double bottomMargin;
@property(retain) NSArray * changeSessionHistory;
@property(getter=isChangeTrackingEnabled) bool changeTrackingEnabled;
@property(getter=isChangeTrackingPaused) bool changeTrackingPaused;
@property(retain) NSMutableDictionary * chartsUIState;
@property(readonly) long long contentWritingDirection;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) TPDrawablesZOrder * drawablesZOrder;
@property(retain,readonly) TPSection * firstSection;
@property(retain) TPFloatingDrawables * floatingDrawables;
@property double footerMargin;
@property(readonly) unsigned long long hash;
@property double headerMargin;
@property bool initiallyShowRuler;
@property TPInteractiveCanvasController * interactiveCanvasController;
@property(readonly) bool isNewDocument;
@property(readonly) bool isTrackingChanges;
@property bool layoutBodyVertically;
@property double leftMargin;
@property unsigned long long orientation;
@property double pageScale;
@property struct CGSize { double x1; double x2; } pageSize;
@property(readonly) TPPaginatedPageController * paginatedPageController;
@property(copy) NSString * paperID;
@property(readonly) struct CGSize { double x1; double x2; } paperSize;
@property(copy) NSString * printerID;
@property double rightMargin;
@property(retain,readonly) NSArray * sections;
@property(retain,readonly) TPDocumentSettings * settings;
@property(retain) TSSStylesheet * stylesheet;
@property(readonly) Class superclass;
@property(retain) TPTheme * theme;
@property(readonly) TSDThumbnailController * thumbnailController;
@property(retain) TPTOCController * tocController;
@property double topMargin;
@property(getter=isTrackingChanges,readonly) bool trackingChanges;
@property bool usesSingleHeaderFooter;

+ (void)localizeTextStorage:(id)arg1 withTemplateBundle:(id)arg2;
+ (struct CGSize { double x1; double x2; })pageSizeFromPaperSize:(struct CGSize { double x1; double x2; })arg1 pageScale:(double)arg2 orientation:(unsigned long long)arg3;
+ (struct CGSize { double x1; double x2; })previewImageSizeForType:(unsigned long long)arg1;

- (id).cxx_construct;
- (id)UIStateForChart:(id)arg1;
- (unsigned long long)applicationType;
- (bool)autoListRecognition;
- (bool)autoListTermination;
- (id)bodyStorage;
- (double)bodyWidth;
- (double)bottomMargin;
- (id)changeSessionAuthorCreatedWithCommand:(id*)arg1;
- (id)changeSessionHistory;
- (id)changeSessionManagerForModel:(id)arg1;
- (id)changeVisibility;
- (id)chartsUIState;
- (id)childEnumerator;
- (id)citationRecords;
- (id)commandForConvertingFloatingDrawableToAnchored:(id)arg1;
- (long long)contentWritingDirection;
- (id)createViewStateRoot;
- (void)dealloc;
- (void)didAddDrawable:(id)arg1;
- (void)didEnterBackground;
- (void)documentDidLoad;
- (bool)documentDisallowsHighlightsOnStorage:(id)arg1;
- (id)drawablesZOrder;
- (id)firstSection;
- (id)floatingDrawables;
- (double)footerMargin;
- (double)footnoteGap;
- (int)footnoteKind;
- (bool)footnotesShouldAffectBodyLayout;
- (double)headerMargin;
- (struct __CFLocale { }*)hyphenationLocale;
- (id)initForThemeImportWithContext:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initUsingDefaultThemeWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;
- (bool)initiallyShowRuler;
- (id)interactiveCanvasController;
- (void)invalidateThumbnailForPageIndex:(unsigned long long)arg1;
- (bool)isChangeTrackingEnabled;
- (bool)isChangeTrackingPaused;
- (bool)isMultiPageForQuickLook;
- (bool)isNewDocument;
- (bool)isPendingTableNameUniquification;
- (bool)isSectionModel:(id)arg1;
- (bool)isTrackingChanges;
- (bool)layoutBodyVertically;
- (double)leftMargin;
- (id)markStringForFootnoteReferenceStorage:(id)arg1;
- (id)modelPathComponentForChild:(id)arg1;
- (id)nameForResolverContainer:(id)arg1;
- (int)naturalAlignmentAtCharIndex:(unsigned long long)arg1 inTextStorage:(id)arg2;
- (unsigned long long)nextRootSearchTargetIndexFromIndex:(unsigned long long)arg1 forString:(id)arg2 options:(unsigned long long)arg3 inDirection:(unsigned long long)arg4;
- (unsigned int)nextUntitledResolverIndex;
- (unsigned long long)orientation;
- (void)pCommonInitialization;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pConjureUpBodyRect;
- (void)pCreateBodyStorage;
- (void)pCreateDrawablesZOrderBodyStorage:(id)arg1 addAnchoredDrawables:(bool)arg2;
- (void)pCreateFloatingDrawables;
- (void)pCreateStylesheet;
- (void)pFinishInitialization;
- (void)pUpgradeSection:(id)arg1 documentVersion:(unsigned long long)arg2;
- (unsigned long long)p_autoNumberForStorage:(id)arg1 footnoteNumbering:(int)arg2 footnoteKind:(int)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })p_bodyHitRangeForString:(id)arg1 withOptions:(unsigned long long)arg2 limitRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (unsigned long long)p_nextRootSearchTargetInBodyOrFloatersFromIndex:(unsigned long long)arg1 forString:(id)arg2 options:(unsigned long long)arg3 inDirection:(unsigned long long)arg4;
- (bool)p_possibleHitInSectionMaster:(id)arg1 pageIndex:(unsigned long long)arg2 withOptions:(unsigned long long)arg3;
- (id)p_previewImageWithImageSize:(struct CGSize { double x1; double x2; })arg1;
- (id)p_realTOCEntryStyleFromFakeTOCEntryStyle:(id)arg1 context:(id)arg2;
- (unsigned long long)p_scanBackwardsForNextRootSearchTargetInBodyOrFloatersFromIndex:(unsigned long long)arg1 forString:(id)arg2 withOptions:(unsigned long long)arg3;
- (unsigned long long)p_scanForwardsForNextRootSearchTargetInBodyOrFloatersFromIndex:(unsigned long long)arg1 forString:(id)arg2 withOptions:(unsigned long long)arg3;
- (void)p_uniquifyTableNames;
- (void)p_upgradeBodyTOC;
- (void)p_upgradeTOCStyles;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pageBoundsWithinMargins;
- (void)pageCountDidChangeForPageController:(id)arg1;
- (unsigned long long)pageIndexForThumbnailIdentifier:(id)arg1;
- (id)pageMasterOwningModel:(id)arg1;
- (bool)pageMastersAllowDrawable:(id)arg1;
- (double)pageScale;
- (struct CGSize { double x1; double x2; })pageSize;
- (id)paginatedPageController;
- (id)paperID;
- (struct CGSize { double x1; double x2; })paperSize;
- (void)prepareNewDocumentWithTemplateBundle:(id)arg1;
- (id)previewImageForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)printerID;
- (id)resolverContainerForName:(id)arg1 caseSensitive:(bool)arg2;
- (id)resolverContainerNameForResolver:(id)arg1;
- (id)resolverContainerNamesMatchingPrefix:(id)arg1;
- (id)resolverMatchingName:(id)arg1 contextContainerName:(id)arg2;
- (id)resolverMatchingName:(id)arg1 contextResolver:(id)arg2;
- (id)resolverMatchingName:(id)arg1;
- (bool)resolverNameIsUsed:(id)arg1;
- (id)resolversMatchingPrefix:(id)arg1;
- (void)resumeBackgroundActivities;
- (void)resumeThumbnailing;
- (bool)reuseThumbnailerUntilIdleForIdentifier:(id)arg1;
- (double)rightMargin;
- (id)rootInfosForIdentifier:(id)arg1;
- (unsigned long long)rootSearchTargetCountThroughIndex:(unsigned long long)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)sections;
- (void)setBodyStorage:(id)arg1 dolcContext:(id)arg2;
- (void)setBottomMargin:(double)arg1;
- (void)setChangeSessionHistory:(id)arg1;
- (void)setChangeTrackingEnabled:(bool)arg1;
- (void)setChangeTrackingPaused:(bool)arg1;
- (void)setChartsUIState:(id)arg1;
- (void)setDrawablesZOrder:(id)arg1;
- (void)setFloatingDrawables:(id)arg1;
- (void)setFooterMargin:(double)arg1;
- (void)setHeaderMargin:(double)arg1;
- (void)setInitiallyShowRuler:(bool)arg1;
- (void)setInteractiveCanvasController:(id)arg1;
- (void)setLayoutBodyVertically:(bool)arg1;
- (void)setLeftMargin:(double)arg1;
- (void)setOrientation:(unsigned long long)arg1;
- (void)setPageScale:(double)arg1;
- (void)setPageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPaperID:(id)arg1;
- (void)setPrinterID:(id)arg1;
- (void)setRightMargin:(double)arg1;
- (void)setStylesheet:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setThemeForTemplateImport:(id)arg1;
- (void)setTocController:(id)arg1;
- (void)setTopMargin:(double)arg1;
- (void)setUIState:(id)arg1 forChart:(id)arg2;
- (void)setUsesSingleHeaderFooter:(bool)arg1;
- (void)setValue:(double)arg1 forMargin:(int)arg2;
- (id)settings;
- (bool)shouldAllowDrawableInGroups:(id)arg1 forImport:(bool)arg2;
- (bool)shouldHyphenate;
- (bool)shouldShowChangeKind:(int)arg1 date:(id)arg2;
- (bool)shouldShowMarkupForChangeKind:(int)arg1 date:(id)arg2;
- (void)startNewChangeSessionIfNecessaryGettingInsertAuthorCommand:(id*)arg1;
- (id)stylesheet;
- (bool)supportHeaderFooterParagraphAlignmentInInspectors;
- (void)suspendBackgroundActivities;
- (void)suspendThumbnailing;
- (bool)textIsVertical;
- (id)theme;
- (void)thumbnailContainerDidChange:(id)arg1;
- (id)thumbnailController;
- (id)thumbnailIdentifierForPageIndex:(unsigned long long)arg1;
- (Class)thumbnailImagerClass;
- (struct CGSize { double x1; double x2; })thumbnailSizeForIdentifier:(id)arg1;
- (id)tocController;
- (double)topMargin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unscaledClipRectForIdentifier:(id)arg1;
- (void)updateWritingDirection:(unsigned long long)arg1;
- (void)upgradeFromOldSectionWithPageSize:(struct CGSize { double x1; double x2; })arg1 leftMargin:(double)arg2 rightMargin:(double)arg3 topMargin:(double)arg4 bottomMargin:(double)arg5 headerMargin:(double)arg6 footerMargin:(double)arg7;
- (bool)useLigatures;
- (bool)usesSingleHeaderFooter;
- (id)uuidPathPrefixComponentsForInfo:(id)arg1;
- (double)valueForMargin:(int)arg1;
- (int)verticalAlignmentForTextStorage:(id)arg1;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)willClose;
- (void)willEnterForeground;
- (void)willHide;
- (void)willRemoveDrawable:(id)arg1;
- (void)withRootSearchTargetAtIndex:(unsigned long long)arg1 executeBlock:(id)arg2;
- (unsigned long long)writingDirection;

@end
