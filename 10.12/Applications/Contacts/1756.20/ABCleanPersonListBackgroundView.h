//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class ABColoredView, NSVisualEffectView;

@interface ABCleanPersonListBackgroundView : NSView
{
    NSVisualEffectView *_visualEffectView;
    ABColoredView *_coloredView;
    NSView *_contentView;
}

@property(retain) NSView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)showTranslucentBackground;
- (void)showColoredBackground;
- (void)setBackgroundMaterial:(long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)applyInitialConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

