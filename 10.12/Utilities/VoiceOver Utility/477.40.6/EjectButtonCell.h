//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButtonCell.h>

@class NSImage;

@interface EjectButtonCell : NSButtonCell
{
    NSImage *_onIcon;
    NSImage *_offIcon;
}

- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (void)highlight:(BOOL)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)_resetImage:(BOOL)arg1;

@end

