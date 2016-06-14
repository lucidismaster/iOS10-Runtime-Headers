/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonTableViewLinkingDelegate : NSObject <ABPersonLinkingUIDelegate> {
    bool  _appearsInLinkingPeoplePicker;
    long long  _currentIndexInLinkedInfos;
    ABPersonTableViewDataSource * _dataSource;
    bool  _hasLinkChanges;
    ABPersonViewControllerHelper * _helper;
    bool  _ignoresReloadLinkedInfos;
    NSMutableArray * _linkedInfos;
    bool  _shouldAllowLinkingAnotherContact;
    bool  _shouldShowLinkingUIOnCard;
    bool  _showsLinkedPeople;
    bool  _updateShouldAllowLinkingAnotherContact;
}

@property (nonatomic) bool appearsInLinkingPeoplePicker;
@property (nonatomic) ABPersonTableViewDataSource *dataSource;
@property (nonatomic, readonly) bool hasLinkChanges;
@property (nonatomic, readonly) ABPersonViewControllerHelper *helper;
@property (nonatomic, readonly) NSArray *linkedInfos;
@property (nonatomic) bool shouldShowLinkedPeople;
@property (nonatomic) bool shouldShowLinkingUIOnCard;
@property (nonatomic) bool updateShouldAllowLinkingAnotherContact;

- (void)_finalizeLinkChanges;
- (id)allNonUnifiedPeople;
- (bool)appearsInLinkingPeoplePicker;
- (bool)canUnlinkCardAtRow:(long long)arg1;
- (id)dataSource;
- (void)dealloc;
- (void)forceUseLinkedInfos:(id)arg1 currentIndexInLinkedInfos:(long long)arg2;
- (bool)hasLinkChanges;
- (id)helper;
- (long long)indexOfLinkedInfoAtRow:(long long)arg1;
- (id)initWithHelper:(id)arg1;
- (bool)isLinkedCard;
- (id)linkedInfoAtRow:(long long)arg1;
- (id)linkedInfos;
- (bool)manuallyLinkPerson:(id)arg1;
- (bool)manuallyUnlinkCardAtRow:(long long)arg1;
- (id)newLinkedInfoForPerson:(id)arg1;
- (id)newPeoplePickerForLinking;
- (id)newPersonViewControllerForLinkedCardAtRow:(long long)arg1;
- (long long)numberOfLinkedCardRows;
- (id)personNameForCardAtRow:(long long)arg1;
- (bool)reloadLinkedInfos;
- (void)reloadLinkingUI;
- (void)setAppearsInLinkingPeoplePicker:(bool)arg1;
- (void)setDataSource:(id)arg1;
- (void)setShouldShowLinkedPeople:(bool)arg1;
- (void)setShouldShowLinkingUIOnCard:(bool)arg1;
- (void)setUpdateShouldAllowLinkingAnotherContact:(bool)arg1;
- (bool)shouldAllowLinkingAnotherContact;
- (bool)shouldAllowLinkingPersonWithRecordID:(int)arg1;
- (bool)shouldIncludeLinkingUISectionWhenEditing:(bool)arg1;
- (bool)shouldShowLinkedPeople;
- (bool)shouldShowLinkingUIOnCard;
- (id)sourceNameForCardAtRow:(long long)arg1;
- (id)sourceNameForCurrentCard;
- (bool)updateShouldAllowLinkingAnotherContact;

@end