//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface GChInfoTextView : NSView
{
    NSView *m_listView;
    int numberOfChords;
    int numberOfBasicChords;
    int numberOfVisibleChords;
}

- (void)undefineAll;
- (void)setNumberOfVisibleChords:(int)arg1;
- (void)setNumberOfChords:(int)arg1 numberOfBasicChords:(int)arg2 numberOfVisibleChords:(int)arg3;
- (void)setNumberOfChords:(int)arg1 numberOfVisibleChords:(int)arg2;
- (void)drawRect:(struct CGRect)arg1;

@end

