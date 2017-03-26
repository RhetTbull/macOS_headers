//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, OADBlipCollection, OADDrawingTheme, OADTextListStyle, OAITClient, OCIDocumentState, TCImportFontCache, TSADocumentRoot, TSPObjectContext, TSSStylesheet, TSSTheme, TSUNoCopyDictionary;

@interface OAITDrawingState : NSObject
{
    OCIDocumentState *mDocumentState;
    OADDrawingTheme *mSourceDrawingTheme;
    OADBlipCollection *mOverriddenSourceBlipCollection;
    NSMutableArray *mSourceConnectorArray;
    NSMutableDictionary *mSourceDrawableIdToSourceDrawableMap;
    TSUNoCopyDictionary *mSourceDrawableToTargetDrawableMap;
    NSMutableArray *mTargetGroupStack;
    id mDanglingMessagePlaceholder;
    OAITClient *mClient;
    OADTextListStyle *mDefaultSourceTableTextStyle;
    BOOL mHasTextAutoFitOverride;
    BOOL mTextAutoFit;
    BOOL mIsMappingTheTheme;
    NSString *mSrcDocumentPath;
    TSSStylesheet *_targetThemeStylesheet;
}

@property(readonly, nonatomic) TSSStylesheet *targetThemeStylesheet; // @synthesize targetThemeStylesheet=_targetThemeStylesheet;
@property(nonatomic) BOOL isMappingTheTheme; // @synthesize isMappingTheTheme=mIsMappingTheTheme;
@property(retain, nonatomic) NSString *sourceDocumentPath; // @synthesize sourceDocumentPath=mSrcDocumentPath;
@property(retain, nonatomic) OADTextListStyle *defaultSourceTableTextStyle; // @synthesize defaultSourceTableTextStyle=mDefaultSourceTableTextStyle;
@property(retain, nonatomic) OAITClient *client; // @synthesize client=mClient;
@property(retain, nonatomic) id danglingMessagePlaceholder; // @synthesize danglingMessagePlaceholder=mDanglingMessagePlaceholder;
@property(readonly, nonatomic) TSUNoCopyDictionary *drawableToTargetMap; // @synthesize drawableToTargetMap=mSourceDrawableToTargetDrawableMap;
@property(retain, nonatomic) OADBlipCollection *overriddenSourceBlipCollection; // @synthesize overriddenSourceBlipCollection=mOverriddenSourceBlipCollection;
@property(retain, nonatomic) OADDrawingTheme *sourceDrawingTheme; // @synthesize sourceDrawingTheme=mSourceDrawingTheme;
@property(readonly, nonatomic) OCIDocumentState *documentState; // @synthesize documentState=mDocumentState;
- (id)absoluteFontNameWithPossiblyRelativeFontName:(id)arg1;
@property(readonly, nonatomic) TCImportFontCache *fontCache;
@property(readonly, nonatomic) TSADocumentRoot *targetAbstractDocumentRoot;
@property(readonly, nonatomic) TSSTheme *targetAbstractTheme;
@property(readonly, nonatomic) TSSStylesheet *targetContentStylesheet;
@property(readonly, nonatomic) TSSStylesheet *targetDocStylesheet;
@property(readonly, nonatomic) TSPObjectContext *targetObjectContext;
@property(readonly, nonatomic) NSArray *sourceBulletBlips;
@property(readonly, nonatomic) OADBlipCollection *sourceBlipCollection;
@property(readonly, nonatomic) id owner;
- (id)targetDrawableForSourceId:(unsigned int)arg1;
- (id)targetDrawableForSourceDrawable:(id)arg1;
- (void)setTargetDrawable:(id)arg1 forSourceDrawable:(id)arg2;
- (void)resetForNewDrawing;
- (id)sourceConnectorAtIndex:(unsigned long long)arg1;
- (unsigned long long)sourceConnectorCount;
- (void)cacheSourceConnector:(id)arg1;
- (id)sourceDrawableForSourceDrawableId:(unsigned int)arg1;
- (void)setSourceDrawable:(id)arg1 forSourceDrawableId:(unsigned int)arg2;
- (void)dealloc;
- (id)initWithDocumentState:(id)arg1 sourceDrawingTheme:(id)arg2 client:(id)arg3;

@end

