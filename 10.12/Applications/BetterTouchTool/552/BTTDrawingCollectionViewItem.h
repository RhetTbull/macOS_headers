//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

@class BTTScalingBezierPathView;

__attribute__((visibility("hidden")))
@interface BTTDrawingCollectionViewItem : NSCollectionViewItem
{
    BTTScalingBezierPathView *_scalingBezierPathView;
}

@property __weak BTTScalingBezierPathView *scalingBezierPathView; // @synthesize scalingBezierPathView=_scalingBezierPathView;
- (void).cxx_destruct;
- (void)setRepresentedObject:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)viewDidLoad;

@end

