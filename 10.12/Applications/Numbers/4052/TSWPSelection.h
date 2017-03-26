//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKSelection.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSDTextSelection-Protocol.h"

@class NSString;

@interface TSWPSelection : TSKSelection <GSSPAutoEncodable, TSDTextSelection>
{
    int _type;
    struct _NSRange _range;
    unsigned long long _headChar;
    unsigned long long _tailChar;
    BOOL _leadingEdge;
    unsigned long long _leadingCharIndex;
    BOOL _validVisualRanges;
    int _styleInsertionBehavior;
    int _caretAffinity;
    struct _NSRange _smartFieldRange;
    double _preferredOffset;
    struct TSWPRangeVector _visualRanges;
}

+ (BOOL)p_checkEndOfLineFlagForRange:(struct _NSRange *)arg1 leadingEdge:(char *)arg2 type:(int *)arg3 endOfLine:(BOOL)arg4 storage:(id)arg5;
+ (id)selectionFromWPSelection:(id)arg1;
+ (id)selectionWithRange:(struct _NSRange)arg1 type:(int)arg2 leadingEdge:(BOOL)arg3 storage:(id)arg4;
+ (id)selectionWithRange:(struct _NSRange)arg1;
+ (Class)archivedSelectionClass;
@property(readonly, nonatomic) BOOL validVisualRanges; // @synthesize validVisualRanges=_validVisualRanges;
@property(nonatomic) double preferredOffset; // @synthesize preferredOffset=_preferredOffset;
@property(readonly, nonatomic) int caretAffinity; // @synthesize caretAffinity=_caretAffinity;
@property(readonly, nonatomic) int styleInsertionBehavior; // @synthesize styleInsertionBehavior=_styleInsertionBehavior;
@property(readonly, nonatomic) unsigned long long leadingCharIndex; // @synthesize leadingCharIndex=_leadingCharIndex;
@property(readonly, nonatomic) BOOL leadingEdge; // @synthesize leadingEdge=_leadingEdge;
@property(nonatomic) unsigned long long tailChar; // @synthesize tailChar=_tailChar;
@property(nonatomic) unsigned long long headChar; // @synthesize headChar=_headChar;
@property(readonly, nonatomic) struct _NSRange smartFieldRange; // @synthesize smartFieldRange=_smartFieldRange;
@property(readonly, nonatomic) struct _NSRange rawRange; // @synthesize rawRange=_range;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL isAtEndOfLine;
- (void)saveToArchive:(struct SelectionArchive *)arg1 archiver:(id)arg2;
- (BOOL)intersectsRange:(struct _NSRange)arg1;
- (BOOL)containsCharacterAtIndex:(unsigned long long)arg1 allowRightEdge:(BOOL)arg2;
- (BOOL)containsCharacterAtIndex:(unsigned long long)arg1;
- (unsigned long long)rightEdge;
- (unsigned long long)leftEdge;
- (unsigned long long)visualRangeCount;
- (void)setHeadChar:(unsigned long long)arg1 tailChar:(unsigned long long)arg2;
- (id)visualRangesArray;
- (struct TSWPRangeVector *)i_visualRanges;
- (const struct TSWPRangeVector *)visualRanges;
- (void)i_setVisualRanges:(const struct TSWPRangeVector *)arg1;
- (struct _NSRange)superRange;
- (unsigned long long)end;
- (unsigned long long)start;
- (id)copyWithVisualRanges:(const struct TSWPRangeVector *)arg1 headChar:(unsigned long long)arg2 tailChar:(unsigned long long)arg3 rightToLeft:(BOOL)arg4 sameLine:(BOOL)arg5;
- (id)copyWithNewVisualRanges:(const struct TSWPRangeVector *)arg1;
- (id)constrainToRange:(struct _NSRange)arg1;
- (id)copyWithNewStyleInsertionBehavior:(int)arg1 newCaretAffinity:(int)arg2;
- (id)copyWithNewRange:(struct _NSRange)arg1;
- (id)copyWithNewType:(int)arg1;
- (id)copyWithNewVisualTypeRange:(struct _NSRange)arg1 head:(unsigned long long)arg2 tail:(unsigned long long)arg3;
- (id)copyWithNewType:(int)arg1 range:(struct _NSRange)arg2;
- (id)copyWithNewType:(int)arg1 smartFieldRange:(struct _NSRange)arg2;
- (BOOL)isEquivalentForInsertionStyle:(id)arg1;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, nonatomic) BOOL isValid;
@property(readonly, nonatomic) BOOL isInsertionPoint;
@property(readonly, nonatomic) BOOL isRange;
@property(readonly, nonatomic) BOOL isVisual;
- (long long)compare:(id)arg1;
- (BOOL)p_isEqual:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithArchive:(const struct SelectionArchive *)arg1;
- (id)initWithRange:(struct _NSRange)arg1;
- (id)initWithType:(int)arg1 range:(struct _NSRange)arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4;
- (id)initWithType:(int)arg1 range:(struct _NSRange)arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(struct _NSRange)arg5 leadingEdge:(BOOL)arg6 storage:(id)arg7;
- (id)initWithType:(int)arg1 range:(struct _NSRange)arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(struct _NSRange)arg5 leadingEdge:(BOOL)arg6 leadingCharIndex:(unsigned long long)arg7;
@property(readonly, nonatomic) struct _NSRange range;
- (unsigned long long)insertionChar;
- (BOOL)tst_isCompatibleWithCellRegion:(id)arg1 mergeRange:(struct TSUCellRect)arg2;
- (BOOL)tst_isCompatibleWithCell:(id)arg1;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (void)populateGSSPTextSelection:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

