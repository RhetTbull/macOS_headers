//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MAToolKit/MAKitButton.h>

#import "CLgPopupMenuHandler-Protocol.h"
#import "NSMenuDelegate-Protocol.h"

@class NSString, NSTrackingArea;

@interface CLgTransportButton : MAKitButton <CLgPopupMenuHandler, NSMenuDelegate>
{
    long long transportButtonState;
    long long backColumnIndex1;
    BOOL isWideBtn;
    BOOL shouldDelay;
    NSTrackingArea *_trackingArea;
}

+ (id)transportBtnChevronMenuTitleForID:(int)arg1;
+ (id)transportBtnQuickHelpIDForID:(int)arg1;
+ (id)transportBtnTooltipForID:(int)arg1;
+ (long long)transportBtnNumberOfStatesForID:(int)arg1;
+ (int)transportBtnTypeForID:(int)arg1;
+ (id)transportBtnImageForID:(int)arg1 state:(long long)arg2 asPressed:(BOOL)arg3 backColumnIndex:(long long)arg4 asWide:(BOOL)arg5 enabled:(BOOL)arg6;
+ (Class)cellClass;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
- (void)removeFromSuperview;
- (void)accessibilityPerformClick;
- (id)chevronMenuTitle;
- (long long)numberOfTransportButtonStates;
- (long long)transportButtonState;
- (BOOL)setTransportButtonStateImage:(long long)arg1 enabled:(BOOL)arg2;
- (void)setBackColumnIndex:(long long)arg1 asWide:(BOOL)arg2 enabled:(BOOL)arg3;
- (long long)backColumnIndex;
- (int)transportBtnID;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;
- (void)setShouldDelayWindowOrdering:(BOOL)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDown:(id)arg1 rightMouse:(BOOL)arg2;
- (id)presentPopupMenuWithEvent:(id)arg1 afterWaiting:(BOOL)arg2;
- (void)popupMenuItemCall:(id)arg1;
- (int)doCreatePopupMenu:(id)arg1;
- (id)unilibTransportView;
- (id)transportBarView;
- (id)trackMouseUntilMouseUp:(id)arg1 notifyTracking:(BOOL)arg2;
- (void)sendBtnEventType:(int)arg1 withValue:(float)arg2 andModifierFlags:(unsigned long long)arg3;
- (void)setPressedState:(BOOL)arg1 enabled:(BOOL)arg2;
- (void)setStopButtonTooltip;
- (BOOL)acceptsFirstResponder;
- (BOOL)isOpaque;
- (void)dealloc;
- (void)setupQuickHelpID;
- (void)setupTooltip;
- (id)initWithFrame:(struct CGRect)arg1 forButtonID:(int)arg2 backColumnIndex:(long long)arg3 asWide:(BOOL)arg4;
- (BOOL)isFlipped;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

