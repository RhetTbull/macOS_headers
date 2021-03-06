//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSTrackingArea;
@protocol ICServicesRolloverViewDelegate;

@interface ICServicesRolloverView : NSView
{
    NSTrackingArea *_rolloverTrackingArea;
    id <ICServicesRolloverViewDelegate> _delegate;
    long long _style;
    struct CGSize _rolloverViewInset;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize rolloverViewInset; // @synthesize rolloverViewInset=_rolloverViewInset;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <ICServicesRolloverViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSTrackingArea *rolloverTrackingArea; // @synthesize rolloverTrackingArea=_rolloverTrackingArea;
- (void)icaxShowServicePicker;
- (void)_viewDidChangeBounds:(id)arg1;
- (void)_hideServicePickerWithoutAnimation;
- (void)_showServicePicker;
- (double)_showServicesPickerDelay;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)mouseDown:(id)arg1;
- (struct CGRect)insetVisibleRect;
- (id)hitTest:(struct CGPoint)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (void)dealloc;
- (void)_servicesRolloverViewCommonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

