//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface VCPICImageTools : NSObject
{
}

+ (int)createRGB8BufferFrom420Y8BiPlanarBuffer:(void *)arg1 withBytesPerRowLuma:(unsigned long long)arg2 andFrom420CbCr8Buffer:(void *)arg3 withBytesPerRowChroma:(unsigned long long)arg4 andWithWidth:(int)arg5 andWithHeight:(int)arg6 andAlphaFirst:(_Bool)arg7 toRGB8Buffer:(void *)arg8 withBytesPerRowDst:(unsigned long long)arg9;
+ (int)createRGB8BufferFrom420Y8PlanarBuffer:(void *)arg1 withBytesPerRowY:(unsigned long long)arg2 andFrom420Cb8Buffer:(void *)arg3 withBytesPerRowCb:(unsigned long long)arg4 andFrom420Cr8Buffer:(void *)arg5 withBytesPerRowCr:(unsigned long long)arg6 andWithWidth:(int)arg7 andWithHeight:(int)arg8 andAlphaFirst:(_Bool)arg9 toRGB8Buffer:(void *)arg10 withBytesPerRowDst:(unsigned long long)arg11;
+ (int)create420YCbCr8BufferFromRGB8Buffer:(void *)arg1 withWidth:(int)arg2 andWithHeight:(int)arg3 andWithBytesPerRow:(unsigned long long)arg4 andAlphaFirst:(_Bool)arg5 toLumaBuffer:(void *)arg6 withBytesPerRowLuma:(unsigned long long)arg7 andToChromaBuffer:(void *)arg8 withBytesPerRowChroma:(unsigned long long)arg9;
+ (int)create420YCbCr8BufferFromPlanar8Buffer:(void *)arg1 withWidth:(int)arg2 andWithHeight:(int)arg3 andWithBytesPerRow:(unsigned long long)arg4 toLumaBuffer:(void *)arg5 withBytesPerRowLuma:(unsigned long long)arg6 andToChromaBuffer:(void *)arg7 withBytesPerRowChroma:(unsigned long long)arg8;
+ (int)extractLumaFromBGRA8Buffer:(void *)arg1 withWidth:(int)arg2 andWithHeight:(int)arg3 andWithBytesPerRow:(unsigned long long)arg4 toBuffer:(void *)arg5 withBytesPerRow:(unsigned long long)arg6;
+ (struct vImage_Buffer)getVImageBufferFromCVPixelBuffer:(struct __CVBuffer *)arg1 channel:(int)arg2 error:(id *)arg3;
+ (id)saveRawBuffer:(void *)arg1 withWidth:(unsigned int)arg2 andHeight:(unsigned int)arg3 andRowBytes:(unsigned int)arg4 withName:(id)arg5 inFolder:(id)arg6 error:(id *)arg7;
+ (id)saveVImageBufferRGBA8:(const struct vImage_Buffer *)arg1 withName:(id)arg2 inFolder:(id)arg3 error:(id *)arg4;
+ (id)saveVImageBufferPlanar8:(const struct vImage_Buffer *)arg1 withName:(id)arg2 inFolder:(id)arg3 error:(id *)arg4;
+ (id)saveCVPixelBuffer420YpCbCr8:(struct __CVBuffer *)arg1 withName:(id)arg2 inFolder:(id)arg3 error:(id *)arg4;
+ (id)saveCVPixelBufferRGBA8:(struct __CVBuffer *)arg1 withName:(id)arg2 inFolder:(id)arg3 error:(id *)arg4;
+ (id)saveCVPixelBufferPlane8:(int)arg1 from:(struct __CVBuffer *)arg2 withName:(id)arg3 inFolder:(id)arg4 error:(id *)arg5;
+ (struct __CVBuffer *)loadCVPixelBuffer420YpCbCr8FromURL:(id)arg1 error:(id *)arg2;
+ (struct __CVBuffer *)loadCVPixelBufferARGB8FromURL:(id)arg1 error:(id *)arg2;
+ (struct vImage_Buffer *)loadVImageBufferFromURL:(id)arg1 lumaOnly:(BOOL)arg2 error:(id *)arg3;
+ (void *)loadRawBufferFromURL:(id)arg1 width:(unsigned int *)arg2 height:(unsigned int *)arg3 rowBytes:(unsigned int *)arg4 error:(id *)arg5;
+ (struct CGImage *)loadCGImageFromURL:(id)arg1 error:(id *)arg2;
+ (id)createErrorWithCode:(int)arg1 andMessage:(id)arg2;
+ (struct __CFString *)guessType:(id)arg1;

@end

