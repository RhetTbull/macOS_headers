//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface IMKLayout : NSObject
{
    double _candidateThickness;
    NSMutableDictionary *_candidateIndexToPositionMapping;
    NSMutableDictionary *_candidateIndexToNumberIndex;
    unsigned long long _currentSlot;
    unsigned long long _currentIndex;
    double _maxX;
    double _maxY;
    long long _currentLineNumber;
    BOOL _partial;
    NSMutableArray *_lines;
    NSMutableArray *_layoutUnitsInternal;
    struct CGSize _extraSize;
}

@property(nonatomic) struct CGSize extraSize; // @synthesize extraSize=_extraSize;
@property(retain, nonatomic) NSMutableArray *layoutUnitsInternal; // @synthesize layoutUnitsInternal=_layoutUnitsInternal;
@property(retain, nonatomic) NSMutableArray *lines; // @synthesize lines=_lines;
@property(nonatomic) BOOL partial; // @synthesize partial=_partial;
@property(nonatomic) long long currentLineNumber; // @synthesize currentLineNumber=_currentLineNumber;
@property(nonatomic) double maxY; // @synthesize maxY=_maxY;
@property(nonatomic) double maxX; // @synthesize maxX=_maxX;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) unsigned long long currentSlot; // @synthesize currentSlot=_currentSlot;
@property(retain, nonatomic) NSMutableDictionary *candidateIndexToNumberIndex; // @synthesize candidateIndexToNumberIndex=_candidateIndexToNumberIndex;
@property(retain, nonatomic) NSMutableDictionary *candidateIndexToPositionMapping; // @synthesize candidateIndexToPositionMapping=_candidateIndexToPositionMapping;
@property(nonatomic) double candidateThickness; // @synthesize candidateThickness=_candidateThickness;
- (id)description;
@property(readonly, nonatomic) struct CGSize canvasSize;
- (void)extendHeight:(double)arg1;
- (void)extendWidth:(double)arg1;
- (id)layoutUnitForKey:(id)arg1;
- (unsigned long long)candidateNumberForKey:(id)arg1;
- (void)addLayoutUnit:(id)arg1;
- (CDStruct_912cb5d2)lineAndSlotForCandidateIndex:(id)arg1;
- (id)dictionaryForPosition:(CDStruct_912cb5d2)arg1;
- (CDStruct_912cb5d2)positionForDictionary:(id)arg1;
- (id)currentLine;
- (void)changeLine;
- (id)lineAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long lineCount;
@property(readonly, nonatomic) NSArray *layoutUnits;
- (void)dealloc;
- (id)init;

@end

