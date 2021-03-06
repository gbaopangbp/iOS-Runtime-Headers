/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSString;

@interface MSVideoDerivativeSpecification : NSObject {
    double _bitRate;
    unsigned long long _mediaAssetType;
    NSString *_videoType;
    bool_powerRequired;
    bool_useCellular;
}

@property(readonly) double bitRate;
@property(readonly) unsigned long long mediaAssetType;
@property(readonly) bool powerRequired;
@property(readonly) bool useCellular;
@property(readonly) NSString * videoType;

+ (id)videoDerivativeSpecificationsWithDictionaryArray:(id)arg1;

- (double)bitRate;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)mediaAssetType;
- (bool)powerRequired;
- (bool)useCellular;
- (id)videoType;

@end
