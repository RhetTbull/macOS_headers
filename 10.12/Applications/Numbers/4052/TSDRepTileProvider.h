//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDTileProvider.h"

@interface TSDRepTileProvider : TSDTileProvider
{
}

- (void)endDrawingOperation;
- (void)beginDrawingOperation;
- (void)drawTargetInLayer:(id)arg1 context:(struct CGContext *)arg2;
- (BOOL)canTargetDrawInParallel;
- (BOOL)isTargetOpaque;
- (id)initWithRep:(id)arg1;

@end

