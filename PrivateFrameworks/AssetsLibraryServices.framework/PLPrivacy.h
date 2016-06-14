/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLPrivacy : NSObject {
    int  _authStatus;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSObject<OS_dispatch_queue> * _isolationQueue;
}

+ (id)sharedInstance;

- (bool)_isPhotosAccessAllowedWithScope:(long long)arg1 forceHandler:(bool)arg2 accessAllowedHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)init;
- (bool)isPhotoLibraryReadAccessAllowed;
- (bool)isPhotoLibrarySharingOrModificationAllowed;
- (void)isPhotosAccessAllowedWithScope:(long long)arg1 handler:(id /* block */)arg2;
- (bool)isPhotosAccessAllowedWithScope:(long long)arg1 promptIfNeededWithHandler:(id /* block */)arg2;
- (bool)isPhotosTCCAccessAllowed;
- (bool)isPhotosTCCAccessNotAllowed;
- (bool)isPhotosTCCAccessRestricted;
- (void)photoAccessPowersActive;
- (int)photosTCCAccessStatus;

@end