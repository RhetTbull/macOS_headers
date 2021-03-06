//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PCColorView.h"

@class NSButton, NSImage, NSMutableArray, NSString, NSView, NSViewAnimation;

__attribute__((visibility("hidden")))
@interface PCDisclosableView : PCColorView
{
    BOOL isShown;
    struct CGSize sizeBeforeHidden;
    float hiddenHeight;
    BOOL resizesHorizontally;
    struct CGRect lastKnownDisclosedViewFrame;
    NSMutableArray *hiddenSubviews;
    NSView *nonretainedOriginalNextKeyView;
    NSView *nonretainedLastChildKeyView;
    NSView *disclosureLabel;
    NSButton *disclosureButton;
    NSView *disclosedView;
    NSViewAnimation *animation;
    NSImage *transitionImage;
    int animationType;
    NSImage *swapTransitionImageStart;
    NSImage *swapTransitionImageEnd;
    NSString *disclosureStateAutosaveName;
}

- (void)setFrameSize:(struct CGSize)arg1;
- (void)show:(id)arg1;
- (void)hide:(id)arg1;
- (void)toggleDisclosure:(id)arg1;
- (void)swapDisclosedView:(id)arg1;
- (void)setHiddenHeight:(float)arg1;
- (void)setResizesHorizontally:(BOOL)arg1;
- (void)setDisclosureStateAutosaveName:(id)arg1;
- (BOOL)resizesHorizontally;
- (float)widthForVisibleState:(BOOL)arg1;
- (float)hiddenHeight;
- (void)setIsShown:(BOOL)arg1;
- (BOOL)isShown;
- (id)disclosureStateAutosaveName;
- (id)disclosedView;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)acceptsFirstResponder;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)restoreAutoresizeMasks:(id)arg1 toViews:(id)arg2 restoreVisible:(BOOL)arg3;
- (void)changeSuperviewHeightBy:(float)arg1;
- (void)restoreKeyLoop;
- (void)unlinkKeyLoop;
- (void)setAnimationProgress:(float)arg1;
- (id)imageOfView:(id)arg1;

@end

