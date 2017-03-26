//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSUImage.h"

@interface TSUCGImage : TSUImage
{
    struct CGImage *mCGImage;
    int mOrientation;
    double mScale;
}

- (void)dealloc;
- (int)imageOrientation;
- (double)scale;
- (struct CGSize)size;
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1;
- (struct CGImage *)CGImage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(int)arg3;

@end

