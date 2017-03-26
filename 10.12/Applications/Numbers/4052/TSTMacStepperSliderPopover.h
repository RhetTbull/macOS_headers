//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSKMacPopoverDelegate-Protocol.h"
#import "TSTTableControlCellViewController-Protocol.h"

@class NSString, TSKMacPopover, TSTMacStepperSliderViewController, TSTTableRep;

@interface TSTMacStepperSliderPopover : NSObject <TSTTableControlCellViewController, TSKMacPopoverDelegate>
{
    TSTTableRep *mTableRep;
    struct TSUCellCoord mCellID;
    TSKMacPopover *mPopover;
    TSTMacStepperSliderViewController *mStepperSliderController;
    int mFormatType;
}

@property(retain, nonatomic) TSTMacStepperSliderViewController *stepperSliderController; // @synthesize stepperSliderController=mStepperSliderController;
@property(nonatomic) struct TSUCellCoord cellID; // @synthesize cellID=mCellID;
@property(retain, nonatomic) TSTTableRep *tableRep; // @synthesize tableRep=mTableRep;
@property(readonly, nonatomic) int formatType; // @synthesize formatType=mFormatType;
- (void)thePopoverDidShow:(id)arg1;
- (void)canvasDidZoom;
- (void)canvasWillZoom;
- (void)canvasDidEndScrolling;
- (void)canvasWillBeginScrolling;
- (void)dismiss;
- (void)updateValue;
- (void)updatePosition;
- (void)present;
- (id)p_popover;
- (void)dealloc;
- (id)initWithTableRep:(id)arg1 cellID:(struct TSUCellCoord)arg2 formatType:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

