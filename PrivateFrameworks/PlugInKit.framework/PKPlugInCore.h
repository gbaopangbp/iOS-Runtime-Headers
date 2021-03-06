/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@class NSData, NSDate, NSDictionary, NSString, NSURL, NSUUID;

@interface PKPlugInCore : NSObject {
    NSDictionary *_annotations;
    NSDictionary *_bundleInfoDictionary;
    NSData *_cdhash;
    NSURL *_containingUrl;
    unsigned long long _hubProtocolVersion;
    NSString *_identifier;
    long long _lastModified;
    NSString *_localizedContainingName;
    NSString *_localizedName;
    NSString *_localizedShortName;
    NSDictionary *_plugInDictionary;
    NSString *_requirement;
    NSDictionary *_topDictionary;
    NSURL *_url;
    NSUUID *_uuid;
    bool_onSystemVolume;
}

@property(retain) NSDictionary * annotations;
@property(readonly) NSDictionary * attributes;
@property(retain) NSDictionary * bundleInfoDictionary;
@property(retain) NSData * cdhash;
@property(readonly) NSString * containingPath;
@property(retain) NSURL * containingUrl;
@property unsigned long long hubProtocolVersion;
@property(retain) NSString * identifier;
@property(readonly) bool isAppExtension;
@property(readonly) bool isData;
@property(readonly) bool isDedicated;
@property(readonly) bool isHybrid;
@property(readonly) bool isMultiplexed;
@property long long lastModified;
@property(retain) NSString * localizedContainingName;
@property(retain) NSString * localizedName;
@property(retain) NSString * localizedShortName;
@property(readonly) bool oldStyle;
@property bool onSystemVolume;
@property(readonly) NSString * path;
@property(retain) NSDictionary * plugInDictionary;
@property(readonly) id protocolSpec;
@property(retain) NSString * requirement;
@property(readonly) NSString * sdkSpec;
@property(readonly) NSDate * timestamp;
@property(retain) NSDictionary * topDictionary;
@property(retain) NSURL * url;
@property(retain) NSUUID * uuid;
@property(readonly) NSString * version;

+ (id)readSDKDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)annotations;
- (id)attributes;
- (id)augmentInterface:(id)arg1;
- (id)bundleInfoDictionary;
- (void)canonicalize;
- (id)cdhash;
- (id)containingPath;
- (id)containingUrl;
- (id)diagnose;
- (id)embeddedCodePath;
- (id)embeddedProtocolSpec;
- (id)export:(id*)arg1;
- (unsigned long long)hash;
- (unsigned long long)hubProtocolVersion;
- (id)identifier;
- (id)init;
- (id)initWithForm:(id)arg1;
- (id)initWithName:(id)arg1 url:(id)arg2 bundleInfo:(id)arg3 info:(id)arg4 uuid:(id)arg5;
- (bool)isAppExtension;
- (bool)isData;
- (bool)isDedicated;
- (bool)isEqual:(id)arg1;
- (bool)isHybrid;
- (bool)isMultiplexed;
- (long long)lastModified;
- (id)localizedContainingName;
- (id)localizedName;
- (id)localizedShortName;
- (id)mergeDictionary:(id)arg1 into:(id)arg2;
- (id)mergeSharedResources:(id)arg1 into:(id)arg2;
- (id)newAttributesFrom:(id)arg1;
- (id)newMultiplesFrom:(id)arg1;
- (id)newPlugInKitDictionaryFrom:(id)arg1;
- (id)normalizeInfoDictionary:(id)arg1;
- (bool)oldStyle;
- (bool)onSystemVolume;
- (id)path;
- (id)plugInDictionary;
- (id)protocolSpec;
- (id)requirement;
- (void)resolveSDK;
- (bool)sdkOverridesKey:(id)arg1;
- (id)sdkSpec;
- (void)setAnnotation:(id)arg1 value:(id)arg2;
- (void)setAnnotations:(id)arg1;
- (void)setBundleInfoDictionary:(id)arg1;
- (void)setCdhash:(id)arg1;
- (void)setContainingUrl:(id)arg1;
- (bool)setDictionaries:(id)arg1;
- (void)setHubProtocolVersion:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastModified:(long long)arg1;
- (void)setLocalizedContainingName:(id)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setLocalizedShortName:(id)arg1;
- (void)setOnSystemVolume:(bool)arg1;
- (void)setPlugInDictionary:(id)arg1;
- (void)setRequirement:(id)arg1;
- (void)setTopDictionary:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setUuid:(id)arg1;
- (bool)setupWithForm:(id)arg1;
- (bool)setupWithName:(id)arg1 url:(id)arg2 bundleInfo:(id)arg3 info:(id)arg4 uuid:(id)arg5;
- (id)timestamp;
- (id)topDictionary;
- (void)updateFromForm:(id)arg1;
- (id)url;
- (id)uuid;
- (id)version;

@end
