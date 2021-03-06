//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSTrackingArea;

@interface KNMacShowcastShareOptionsCopyLinkButton : NSButton
{
    BOOL _trackingEnabled;
    BOOL _mouseInView;
    BOOL _pressed;
    NSTrackingArea *_trackingArea;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL pressed; // @synthesize pressed=_pressed;
@property(nonatomic) BOOL mouseInView; // @synthesize mouseInView=_mouseInView;
@property(nonatomic) BOOL trackingEnabled; // @synthesize trackingEnabled=_trackingEnabled;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
- (void)p_setTitleText;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)updateTrackingAreas;
- (void)mouseDown:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

