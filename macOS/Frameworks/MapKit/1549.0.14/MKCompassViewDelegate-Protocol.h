//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKCompassView, NSEvent;

@protocol MKCompassViewDelegate <NSObject>
- (void)compassViewClicked:(MKCompassView *)arg1;
- (void)compassView:(MKCompassView *)arg1 didFinishDraggingWithEvent:(NSEvent *)arg2;
- (void)compassView:(MKCompassView *)arg1 didDragWithEvent:(NSEvent *)arg2 fromInnerClick:(BOOL)arg3;
- (void)compassView:(MKCompassView *)arg1 didDragWithEvent:(NSEvent *)arg2;
@end

