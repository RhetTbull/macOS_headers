//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTExpressionNode.h"

@interface TSTDurationNode : TSTExpressionNode
{
    struct TSTDurationWrapper mValue;
    BOOL mBlank;
}

@property(nonatomic, getter=isBlank) BOOL blank; // @synthesize blank=mBlank;
@property(nonatomic) struct TSTDurationWrapper value; // @synthesize value=mValue;
- (id)description;
- (void)saveToArchive:(struct DurationNodeArchive *)arg1 archiver:(id)arg2;
- (id)initFromArchive:(const struct DurationNodeArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)format;
- (struct TSTDurationWrapper)durationWrapper;
- (id)date;
- (id)exportString;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg1 hostCell:(struct TSUCellCoord)arg2 symbolTable:(struct TSCESymbolTable *)arg3;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2;
- (id)string;
- (int)tokenType;
- (BOOL)isEqualToExpressionNode:(id)arg1;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg1;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (id)initWithContext:(id)arg1 asBlank:(BOOL)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (id)initWithContext:(id)arg1 duration:(struct TSTDurationWrapper)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;

@end

