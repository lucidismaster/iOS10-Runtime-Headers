/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLGenerationalRowCache : NSObject {
    int  _lock;
    NSSQLRowCache * _primaryCache;
    NSMutableDictionary * _rowCachesByGenerationToken;
}

- (void)dealloc;
- (void)forgetAllExternalData;
- (id)initWithSQLCore:(id)arg1;
- (void)removeRowCacheForGeneration:(id)arg1;
- (id)rowCacheForGeneration:(id)arg1;

@end