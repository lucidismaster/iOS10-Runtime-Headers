/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKImageMediaObject : CKMediaObject {
    NSURL * _appendedBundleURL;
    CKImageData * _backgroundImageData;
    CKImageData * _imageData;
    bool  _isIrisAsset;
    struct CGSize { 
        double width; 
        double height; 
    }  _originalSize;
    UIImage * _thumbnail;
}

@property (nonatomic, readonly) CKImageData *imageData;
@property (nonatomic) bool isIrisAsset;
@property (nonatomic, retain) UIImage *thumbnail;

+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
+ (id)attachmentSummary:(unsigned long long)arg1;
+ (id)fallbackFilenamePrefix;
+ (Class)imageDataClass;
+ (bool)isPreviewable;

- (void).cxx_destruct;
- (id)_getIrisBundleURL;
- (id)_getIrisVideoPath;
- (id)_getTempIrisBundleLocation;
- (id)_getTempIrisFolder;
- (void)_removeAppendedBundle;
- (struct CGSize { double x1; double x2; })bbSize;
- (bool)canExport;
- (void)dealloc;
- (void)export:(id)arg1;
- (id)generateThumbnailFillToSize:(struct CGSize { double x1; double x2; })arg1 contentAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)imageData;
- (id)initWithTransfer:(id)arg1;
- (bool)isIrisAsset;
- (id)location;
- (int)mediaType;
- (struct CGSize { double x1; double x2; })originalSize;
- (id)pasteboardItem;
- (id)previewItemTitle;
- (id)previewItemURL;
- (void)setIsIrisAsset:(bool)arg1;
- (void)setThumbnail:(id)arg1;
- (id)thumbnail;

@end