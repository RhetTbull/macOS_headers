//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface MxlPart : NSObject
{
    long long partIndex;
    long long firstPartStave;
    long long ginstindex;
    NSString *instName;
    struct MxlPartGroupData groupData;
    NSMutableArray *partMeasures;
    NSMutableArray *logicVoices;
    NSMutableArray *mxlIndepNotes;
    NSMutableArray *mxlIndepTexts;
    NSMutableArray *mxlSlurs;
    NSMutableArray *mxlWedges;
    NSMutableArray *mxlVoicePositions;
}

@property long long ginstindex; // @synthesize ginstindex;
@property long long firstPartStave; // @synthesize firstPartStave;
@property long long partIndex; // @synthesize partIndex;
- (id)description;
- (void)xmlDebugPart:(id)arg1 elemIndex:(long long)arg2;
- (void)dbgPrintMeasures;
- (void)dbgPrintScoreVoices2;
- (void)dbgPrintAllRefPoints;
- (void)dbgPrintLogicVoices2:(id)arg1;
- (void)dbgPrintLogicMeasures2;
- (void)setupPositions;
- (void)setupWedges;
- (id)setupOneWedge:(id)arg1 asStart:(BOOL)arg2;
- (void)setupSlurs;
- (id)nearestNoteInPart_mxlXPos:(struct MxlXPos *)arg1 yPos:(long long)arg2;
- (id)insertDirection:(id)arg1 atXPos:(long long)arg2 voiceNum:(long long)arg3;
- (void)addIndependentElements:(id)arg1;
- (void)setupPartMeasures;
- (void)resolveOtherMultiMeasureIDs:(id)arg1 measureStartsArray:(id)arg2;
- (void)removeNotFoundMultiMeasureIDs:(id)arg1;
- (void)addAllMultiMeasureIDsToArray:(id)arg1 measureStartsArray:(id)arg2;
- (void)addVoiceTextToIndepVoice:(id)arg1 mxlExporter:(id)arg2;
- (void)addIndepNoteToIndepVoice:(id)arg1 mxlExporter:(id)arg2;
- (void)addLogicMeasure:(id)arg1 ofLogicVoice:(id)arg2 forMeasureID:(struct MxlMeasureID)arg3 lmIndex:(int)arg4 lmCount:(int)arg5;
- (id)measureForMeasureID:(struct MxlMeasureID)arg1 startXPos:(struct MxlXPos)arg2 startXl_scUnits:(long long)arg3;
- (void)xmlCreatePartData:(id)arg1;
- (long long)numberOfStaves;
- (void)xmlCreatePartDescription:(id)arg1;
- (void)dealloc;
- (id)init;

@end

