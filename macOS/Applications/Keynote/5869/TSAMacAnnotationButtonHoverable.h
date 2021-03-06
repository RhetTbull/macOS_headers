//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSImage, NSTrackingArea;

@interface TSAMacAnnotationButtonHoverable : NSButton
{
    NSImage *_imageHoverable;
    NSImage *_imageOriginal;
    NSImage *_imageUntinted;
    NSImage *_imageHoverableUntinted;
    NSTrackingArea *_trackingArea;
}

@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(retain, nonatomic) NSImage *imageHoverableUntinted; // @synthesize imageHoverableUntinted=_imageHoverableUntinted;
@property(retain, nonatomic) NSImage *imageUntinted; // @synthesize imageUntinted=_imageUntinted;
@property(retain, nonatomic) NSImage *imageOriginal; // @synthesize imageOriginal=_imageOriginal;
@property(retain, nonatomic) NSImage *imageHoverable; // @synthesize imageHoverable=_imageHoverable;
- (void).cxx_destruct;
- (BOOL)acceptsFirstResponder;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;

@end

