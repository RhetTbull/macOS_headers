//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CLgUnilibView.h"

@class CLgTransportBarView;

@interface CLgUnilibTransportView : CLgUnilibView
{
    CLgTransportBarView *traspBarView;
}

- (struct CGSize)sizeForOptions:(id)arg1;
- (id)viewRightOptionsArray;
- (id)viewLeftOptionsArray;
- (id)displayOptionsArray;
- (id)modesOptionsArray;
- (id)transportOptionsArray;
- (int)numberOfTransportButtonStatesForTransportBtnID:(int)arg1;
- (int)transportButtonStateForTransportBtnID:(int)arg1;
- (BOOL)setTransportButtonState:(int)arg1 enabled:(BOOL)arg2 forTranspBtnID:(int)arg3;
- (void)popupMenuItemCall:(id)arg1 forTranspBtnID:(int)arg2;
- (int)doCreatePopupMenu:(id)arg1 forTranspBtnID:(int)arg2;
- (double)controlRoomLevel;
- (void)controlRoomLevelChanged:(double)arg1;
- (id)controlRoomLevelTooltipString:(double)arg1;
- (void)updateRecordButton;
- (void)updateControlRoomLevel;
- (BOOL)useSmpteViewOffset;
- (void)setUseSmpteViewOffset:(BOOL)arg1;
- (int)displayMode;
- (void)setDisplayMode:(int)arg1;
- (void)openPositionHudCall:(BOOL)arg1;
- (BOOL)acceptsFirstResponder;
- (void)transportViewChangedSize;
- (void)transportViewLayoutChanged;
- (void)populateModeMenu:(id)arg1 modesOnly:(BOOL)arg2;
- (void)useSmpteViewOffsetAction:(id)arg1;
- (void)transportOpenGiantAction:(id)arg1;
- (void)transportDisplayModeAction:(id)arg1;
- (void)addAllowedTranspBtnID:(int)arg1 toArray:(id)arg2;
- (void)transportButtonAction:(id)arg1;
- (BOOL)transportButtonAllowed:(int)arg1;
- (id)windowTitle;
- (void)setTransportBarView:(id)arg1;
- (BOOL)isOpaque;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

