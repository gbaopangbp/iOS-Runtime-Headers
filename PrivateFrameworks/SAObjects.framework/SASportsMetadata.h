/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString;

@interface SASportsMetadata : AceObject <SAAceSerializable> {
}

@property(copy) NSNumber * average;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSString * identifier;
@property(copy) NSString * name;
@property(copy) NSNumber * selected;
@property(readonly) Class superclass;
@property(copy) NSString * value;

+ (id)metadata;
+ (id)metadataWithDictionary:(id)arg1 context:(id)arg2;

- (id)average;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifier;
- (id)name;
- (id)selected;
- (void)setAverage:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSelected:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
