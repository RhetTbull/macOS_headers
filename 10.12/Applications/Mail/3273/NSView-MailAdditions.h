//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface NSView (MailAdditions)
- (id)newRenderedSnapshotForLayerBackedView:(struct CGRect)arg1;
- (id)newSnapshotForLayerBackedViewInRect:(struct CGRect)arg1;
- (id)newSnapshotForLayerBackedView;
- (struct CGRect)rectInScreenCoords:(struct CGRect)arg1;
- (id)newRenderedSnapshotWithRect:(struct CGRect)arg1 allowAlpha:(BOOL)arg2 forceScaleFactor:(double)arg3;
- (BOOL)_testIsHIDPI;
@end

