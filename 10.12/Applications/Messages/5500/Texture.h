//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CIImage, QCImage;

@interface Texture : NSObject
{
    struct __CVBuffer *_sourceBuffer;
    struct __CVBuffer *_texture;
    QCImage *_qcImage;
    CIImage *_ciImage;
    BOOL _mirrored;
    BOOL _replacementVideo;
}

+ (id)textureWithCVImageBuffer:(struct __CVBuffer *)arg1;
+ (BOOL)useCoreImage;
+ (void)flushCache;
+ (struct __CVOpenGLTextureCache *)sharedTextureCache;
@property BOOL mirrored; // @synthesize mirrored=_mirrored;
- (void)drawInCIContext:(id)arg1 textureRect:(struct CGRect)arg2 inRect:(struct CGRect)arg3 flags:(int)arg4;
- (void)drawInCIContext:(id)arg1 userId:(id)arg2 inRect:(struct CGRect)arg3 flags:(int)arg4;
- (void)drawInContext:(struct _CGLContextObject *)arg1 textureRect:(struct CGRect)arg2 inRect:(struct CGRect)arg3 flags:(int)arg4;
- (void)drawInContext:(struct _CGLContextObject *)arg1 userId:(id)arg2 inRect:(struct CGRect)arg3 flags:(int)arg4;
- (struct CGRect)sizeOfFrameWithUserId:(id)arg1 flags:(int)arg2;
- (id)attachments;
- (double)time;
- (float)gamma;
- (struct CGRect)userRect:(id)arg1;
- (struct CGRect)userRect:(id)arg1 auxVideo:(BOOL)arg2;
- (BOOL)isReplacementVideo;
- (void)setReplacementVideo:(BOOL)arg1;
- (BOOL)hasAuxVideoFrame;
- (id)userIds;
- (id)_auxVideoUserFrame;
- (id)_userFrameForId:(id)arg1;
- (id)_userFrames;
@property(readonly) CIImage *displayImage;
- (struct CGRect)textureRect;
- (BOOL)_isFlipped;
- (unsigned int)name;
- (unsigned int)target;
- (id)qcImage;
- (id)CVOpenGLTextureObj;
@property(readonly) struct __CVBuffer *sourceImage;
- (void)dealloc;
- (id)initWithCVImageBuffer:(struct __CVBuffer *)arg1;

@end

