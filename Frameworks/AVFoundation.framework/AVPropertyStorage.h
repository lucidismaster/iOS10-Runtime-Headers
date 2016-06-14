/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPropertyStorage : NSObject {
    NSMutableDictionary * _propertyStorage;
    NSObject<OS_dispatch_queue> * _storageAccessWorkQueue;
}

- (void)dealloc;
- (void)didAccessKVOForKey:(id)arg1;
- (void)finalize;
- (id)init;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 defaultObjectBlock:(id /* block */)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (bool)shouldUsePropertyStorageCacheForKey:(id)arg1;
- (void)willAccessKVOForKey:(id)arg1;

@end