//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableHeaderView.h>

#import "CALayerDelegate-Protocol.h"

@class NSString, NSView, TMAActivityLogViewController, TSDSmoothCATextLayer;

@interface TMAActivityLogHeaderView : NSTableHeaderView <CALayerDelegate>
{
    TMAActivityLogViewController *_viewController;
    NSView *_additionalView;
    TSDSmoothCATextLayer *_textLayer;
    double _defaultHeight;
    NSView *_toolTipView;
}

@property(retain, nonatomic) NSView *toolTipView; // @synthesize toolTipView=_toolTipView;
@property(nonatomic) double defaultHeight; // @synthesize defaultHeight=_defaultHeight;
@property(retain, nonatomic) TSDSmoothCATextLayer *textLayer; // @synthesize textLayer=_textLayer;
@property(retain, nonatomic) NSView *additionalView; // @synthesize additionalView=_additionalView;
@property(nonatomic) TMAActivityLogViewController *viewController; // @synthesize viewController=_viewController;
- (id)p_menu;
- (struct CGRect)p_normalBounds;
- (void)p_showMenu;
- (void)mouseDown:(id)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateContent;
- (void)viewDidChangeBackingProperties;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)p_navHeaderShadowColor;
- (id)p_navHeaderDividerColor;
- (id)p_navHeaderTextColor;
- (id)p_navHeaderBackgroudColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

