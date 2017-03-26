//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@class NSTrackingArea;

@interface TSKMacScrollView : NSScrollView
{
    NSTrackingArea *_tskTrackingArea;
    BOOL _wantsOnlyOverlayScrollers;
    BOOL _hideLegacyScrollersOnMouseExit;
}

@property(nonatomic) BOOL hideLegacyScrollersOnMouseExit; // @synthesize hideLegacyScrollersOnMouseExit=_hideLegacyScrollersOnMouseExit;
@property(nonatomic) BOOL wantsOnlyOverlayScrollers; // @synthesize wantsOnlyOverlayScrollers=_wantsOnlyOverlayScrollers;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)setAutohidesScrollers:(BOOL)arg1;
- (void)setScrollerStyle:(long long)arg1;
- (void)pConfigureForLegacyStyle;
- (void)reflectScrolledClipView:(id)arg1;
- (void)dealloc;

@end

