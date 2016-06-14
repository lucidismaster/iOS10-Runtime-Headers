/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABValuePredicate : ABPredicate {
    long long  _comparison;
    bool  _dictionaryValue;
    NSArray * _orderedKeys;
    int  _property;
    <NSObject> * _value;
}

@property (nonatomic) long long comparison;
@property (nonatomic) int property;
@property (nonatomic, copy) NSObject *value;

+ (id)stringForComparison:(id)arg1 withComparision:(long long)arg2;

- (bool)_allowsLaxCheckingForFTS;
- (id)_ftsAllQueryStrings;
- (id)_ftsTermStringForString:(id)arg1;
- (id)_ftsTokenizedTermStringForString:(id)arg1;
- (bool)_shouldConsultIndexForKey:(id)arg1;
- (bool)_supportsFTSSearch;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (long long)comparison;
- (void)dealloc;
- (id)init;
- (bool)isValid;
- (id)predicateFormat;
- (int)property;
- (id)queryJoinsInCompound:(bool)arg1 predicateIdentifier:(int)arg2;
- (id)querySelectPropertiesForPredicateIdentifier:(int)arg1;
- (id)queryWhereStringForPredicateIdentifier:(int)arg1;
- (void)setComparison:(long long)arg1;
- (void)setProperty:(int)arg1;
- (void)setValue:(id)arg1;
- (id)stringForComparison:(id)arg1;
- (id)value;

@end