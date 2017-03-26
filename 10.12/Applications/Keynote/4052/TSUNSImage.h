//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSUImage.h"

@class NSImage;

@interface TSUNSImage : TSUImage
{
    NSImage *mNSImage;
    double mScale;
}

+ (id)imageNamed:(id)arg1;
- (void)dealloc;
- (id)NSImage;
- (struct CGImage *)p_CGImageForGraphicsContext:(id)arg1 size:(struct CGSize)arg2;
- (id)stretchedImageOfSize:(struct CGSize)arg1 leftCapWidth:(double)arg2 rightCapWidth:(double)arg3 topCapHeight:(double)arg4 bottomCapHeight:(double)arg5;
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1;
- (struct CGImage *)CGImageForContentsScale:(double)arg1;
- (struct CGImage *)CGImage;
- (struct CGSize)size;
- (int)imageOrientation;
- (double)scale;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithNSImage:(id)arg1;
- (id)compositedImageWithColor:(id)arg1 alpha:(double)arg2 blendMode:(int)arg3;

@end

