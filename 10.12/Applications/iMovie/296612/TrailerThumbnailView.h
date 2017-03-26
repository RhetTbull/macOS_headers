//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImage;

@interface TrailerThumbnailView : NSView
{
    NSView *m_buttonWrapper;
    NSImage *m_image;
    BOOL m_empty;
}

@property(nonatomic) BOOL empty; // @synthesize empty=m_empty;
@property(retain, nonatomic) NSImage *image; // @synthesize image=m_image;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)selected;
- (struct CGRect)drawingFrame;
- (id)borderMaker;
- (BOOL)isFlipped;

@end

