//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface TSTCellErrorWarningInsetView : NSView
{
    double mLeftInset;
    double mTopInset;
    NSView *mSubview;
}

- (void)drawRect:(struct CGRect)arg1;
- (id)subview;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 subview:(id)arg2 leftInset:(double)arg3 topInset:(double)arg4;

@end

