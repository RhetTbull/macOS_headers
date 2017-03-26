//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDMacGesture.h"

#import "TSDTapGesture-Protocol.h"

@class NSString, TSDRep;
@protocol TSDGestureDelegate, TSDGestureTarget;

@interface TSDMacTapGesture : TSDMacGesture <TSDTapGesture>
{
    unsigned long long mNumberOfTapsRequired;
}

@property(nonatomic) unsigned long long numberOfTapsRequired; // @synthesize numberOfTapsRequired=mNumberOfTapsRequired;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(nonatomic) id <TSDGestureTarget> cachedGestureTarget;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) id <TSDGestureDelegate> gestureDelegate;
@property(nonatomic) NSString *gestureKind;
@property(readonly, nonatomic) int gestureState;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) TSDRep *targetRep;

@end

