/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class TSCHChartInfo;

@interface TSCH3DAbstractLimitingSeriesUpgrader : NSObject {
    TSCHChartInfo *mChartInfo;
    id mWillModifyBlock;
}

@property(copy) id willModifyBlock;

+ (bool)chartTypeUsesSeriesLimiting:(id)arg1;
+ (double)depthFactorForAdjustingNumberOfSeries:(unsigned long long)arg1 chartType:(id)arg2 fromOldLimitingSeries:(unsigned long long)arg3 toNewLimitingSeries:(unsigned long long)arg4;
+ (id)upgraderWithChartInfo:(id)arg1;

- (id)adjustedScaleFromLayoutSettings:(const struct { boolx1; boolx2; boolx3; boolx4; boolx5; boolx6; unsigned long long x7; }*)arg1 toLayoutSettings:(const struct { boolx1; boolx2; boolx3; boolx4; boolx5; boolx6; unsigned long long x7; }*)arg2;
- (void)configureScene:(id)arg1;
- (id)configuredSceneWithLayoutSettings:(struct { boolx1; boolx2; boolx3; boolx4; boolx5; boolx6; unsigned long long x7; })arg1;
- (id)constantDepthInfoChartScaleForInfoChartScale:(id)arg1;
- (void)dealloc;
- (id)initWithChartInfo:(id)arg1;
- (void)mutateInfoByAdjustingScaleFromLayoutSettings:(const struct { boolx1; boolx2; boolx3; boolx4; boolx5; boolx6; unsigned long long x7; }*)arg1 toLayoutSettings:(const struct { boolx1; boolx2; boolx3; boolx4; boolx5; boolx6; unsigned long long x7; }*)arg2;
- (void)mutateInfoWithContainingViewport:(id)arg1 scene:(id)arg2;
- (void)mutateInfoWithMutations:(id)arg1;
- (unsigned long long)numberOfSeries;
- (struct { boolx1; boolx2; boolx3; boolx4; boolx5; boolx6; unsigned long long x7; })oldLayoutSettings;
- (void)setWillModifyBlock:(id)arg1;
- (void)upgrade;
- (struct { boolx1; boolx2; boolx3; boolx4; boolx5; boolx6; unsigned long long x7; })upgradedLayoutSettings;
- (id)willModifyBlock;

@end
