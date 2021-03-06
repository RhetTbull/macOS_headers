//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCacheDelegate-Protocol.h"

@class CIContext, FCRFaceDetector, NSCountedSet, NSMutableArray, NSMutableDictionary, NSString, PBRenderer, QCOpenGLContext;

@interface RendererController : NSObject <NSCacheDelegate>
{
    QCOpenGLContext *_renderingContext;
    CIContext *_ciContext;
    PBRenderer *_normalRenderer;
    NSMutableDictionary *_rendererCache;
    NSMutableDictionary *_imageCache;
    NSMutableDictionary *_renderers;
    struct OpaqueVTPixelTransferSession *_transferSession;
    struct __CVPixelBufferPool *_pixelBufferPool;
    struct __CVPixelBufferPool *_previewPixelBufferPool;
    PBRenderer *_currentRenderer;
    NSCountedSet *_renderList;
    BOOL _previewRenderingPaused;
    BOOL _renderResolutionDependantEffectsFullSize;
    BOOL _shouldRecordCurrentRenderer;
    BOOL _receivedFirstFrame;
    struct __IOSurface *_IOSurfaceInUse;
    struct __CVOpenGLTextureCache *_inputTextureCache;
    unsigned int _fullPreviewFBO;
    unsigned int _fullTextureName;
    struct CGSize _fullTextureSize;
    unsigned int _miniPreviewFBO;
    unsigned int _miniTextureName;
    struct CGSize _miniTextureSize;
    BOOL _enableCVTextureCache;
    BOOL _bypassQCForNoEffect;
    BOOL _useCoreImageInput;
    BOOL _useCoreImageOutput;
    struct CGSize _maxRenderingSize;
    unsigned int _YUVProgramID;
    FCRFaceDetector *_faceDetector;
    NSMutableArray *_faces;
    NSMutableArray *_faceTrackingIDs;
}

+ (struct CGColorSpace *)faceDetectionColorSpace;
+ (id)sharedRendererController;
+ (id)normalComposition;
+ (id)minSupportedModelsForReflections;
+ (void)initialize;
- (void).cxx_destruct;
@property BOOL previewRenderingPaused; // @synthesize previewRenderingPaused=_previewRenderingPaused;
@property(readonly) QCOpenGLContext *renderingContext; // @synthesize renderingContext=_renderingContext;
@property(readonly) PBRenderer *normalRenderer; // @synthesize normalRenderer=_normalRenderer;
@property BOOL useCoreImageOutput;
@property BOOL useCoreImageInput;
@property BOOL bypassQCForNoEffect;
- (BOOL)enableCVTextureCache;
- (void)setEnableCVTextureCache:(BOOL)arg1;
- (void)setMaxRenderingSize:(struct CGSize)arg1;
- (BOOL)runningOnFastGPU;
- (BOOL)hardwareModelSupportsReflections;
- (id)imageForInputFrame:(struct __CVBuffer *)arg1 renderMode:(int)arg2;
- (void)updateFBOTextureForMode:(int)arg1 size:(struct CGSize)arg2 fbo:(unsigned int *)arg3 textureName:(unsigned int *)arg4;
- (void)setImage:(id)arg1 forIdentifier:(id)arg2;
- (id)imageForIdentifier:(id)arg1;
- (void)removeFromRenderList:(id)arg1;
- (void)addToRenderList:(id)arg1;
- (id)_dictionaryForFace:(id)arg1 imageSize:(struct CGSize)arg2;
- (id)_featuresInData:(id)arg1 width:(double)arg2 height:(double)arg3;
- (id)_createFaceCoreDataFromCIImage:(id)arg1 width:(unsigned long long *)arg2 height:(unsigned long long *)arg3;
- (void)_runFaceDetectionForFrame:(id)arg1;
- (void)newFrame:(struct __CVBuffer *)arg1 elapsedTime:(double)arg2;
- (BOOL)receivedFirstFrame;
- (struct CGSize)previewSizeForInputFrame:(struct __CVBuffer *)arg1;
- (struct CGSize)fullSizeForInputFrame:(struct __CVBuffer *)arg1;
- (struct CGSize)fullSizeForInputSize:(struct CGSize)arg1;
- (id)_renderImagesForIdentifier:(id)arg1 atTime:(double)arg2 recordFrame:(struct __CVBuffer *)arg3;
- (id)renderImagesForIdentifier:(id)arg1 atTime:(double)arg2;
@property(readonly) CIContext *ciContext;
- (id)rendererForIdentifier:(id)arg1;
- (id)rendererForExistingIdentifier:(id)arg1;
- (void)setColorSpace:(struct CGColorSpace *)arg1;
@property BOOL recording;
@property(retain) PBRenderer *currentRenderer;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

