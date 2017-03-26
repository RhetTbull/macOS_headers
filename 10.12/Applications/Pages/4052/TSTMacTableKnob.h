//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTTableKnob.h"

#import "CALayerDelegate-Protocol.h"

@class NSString;

@interface TSTMacTableKnob : TSTTableKnob <CALayerDelegate>
{
}

- (BOOL)isSafeToHitKnob:(id)arg1;
- (void)updateHitRegionPathForRep:(id)arg1;
- (BOOL)knobHasRectangleHitArea;
- (BOOL)knobStartsHidden;
- (id)tableResizerKnobImage;
- (id)selectionChangerKnobImage;
- (id)fillLeftRightKnobImage;
- (id)fillUpDownKnobImage;
- (id)fillKnobImage;
- (id)layer;
- (BOOL)isHitByUnscaledPoint:(struct CGPoint)arg1 andRep:(id)arg2 returningDistance:(double *)arg3;
- (BOOL)isHitRectHitByUnscaledPoint:(struct CGPoint)arg1 andRep:(id)arg2;
- (id)initWithTag:(unsigned long long)arg1 knobVariant:(int)arg2 onRep:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

