//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@interface SctxSampleTextView : NSTableCellView
{
    struct CSong *m_pSong;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)drawInteriorWithFrame1:(struct CGRect)arg1 inView:(id)arg2;
- (id)sctxController1;
- (void)setSong:(struct CSong *)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

