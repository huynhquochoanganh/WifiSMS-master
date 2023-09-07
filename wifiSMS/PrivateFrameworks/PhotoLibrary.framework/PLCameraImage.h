/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIImage, MLPhotoDCFFileGroup;



@interface PLCameraImage : MLPhoto <MLPhotoBakedThumbnailsDelegate>
{
    MLPhotoDCFFileGroup *_fileGroup;
    NSInteger _photoType;
    UIImage *_thumbnailImage;
    BOOL _hasJPEGData;
    double _duration;
    unsigned int _didSetHasJPEGData : 1;
    unsigned int _didSetDuration : 1;
}

@property(readonly) NSString *title;

+ (void)setMaxImageSize:(NSInteger)arg1;
+ (NSInteger)imageIDForFileGroup:(id)arg1;

- (id)initWithDCFFileGroup:(id)arg1;
- (void)checkForVideoFile;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)fileGroup;
- (void)fileGroupWillBeginSaving:(id)arg1;
- (void)fileGroupDidFinishSaving:(id)arg1 jobType:(id)arg2;
- (NSInteger)compare:(id)arg1;
- (BOOL)isVideo;
- (BOOL)isAudio;
- (BOOL)hasFullSizeJPEGData;
- (id)fullSizeJPEGPath;
- (id)description;
- (void)setThumbnailImage:(id)arg1;
- (id)thumbnailImage;
- (id)title;
- (struct CGImage { }*)_createCGImageForFormat:(NSInteger)arg1 orientation:(NSInteger*)arg2 ignoringSizeCaps:(BOOL)arg3 properties:(const struct __CFDictionary {}**)arg4;
- (struct CGImage { }*)createFullScreenCGImageRef:(NSInteger*)arg1 properties:(const struct __CFDictionary {}**)arg2;
- (struct CGImage { }*)createFullSizeCGImageRef:(NSInteger*)arg1;
- (struct CGImage { }*)createFullSizeCGImageRefForImagePickerClient:(NSInteger*)arg1;
- (struct CGImage { }*)createLowResolutionFullScreenCGImageRef;
- (BOOL)hasFullSizeImage;
- (void)deleteFiles;
- (double)duration;
- (void)saveBakedVideoThumbnail;
- (void)decorateThumbnail:(id)arg1 inContext:(struct CGContext { }*)arg2;

@end
