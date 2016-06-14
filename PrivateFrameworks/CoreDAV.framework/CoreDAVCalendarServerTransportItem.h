/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVCalendarServerTransportItem : CoreDAVItem {
    CoreDAVLeafItem * _apsBundleID;
    CoreDAVLeafItem * _apsEnv;
    CoreDAVLeafItem * _courierServer;
    CoreDAVLeafItem * _refreshInterval;
    CoreDAVItemWithHrefChildItem * _subscriptionURL;
    CoreDAVItemWithHrefChildItem * _tokenURL;
    CoreDAVLeafItem * _xmppServer;
    CoreDAVLeafItem * _xmppURI;
}

@property (nonatomic, retain) CoreDAVLeafItem *apsBundleID;
@property (nonatomic, retain) CoreDAVLeafItem *apsEnv;
@property (nonatomic, retain) CoreDAVLeafItem *courierServer;
@property (nonatomic, retain) CoreDAVLeafItem *refreshInterval;
@property (nonatomic, retain) CoreDAVItemWithHrefChildItem *subscriptionURL;
@property (nonatomic, retain) CoreDAVItemWithHrefChildItem *tokenURL;
@property (nonatomic, retain) CoreDAVLeafItem *xmppServer;
@property (nonatomic, retain) CoreDAVLeafItem *xmppURI;

+ (id)copyParseRules;

- (id)apsBundleID;
- (id)apsEnv;
- (id)courierServer;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)refreshInterval;
- (void)setApsBundleID:(id)arg1;
- (void)setApsEnv:(id)arg1;
- (void)setCourierServer:(id)arg1;
- (void)setRefreshInterval:(id)arg1;
- (void)setSubscriptionURL:(id)arg1;
- (void)setTokenURL:(id)arg1;
- (void)setXmppServer:(id)arg1;
- (void)setXmppURI:(id)arg1;
- (id)subscriptionURL;
- (id)tokenURL;
- (id)xmppServer;
- (id)xmppURI;

@end