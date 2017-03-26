//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDNoDefaultImplicitActionLayer.h"

@interface TSDTilingTileLayer : TSDNoDefaultImplicitActionLayer
{
    unsigned long long mIndex;
    BOOL mNeedsTileDisplay;
    CDStruct_73b5d383 mLocation;
}

@property(nonatomic) CDStruct_4bcfbbae location; // @synthesize location=mLocation;
@property(nonatomic) BOOL needsTileDisplay; // @synthesize needsTileDisplay=mNeedsTileDisplay;
@property(nonatomic) unsigned long long index; // @synthesize index=mIndex;
- (id)tileContentsLayer;
- (void)setNeedsDisplayInRectIgnoringBackground:(struct CGRect)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)updateFrameWithTileSize:(struct CGSize)arg1 tilesWide:(unsigned long long)arg2 tilesHigh:(unsigned long long)arg3;
- (id)hitTest:(struct CGPoint)arg1;
- (void)cancelLayoutForTilingLayers;
- (void)setNeedsLayoutForTilingLayers;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)display;

@end

