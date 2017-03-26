//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, TSCH3DShaderVariable;

@interface TSCH3DShaderVariableLinkage : NSObject
{
    TSCH3DShaderVariable *mVariable;
    struct TSCH3DShaderType mLinked;
    struct TSCH3DShaderVariableScopes mScope;
    struct TSCH3DShaderVariableScopes mDeclaredScope;
    BOOL mIsUsed;
    NSMutableSet *mDependees;
}

+ (id)linkageWithVariable:(id)arg1;
@property(nonatomic) BOOL isUsed; // @synthesize isUsed=mIsUsed;
@property(readonly, nonatomic) struct TSCH3DShaderVariableScopes declaredScope; // @synthesize declaredScope=mDeclaredScope;
@property(readonly, nonatomic) struct TSCH3DShaderVariableScopes scope; // @synthesize scope=mScope;
@property(readonly, nonatomic) struct TSCH3DShaderType linked; // @synthesize linked=mLinked;
@property(readonly, nonatomic) TSCH3DShaderVariable *variable; // @synthesize variable=mVariable;
- (id).cxx_construct;
- (void)addDeclaredShader:(struct TSCH3DShaderType)arg1 scope:(struct TSCH3DShaderVariableScopeType)arg2;
- (id)nameForShader:(struct TSCH3DShaderType)arg1 scope:(struct TSCH3DShaderVariableScopeType)arg2;
- (id)globalNameForShader:(struct TSCH3DShaderType)arg1 scope:(struct TSCH3DShaderVariableScopeType)arg2;
- (id)resolveGlobalNameForShader:(struct TSCH3DShaderType)arg1 scope:(struct TSCH3DShaderVariableScopeType)arg2 defaultTo:(id)arg3;
- (BOOL)isGlobalScope:(struct TSCH3DShaderVariableScopeType)arg1;
@property(readonly, nonatomic) unsigned long long hasGlobal;
@property(readonly, nonatomic) BOOL isVertexLinkable;
@property(readonly, nonatomic) BOOL isFragmentLinkable;
@property(readonly, nonatomic) BOOL hasVertex;
@property(readonly, nonatomic) BOOL isVertex;
@property(readonly, nonatomic) BOOL canHaveFragment;
@property(readonly, nonatomic) BOOL hasFragment;
@property(readonly, nonatomic) BOOL isFragment;
- (void)setLinkage:(struct TSCH3DShaderType)arg1;
- (BOOL)hasLinkage:(struct TSCH3DShaderType)arg1;
- (void)removeLinkage:(struct TSCH3DShaderType)arg1;
- (BOOL)updateLinkage:(struct TSCH3DShaderType)arg1;
- (void)addLinkage:(struct TSCH3DShaderType)arg1;
- (void)unlink;
@property(readonly, nonatomic) BOOL notLinked;
@property(readonly, nonatomic) BOOL isLinked;
- (void)addBodyScope:(struct TSCH3DShaderType)arg1;
- (void)setShader:(struct TSCH3DShaderType)arg1 scope:(struct TSCH3DShaderVariableScopeType)arg2;
- (BOOL)hasShader:(struct TSCH3DShaderType)arg1 scope:(struct TSCH3DShaderVariableScopeType)arg2;
- (void)removeShader:(struct TSCH3DShaderType)arg1 scope:(struct TSCH3DShaderVariableScopeType)arg2;
- (BOOL)updateShader:(struct TSCH3DShaderType)arg1 scope:(struct TSCH3DShaderVariableScopeType)arg2;
- (void)addShader:(struct TSCH3DShaderType)arg1 scope:(struct TSCH3DShaderVariableScopeType)arg2;
@property(readonly, nonatomic) BOOL scopedInAll;
@property(readonly, nonatomic) BOOL scopeHasFragment;
- (BOOL)hasBody:(struct TSCH3DShaderType)arg1;
- (BOOL)hasVarying;
@property(readonly, nonatomic) BOOL isVertexVarying;
- (BOOL)isVarying:(struct TSCH3DShaderType)arg1;
@property(readonly, nonatomic) BOOL isAttribute;
@property(readonly, nonatomic) BOOL hasAttribute;
@property(readonly, nonatomic) BOOL isUniform;
@property(readonly, nonatomic) BOOL isSpecial;
@property(readonly, nonatomic) NSMutableSet *dependees;
@property(readonly, nonatomic) struct TSCH3DShaderType shaderType;
- (id)variableDeclarationInShader:(struct TSCH3DShaderType)arg1 scope:(struct TSCH3DShaderVariableScopeType)arg2;
- (id)variableQualifiersWithStorageQualifier:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithVariable:(id)arg1;

@end

