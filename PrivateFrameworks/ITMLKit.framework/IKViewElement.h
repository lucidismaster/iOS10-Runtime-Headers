/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKViewElement : NSObject <IKStyleableElement> {
    NSString * _accessibilityText;
    NSMutableSet * _activeSingularEvents;
    IKAppDocument * _appDocument;
    NSDictionary * _attributes;
    NSString * _autoHighlightIdentifier;
    NSArray * _children;
    bool  _didUpdateAutoHighlightIdentifier;
    bool  _disabled;
    NSString * _elementID;
    NSString * _elementName;
    unsigned long long  _elementType;
    NSArray * _features;
    bool  _impressionable;
    NSDictionary * _impressionableAttributes;
    NSString * _itmlID;
    NSMutableDictionary * _metadataDict;
    IKViewElement * _parent;
    <IKStyleableElement> * _parentStyleableElement;
    IKViewElementStyleComposer * _styleComposer;
    unsigned long long  _updateType;
}

@property (nonatomic, readonly, copy) NSString *accessibilityText;
@property (nonatomic, retain) NSMutableSet *activeSingularEvents;
@property (nonatomic) IKAppDocument *appDocument;
@property (nonatomic, readonly, retain) NSDictionary *attributes;
@property (nonatomic, copy) NSString *autoHighlightIdentifier;
@property (nonatomic, retain) NSArray *children;
@property (nonatomic) bool didUpdateAutoHighlightIdentifier;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (nonatomic, readonly, copy) NSString *elementID;
@property (nonatomic, readonly, copy) NSString *elementName;
@property (nonatomic, readonly) unsigned long long elementType;
@property (nonatomic, readonly) SKUIEntityProviderListViewElement *entityProviderList;
@property (nonatomic, readonly, copy) NSArray *features;
@property (getter=isImpressionable, nonatomic) bool impressionable;
@property (nonatomic, readonly) NSDictionary *impressionableAttributes;
@property (nonatomic, readonly, retain) NSString *itmlID;
@property (nonatomic, retain) NSMutableDictionary *metadataDict;
@property (nonatomic) IKViewElement *parent;
@property (nonatomic, readonly) <IKStyleableElement> *parentStyleableElement;
@property (nonatomic, readonly, retain) IKViewElementStyle *style;
@property (nonatomic, retain) IKViewElementStyleComposer *styleComposer;
@property (nonatomic) unsigned long long updateType;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (unsigned long long)evaluateElementUpdateTypeAndReset:(id)arg1;
+ (bool)shouldParseChildDOMElement:(id)arg1;
+ (bool)shouldParseChildDOMElements;
+ (id)supportedFeatures;

- (void).cxx_destruct;
- (void)_appDocumentDidMarkStylesDirty:(id)arg1;
- (void)_applyUpdatesToChildrenWithElements:(id)arg1;
- (void)_reorderAndUpdateChildrenWithElements:(id)arg1;
- (void)_resetUpdates;
- (void)_setAppDocument:(id)arg1;
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
- (void)dealloc;
- (id)debugDescription;
- (bool)didUpdateAutoHighlightIdentifier;
- (void)dispatchEvent:(id)arg1 eventAttribute:(id)arg2 canBubble:(bool)arg3 isCancelable:(bool)arg4 extraInfo:(id)arg5 completionBlock:(id /* block */)arg6;
- (void)dispatchEventOfType:(unsigned long long)arg1 canBubble:(bool)arg2 isCancelable:(bool)arg3 extraInfo:(id)arg4 completionBlock:(id /* block */)arg5;
- (id)elementID;
- (id)elementName;
- (unsigned long long)elementType;
- (id)features;
- (id)impressionableAttributes;
- (id)init;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isDisabled;
- (bool)isImpressionable;
- (id)itmlID;
- (id)metadataDict;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)parent;
- (id)parentStyleableElement;
- (void)resetProperty:(unsigned long long)arg1;
- (void)setActiveSingularEvents:(id)arg1;
- (void)setAppDocument:(id)arg1;
- (void)setAutoHighlightIdentifier:(id)arg1;
- (void)setChildren:(id)arg1;
- (void)setDidUpdateAutoHighlightIdentifier:(bool)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setImpressionable:(bool)arg1;
- (void)setMetadataDict:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setParent:(id)arg1;
- (void)setStyleComposer:(id)arg1;
- (void)setUpdateType:(unsigned long long)arg1;
- (void)setViewElementUpdateType:(unsigned long long)arg1;
- (id)style;
- (id)styleComposer;
- (unsigned long long)updateType;

// Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount

- (unsigned long long)vsa_elementType;
- (id)vsa_itemElementsOfType:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

- (id)entityProviderList;

@end