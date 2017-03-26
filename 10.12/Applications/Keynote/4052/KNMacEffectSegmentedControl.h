//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSegmentedControl.h>

@interface KNMacEffectSegmentedControl : NSSegmentedControl
{
    BOOL mSegmentWidthsValid;
}

- (void)p_updateSegmentWidths;
- (double)p_minimumSegmentWidthForSegment:(long long)arg1 textAttributes:(id)arg2;
- (void)p_invalidateSegmentWidths;
- (void)drawRect:(struct CGRect)arg1;
- (void)setLabel:(id)arg1 forSegment:(long long)arg2;
- (void)setSegmentCount:(long long)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)p_commonInit;

@end

