//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSOutlineView.h>

@interface FileOutlineView : NSOutlineView
{
    long long fMouseRow;
}

- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (long long)hoveredRow;
- (void)updateTrackingAreas;
- (struct CGRect)iconRectForRow:(int)arg1;
- (id)menuForEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end

