//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CLgFocusHandlerView.h"

@class CLgControlHandler, CLgControlHandlerData, NSArray;

@interface CLgUnilibFocusView : CLgFocusHandlerView
{
    CLgControlHandler *_controlHandler;
    CLgControlHandlerData *_controlHandlerData;
    id _scrollStateObserver;
}

+ (void)setClickedUnilibView:(id)arg1;
@property(nonatomic) id scrollStateObserver; // @synthesize scrollStateObserver=_scrollStateObserver;
- (BOOL)isOnVolumeFader:(struct CGPoint)arg1;
- (void)setInFocusDueToControlAction;
- (void)rebuildControlHeaderForListAreaHeaderView:(id)arg1 footerView:(id)arg2 geometryType:(long long)arg3;
- (void)rebuildControlHeaderForHeaderView:(id)arg1;
- (void)updateControlHeader1:(id)arg1;
@property(readonly, nonatomic) double editorWidthBound;
- (void)createControlHandlerForGenwHeaderView:(id)arg1 andFooterView:(id)arg2 windowClass:(unsigned short)arg3;
- (void)createControlHandlerForHeaderView:(id)arg1 andFooterView:(id)arg2 geometryType:(long long)arg3;
- (void)createControlHandlerForHeaderView:(id)arg1;
- (void)viewVisibilityChangePriv:(BOOL)arg1;
@property(readonly, nonatomic) NSArray *allCallIDs;
- (void)rebuildControl:(id)arg1 forCallID:(long long)arg2;
- (void)setOneControlEnabled:(BOOL)arg1 forCallID:(long long)arg2 andIndex:(long long)arg3;
- (BOOL)oneControlEnabledForCallID:(long long)arg1 andIndex:(long long)arg2;
- (void)setControlEnabled:(BOOL)arg1 forCallID:(long long)arg2;
- (BOOL)controlEnabledForCallID:(long long)arg1;
- (id)viewWithCallID:(long long)arg1;
- (id)oneValueForCallID:(long long)arg1 andIndex:(long long)arg2;
- (void)setOneValue:(id)arg1 forCallID:(long long)arg2 andIndex:(long long)arg3;
- (id)valueForCallID:(long long)arg1;
- (void)setValue:(id)arg1 forCallID:(long long)arg2;
- (long long)valueArrayLengthForCallID:(long long)arg1;
- (BOOL)acceptsFirstResponder;
- (void)controlActionCall:(id)arg1;
- (id)createFooterControls;
- (id)createHeaderControls;
- (id)controlCreatorName;
- (void)doBuildEditMenu:(id)arg1;
- (void)popupMenuItemCall:(id)arg1 forHeaderBtnCallID:(long long)arg2;
- (int)doCreatePopupMenu:(id)arg1 forHeaderBtnCallID:(long long)arg2;
- (void)localMenuItemCall:(id)arg1;
- (void)doUpdateLocalMenu:(id)arg1;
- (id)sampleVolumeLevelTooltipString:(double)arg1;
@property(readonly, nonatomic) double minViewHeight;
@property(readonly, nonatomic) double maxViewHeight;
- (void)waveformSliderValueChanged:(double)arg1;
- (double)waveformSliderValue;
- (void)waveformButtonValueChanged:(long long)arg1;
@property(nonatomic) BOOL markerListTextIsCollapsed;
- (void)setBookButtonState:(BOOL)arg1;
- (void)setTextViewEnabled:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setTypingAttributes:(id)arg1;
- (void)setAttributedString:(id)arg1;
- (void)markerText_setBackgroundColor:(id)arg1;
- (void)markerText_setAttributedString:(id)arg1 asFirstChange:(BOOL)arg2;
- (void)toggleCatchPlayhead;
- (void)changeOfVerticalZoomValue:(double)arg1 fixedAt:(int)arg2;
- (void)changeOfHorizontalZoomValue:(double)arg1 fixedAt:(int)arg2;
- (void)scrollMechanismNotSupported;
- (void)dealloc;
- (id)controlHandler;
- (id)initWithFrame:(struct CGRect)arg1;

@end

