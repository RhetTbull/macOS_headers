//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MxlLayoutSystemData, MxlPart, NSMutableArray;

@interface MxlLayoutPartData : NSObject
{
    MxlLayoutSystemData *layoutSystem;
    MxlPart *mxlPart;
    NSMutableArray *systemMeasures;
    NSMutableArray *systemStaves;
}

@property(readonly) MxlLayoutSystemData *layoutSystem; // @synthesize layoutSystem;
- (id)layoutPageData;
- (id)layoutManager;
- (void)dbgPrintLayoutPart:(id)arg1;
- (id)description;
- (void)addMeasuresBetweenStart:(struct MxlXPos)arg1 andStop:(struct MxlXPos)arg2 axLine:(struct ScPageLine *)arg3;
- (id)mxlPart;
- (void)dealloc;
- (id)initWithPart:(id)arg1 layoutSystem:(id)arg2;

@end

