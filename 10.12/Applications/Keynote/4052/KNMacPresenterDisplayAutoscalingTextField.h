//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

#import "KNMacPresenterDisplayViewLayoutHints-Protocol.h"

@class NSString;

@interface KNMacPresenterDisplayAutoscalingTextField : NSTextField <KNMacPresenterDisplayViewLayoutHints>
{
}

+ (id)autoscalingTextField;
+ (Class)cellClass;
- (id)hitTest:(struct CGPoint)arg1;
- (void)p_invalidateSelectionContentInsets;
- (struct NSEdgeInsets)scaledSelectionContentInsetsForScaledSize:(struct CGSize)arg1;
- (BOOL)shouldOnlyResizeProportionally;
- (void)setStringValue:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)p_commonInitAutoscalingTextField;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

