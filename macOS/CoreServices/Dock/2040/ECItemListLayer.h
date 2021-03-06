//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSArray, NSMutableArray, NSObject;
@protocol ECLayerSource><ECEventHandlingDelegate, OS_dispatch_source;

@interface ECItemListLayer : CALayer
{
    NSMutableArray *_itemLayers;
    NSObject<OS_dispatch_source> *_animationTimer;
    double _startTime;
    double _startValue;
    double _endValue;
    double _duration;
    float _scaleFactor;
    _Bool _snapToSize;
    _Bool _isScrolling;
    _Bool _autoCalcSizes;
    _Bool _scrollingLeft;
    _Bool _scrollingRight;
    float _startOffset;
    unsigned long long _numberOfItems;
    id <ECLayerSource><ECEventHandlingDelegate> _layerSource;
    CALayer *_itemsLayer;
    CALayer *_clipLayer;
    unsigned long long _maximumVisibleItems;
    struct CGPoint _scrollPosition;
    struct _NSRange _itemRange;
}

@property(nonatomic) _Bool scrollingRight; // @synthesize scrollingRight=_scrollingRight;
@property(nonatomic) _Bool scrollingLeft; // @synthesize scrollingLeft=_scrollingLeft;
@property(nonatomic) _Bool autoCalcSizes; // @synthesize autoCalcSizes=_autoCalcSizes;
@property(nonatomic) struct _NSRange itemRange; // @synthesize itemRange=_itemRange;
@property(nonatomic) unsigned long long maximumVisibleItems; // @synthesize maximumVisibleItems=_maximumVisibleItems;
@property(retain, nonatomic) CALayer *clipLayer; // @synthesize clipLayer=_clipLayer;
@property(retain, nonatomic) CALayer *itemsLayer; // @synthesize itemsLayer=_itemsLayer;
@property(nonatomic) __weak id <ECLayerSource><ECEventHandlingDelegate> layerSource; // @synthesize layerSource=_layerSource;
@property(readonly, nonatomic) struct CGPoint scrollPosition; // @synthesize scrollPosition=_scrollPosition;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(nonatomic) _Bool snapToSize; // @synthesize snapToSize=_snapToSize;
@property(nonatomic) unsigned long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
@property(nonatomic) float startOffset; // @synthesize startOffset=_startOffset;
@property(readonly, nonatomic) NSArray *itemLayers; // @synthesize itemLayers=_itemLayers;
- (void).cxx_destruct;
- (void)_scrollAnimationStep;
- (struct CGPoint)_scrollPositionForValue:(double)arg1;
- (double)_scrollValueForPosition:(struct CGPoint)arg1;
- (void)_layoutItemLayers;
- (void)invalidate;
- (void)layout;
- (double)snappedPositionForPoint:(struct CGPoint)arg1;
- (struct CGPoint)actualPositionForItemIndex:(unsigned long long)arg1;
- (void)scrollToRect:(struct CGRect)arg1;
- (void)scrollToPoint:(struct CGPoint)arg1;
- (unsigned long long)indexOfItemLayer:(id)arg1;
- (id)itemLayerForIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) struct _NSRange visibleItemRange;
@property(readonly, nonatomic) struct CGRect visibleRect;
@property(nonatomic) double scrollValue;
@property(readonly, nonatomic) struct _NSRange actualItemRange;
@property(readonly, nonatomic) unsigned long long visibleWidth;
@property(readonly, nonatomic) unsigned long long itemHeight;
@property(readonly, nonatomic) unsigned long long itemWidth;
@property(readonly, nonatomic) unsigned long long totalWidth;
- (void)dealloc;
- (id)initWithLayerSource:(id)arg1 handler:(id)arg2 scaleFactor:(float)arg3;

@end

