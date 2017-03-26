//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTTableAnimationTask.h"

@class CALayer, TSUImage;

@interface TSTTableRowColMoveAnimation : TSTTableAnimationTask
{
    long long mCommandDirection;
    unsigned short mNumberOfRowCols;
    struct CGPoint mPosition;
    TSUImage *mImage;
    struct CGRect mImageBounds;
    CALayer *mLayer;
    BOOL mUpLeftValid;
    BOOL mLoRightValid;
}

@property(nonatomic) unsigned short numberOfRowCols; // @synthesize numberOfRowCols=mNumberOfRowCols;
@property(readonly, nonatomic) BOOL loRightValid; // @synthesize loRightValid=mLoRightValid;
@property(readonly, nonatomic) BOOL upLeftValid; // @synthesize upLeftValid=mUpLeftValid;
- (void)finishAnimation:(id)arg1;
- (id)getLayer;
- (BOOL)hasLayer;
- (void)animationDidStopWorker:(id)arg1 finished:(BOOL)arg2;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)installLoRightCellRange;
- (void)installUpLeftCellRange;
- (void)teardownAnimation;
- (void)startAnimationOfDistance:(struct CGSize)arg1 animateUpLeft:(BOOL)arg2;
- (void)teardown;
- (void)dealloc;
- (id)initWithDirector:(id)arg1 observer:(id)arg2 tableRep:(id)arg3 cellRange:(struct TSUCellRect)arg4 visibleRange:(struct TSUCellRect)arg5 direction:(long long)arg6 scaleTransform:(struct CGAffineTransform)arg7;

@end

