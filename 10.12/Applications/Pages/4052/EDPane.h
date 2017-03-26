//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EDReference;

@interface EDPane : NSObject
{
    double mXSplitPosition;
    double mYSplitPosition;
    EDReference *mTopLeftCell;
    int mActivePane;
    int mPaneState;
}

+ (id)pane;
- (id)description;
- (void)setPaneState:(int)arg1;
- (int)paneState;
- (void)setActivePane:(int)arg1;
- (int)activePane;
- (void)setTopLeftCell:(id)arg1;
- (id)topLeftCell;
- (void)setYSplitPosition:(double)arg1;
- (double)ySplitPosition;
- (void)setXSplitPosition:(double)arg1;
- (double)xSplitPosition;
- (void)dealloc;
- (id)init;

@end

