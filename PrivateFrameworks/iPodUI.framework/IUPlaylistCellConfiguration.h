/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@interface IUPlaylistCellConfiguration : IUMediaEntityCellConfiguration {
    int _groupingType;
}

+ (id)backgroundColorWithModifiers:(unsigned int)arg1;
+ (float)rowHeightForGlobalContext:(id)arg1;

- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (void)configureForEntity:(id)arg1 query:(id)arg2 entityIndex:(unsigned int)arg3 entityCount:(unsigned int)arg4;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (BOOL)getShadowColor:(id*)arg1 offset:(struct CGSize { float x1; float x2; }*)arg2 forLabelAtIndex:(unsigned int)arg3 withModifiers:(unsigned int)arg4;
- (id)init;
- (void)reloadImages;
- (void)reloadLayoutInformation;
- (void)reloadStringsWithProperties:(id)arg1;

@end