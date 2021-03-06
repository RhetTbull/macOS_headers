//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EPXDualStyleGroup, EPXStyleGroup, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSMutableString;

@interface EPXStylesheet : NSObject
{
    EPXStyleGroup *mGenericStyleGroup;
    EPXStyleGroup *mTableCellStyleGroup;
    EPXStyleGroup *mParagraphStyleGroup;
    EPXStyleGroup *mCharacterStyleGroup;
    EPXStyleGroup *mListStyleGroup;
    EPXStyleGroup *mBulletStyleGroup;
    EPXStyleGroup *mPositionStyleGroup;
    EPXStyleGroup *mSharedDropCapStyleGroup;
    EPXDualStyleGroup *mDualDropCapStyleGroup;
    EPXStyleGroup *mSpanDropCapStyleGroup;
    NSDictionary *mDefaultStyleProperties;
    NSMutableDictionary *mHtmlElementStyleCache;
    NSMutableArray *mCssSelectorStyleCache;
    NSMutableSet *mCssSelectorStyles;
    NSMutableSet *embeddedFontCache;
    NSMutableString *mHead;
}

+ (id)cssClassForUnderline:(BOOL)arg1 strikethrough:(BOOL)arg2;
+ (BOOL)serializeCssClasses:(id)arg1 writer:(id)arg2;
+ (BOOL)serializeStyles:(id)arg1 writer:(id)arg2;
+ (id)cssClassesForStyles:(id)arg1;
+ (BOOL)serializeStyle:(id)arg1 writer:(id)arg2;
+ (id)opposingOrientationCssClassName;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableString *head; // @synthesize head=mHead;
@property(retain, nonatomic) NSMutableSet *embeddedFontCache; // @synthesize embeddedFontCache;
- (BOOL)writeToStream:(id)arg1 state:(id)arg2;
- (id)spanDropCapStyleWithOriginalIdentifier:(id)arg1 parentStyle:(id)arg2 properties:(id)arg3;
- (id)dualDropCapStyleWithOriginalIdentifier:(id)arg1 parentStyle:(id)arg2 choiceProperties:(id)arg3 fallbackProperties:(id)arg4;
- (id)sharedDropCapStyleWithOriginalIdentifier:(id)arg1 parentStyle:(id)arg2 properties:(id)arg3;
- (id)positionStyleWithOriginalIdentifier:(id)arg1 properties:(id)arg2;
- (id)bulletStyleWithOriginalIdentifier:(id)arg1 parentStyle:(id)arg2 properties:(id)arg3;
- (id)listStyleWithOriginalIdentifier:(id)arg1 parentStyle:(id)arg2 properties:(id)arg3;
- (id)characterStyleWithOriginalIdentifier:(id)arg1 parentStyle:(id)arg2 additionalCssClasses:(id)arg3 properties:(id)arg4;
- (id)paragraphStyleWithOriginalIdentifier:(id)arg1 parentStyle:(id)arg2 additionalCssClasses:(id)arg3 properties:(id)arg4;
- (id)tableCellStyleWithOriginalIdentifier:(id)arg1 parentStyle:(id)arg2 properties:(id)arg3;
- (id)genericStyleWithOriginalIdentifier:(id)arg1 parentStyle:(id)arg2 properties:(id)arg3;
- (BOOL)hasStyleForCssSelector:(id)arg1;
- (void)addStyleForCssSelector:(id)arg1 withProperties:(id)arg2;
- (id)styleForHtmlElement:(id)arg1;
- (void)addStyleForHtmlElement:(id)arg1 withProperties:(id)arg2;
- (void)setDefaultStyle:(id)arg1;
- (id)init;

@end

