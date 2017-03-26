//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTExpressionNode.h"

@class TSTFunctionNode;

@interface TSTFunctionEndNode : TSTExpressionNode
{
    TSTFunctionNode *mFunctionNode;
}

- (void)saveToArchive:(struct FunctionEndNodeArchive *)arg1 archiver:(id)arg2;
- (id)initFromArchive:(const struct FunctionEndNodeArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)exportString;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg1 hostCell:(struct TSUCellCoord)arg2 symbolTable:(struct TSCESymbolTable *)arg3;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2;
- (id)string;
- (int)tokenType;
@property(nonatomic) TSTFunctionNode *functionNode;
- (void)dealloc;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (id)initWithContext:(id)arg1 functionNode:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;

@end

