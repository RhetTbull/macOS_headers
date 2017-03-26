//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <LunaKit/LKSplitView.h>

@class NSImage, PEPlayerContainerModule;

@interface PEPlayerContainerView : LKSplitView
{
    PEPlayerContainerModule *_playerContainerModule;
    BOOL _hasMedia;
    BOOL _hasEffect;
    NSImage *_shadowFacetImage;
}

- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)shadowFacetImage;
- (double)dividerThickness;
- (void)drawDividerInRect:(struct CGRect)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)_pasteboardHasEffect:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end

