//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSTExpressionNode;

@interface TSTFormulaTokenContext : NSObject
{
    TSTExpressionNode *mExpressionNode;
    unsigned long long mParenNestingLevel;
    unsigned long long mArgumentIndex;
}

+ (id)tokenContextWithExpressionNode:(id)arg1 parenNestingLevel:(unsigned long long)arg2 argumentIndex:(unsigned long long)arg3;
+ (id)tokenContextWithExpressionNode:(id)arg1 parenNestingLevel:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long argumentIndex; // @synthesize argumentIndex=mArgumentIndex;
@property(readonly, nonatomic) unsigned long long parenNestingLevel; // @synthesize parenNestingLevel=mParenNestingLevel;
@property(readonly, nonatomic) TSTExpressionNode *expressionNode; // @synthesize expressionNode=mExpressionNode;
- (id)debugDescription;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithExpressionNode:(id)arg1 parenNestingLevel:(unsigned long long)arg2 argumentIndex:(unsigned long long)arg3;
- (id)initWithExpressionNode:(id)arg1 parenNestingLevel:(unsigned long long)arg2;
- (id)init;
- (void)dealloc;

@end

