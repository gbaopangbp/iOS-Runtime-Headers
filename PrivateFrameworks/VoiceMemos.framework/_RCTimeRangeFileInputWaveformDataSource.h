/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface _RCTimeRangeFileInputWaveformDataSource : RCFileInputWaveformDataSource {
    struct { 
        double beginTime; 
        double endTime; 
    double _destinationBeginTime;
    } _sourceTimeRange;
    bool_isDecomposedFragment;
}

@property double destinationBeginTime;
@property bool isDecomposedFragment;
@property struct { double x1; double x2; } sourceTimeRange;

- (double)destinationBeginTime;
- (bool)isDecomposedFragment;
- (void)saveGeneratedWaveformIfNecessary;
- (void)setDestinationBeginTime:(double)arg1;
- (void)setIsDecomposedFragment:(bool)arg1;
- (void)setSourceTimeRange:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })sourceTimeRange;

@end
