//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface KNMacLightTableToolbarView : NSView
{
    NSView *mShadowView;
    BOOL mShadowVisible;
}

@property(nonatomic, getter=isShadowVisible) BOOL shadowVisible; // @synthesize shadowVisible=mShadowVisible;
- (struct NSEdgeInsets)alignmentRectInsets;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)p_updateShadowOpacity;
- (void)dealloc;
- (void)p_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

