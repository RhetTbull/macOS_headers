//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import "ECItemListItem-Protocol.h"

@class ECItemListLabelLayer;

@interface ECItemListItemLayer : CALayer <ECItemListItem>
{
    _Bool _highlighted;
    _Bool _needsUpdate;
    CALayer *_imageLayer;
    ECItemListLabelLayer *_labelLayer;
    CALayer *_highlightLayer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(readonly, nonatomic) CALayer *highlightLayer; // @synthesize highlightLayer=_highlightLayer;
@property(readonly, nonatomic) ECItemListLabelLayer *labelLayer; // @synthesize labelLayer=_labelLayer;
@property(readonly, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
- (void)setContentFromDataSource:(id)arg1 atIndex:(unsigned long long)arg2 withItemInfo:(id)arg3;
- (void)layout;
- (id)_maskLayerForHighlight;
- (struct CGRect)_frameForHighlight;
- (id)initWithScaleFactor:(float)arg1;

@end

