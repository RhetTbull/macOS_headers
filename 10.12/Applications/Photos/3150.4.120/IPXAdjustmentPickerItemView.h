//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class IPXCircle, NSString;

@interface IPXAdjustmentPickerItemView : NSView
{
    IPXCircle *_existsIndicatorLayer;
    BOOL _exists;
    CDUnknownBlockType _mouseDownAction;
    NSString *_title;
}

+ (id)viewWithItem:(id)arg1 picker:(id)arg2;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) CDUnknownBlockType mouseDownAction; // @synthesize mouseDownAction=_mouseDownAction;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)setExists:(BOOL)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;

@end

