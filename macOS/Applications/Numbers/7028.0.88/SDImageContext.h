//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableData, NSString;

@interface SDImageContext : NSObject
{
    NSString *mImageType;
    struct CGContext *mImageContext;
    NSData *mFinalData;
    NSMutableData *mPdfData;
    char *mBitmapData;
    int mBytesPerRow;
    unsigned long long mWidth;
    unsigned long long mHeight;
}

- (id)finalData;
- (struct CGContext *)context;
- (void)dealloc;
- (void)_closeContext;
- (id)initWithBounds:(struct CGRect)arg1 type:(id)arg2;

@end

