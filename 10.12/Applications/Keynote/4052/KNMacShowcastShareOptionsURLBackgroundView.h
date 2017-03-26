//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class KNMacShowcastShareOptionsCopyLinkButton, NSTextField, NSTrackingArea;

@interface KNMacShowcastShareOptionsURLBackgroundView : NSView
{
    BOOL _trackingEnabled;
    KNMacShowcastShareOptionsCopyLinkButton *_urlButton;
    NSTextField *_urlField;
    NSTrackingArea *_trackingArea;
}

@property(nonatomic) BOOL trackingEnabled; // @synthesize trackingEnabled=_trackingEnabled;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(retain, nonatomic) NSTextField *urlField; // @synthesize urlField=_urlField;
@property(retain, nonatomic) KNMacShowcastShareOptionsCopyLinkButton *urlButton; // @synthesize urlButton=_urlButton;
- (void)p_updateViewsWithMousePresent:(BOOL)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)dealloc;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

