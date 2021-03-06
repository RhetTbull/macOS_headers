//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TUpdateLayerView.h"

#import "NSAccessibilityProgressIndicator-Protocol.h"

@class NSImageView, NSString, TPieChartProgressLayer;

@interface TInlineProgressView : TUpdateLayerView <NSAccessibilityProgressIndicator>
{
    TPieChartProgressLayer *_pieChartLayer;
    NSImageView *_templateImageView;
    _Bool _dimmed;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;
- (id)accessibilityMaxValue;
- (id)accessibilityMinValue;
- (id)accessibilityValue;
- (void)setProgressDidCompleteHandler:(const function_d3afe2e2 *)arg1;
@property(readonly, nonatomic) _Bool isProgressAnimationCompleted; // @dynamic isProgressAnimationCompleted;
@property(nonatomic) double animationDuration; // @dynamic animationDuration;
@property(nonatomic) double progress; // @dynamic progress;
- (void)updateLayer;
- (void)viewDidChangeBackingProperties;
- (struct CGSize)intrinsicContentSize;
- (void)layout;
- (void)initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

