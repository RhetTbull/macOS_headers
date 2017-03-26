//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TSCHChartDrawableInfo, TSDImageFill;

@interface TSCHImageContainerHint : NSObject
{
    TSCHChartDrawableInfo *mChartDrawableInfo;
    TSDImageFill *mImageFill;
    NSArray *mPairs;
}

@property(readonly, nonatomic) NSArray *pairs; // @synthesize pairs=mPairs;
@property(readonly, nonatomic) TSDImageFill *imageFill; // @synthesize imageFill=mImageFill;
@property(readonly, nonatomic) TSCHChartDrawableInfo *chartDrawableInfo; // @synthesize chartDrawableInfo=mChartDrawableInfo;
- (void)dealloc;
- (id)tuplesForReplacingImageDataWithNewData:(id)arg1 styleState:(id)arg2;
- (void)addSemanticTagAndPropertyPair:(id)arg1;
- (id)initWithDrawableInfo:(id)arg1 imageFill:(id)arg2 pairs:(id)arg3;

@end

