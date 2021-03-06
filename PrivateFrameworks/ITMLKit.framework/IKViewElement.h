/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class IKAppDocument, IKViewElement, IKViewElementStyle, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSString;

@interface IKViewElement : NSObject {
    NSString *_accessibilityText;
    NSMutableSet *_activeSingularEvents;
    IKAppDocument *_appDocument;
    NSDictionary *_attributes;
    NSString *_autoHighlightIdentifier;
    NSArray *_children;
    NSString *_elementID;
    NSString *_elementName;
    unsigned long long _elementType;
    NSArray *_features;
    NSString *_itmlID;
    NSMutableDictionary *_metadataDict;
    IKViewElement *_parent;
    IKViewElementStyle *_style;
    unsigned long long _updateType;
    bool_disabled;
    bool_impressionable;
}

@property(copy,readonly) NSString * accessibilityText;
@property(retain) NSMutableSet * activeSingularEvents;
@property IKAppDocument * appDocument;
@property(retain,readonly) NSDictionary * attributes;
@property(copy,readonly) NSString * autoHighlightIdentifier;
@property(retain) NSArray * children;
@property(getter=isDisabled) bool disabled;
@property(copy,readonly) NSString * elementID;
@property(copy,readonly) NSString * elementName;
@property(readonly) unsigned long long elementType;
@property(copy,readonly) NSArray * features;
@property(getter=isImpressionable) bool impressionable;
@property(retain,readonly) NSString * itmlID;
@property(retain) NSMutableDictionary * metadataDict;
@property IKViewElement * parent;
@property(retain,readonly) IKViewElementStyle * style;
@property unsigned long long updateType;

+ (unsigned long long)evaluateElementUpdateTypeAndReset:(id)arg1;
+ (bool)shouldParseChildDOMElements;
+ (id)supportedFeatures;

- (void).cxx_destruct;
- (void)_applyUpdatesToChildrenWithElements:(id)arg1;
- (void)_reorderAndUpdateChildrenWithElements:(id)arg1;
- (id)accessibilityText;
- (id)activeSingularEvents;
- (id)appDocument;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)attributes;
- (id)autoHighlightIdentifier;
- (id)childElementWithType:(unsigned long long)arg1;
- (id)childElementsWithType:(unsigned long long)arg1;
- (id)childImageElementWithType:(unsigned long long)arg1;
- (id)childTextElementWithStyle:(unsigned long long)arg1;
- (id)children;
- (void)dispatchEventOfType:(unsigned long long)arg1 canBubble:(bool)arg2 isCancelable:(bool)arg3 extraInfo:(id)arg4 completionBlock:(id)arg5;
- (id)elementID;
- (id)elementName;
- (unsigned long long)elementType;
- (id)features;
- (id)init;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isDisabled;
- (bool)isImpressionable;
- (id)itmlID;
- (id)metadataDict;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)parent;
- (void)setActiveSingularEvents:(id)arg1;
- (void)setAppDocument:(id)arg1;
- (void)setChildren:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setImpressionable:(bool)arg1;
- (void)setMetadataDict:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setParent:(id)arg1;
- (void)setUpdateType:(unsigned long long)arg1;
- (id)style;
- (unsigned long long)updateType;

@end
