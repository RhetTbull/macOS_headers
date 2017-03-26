//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, OADCharacterProperties, OADParagraphProperties;

@interface OADParagraph : NSObject
{
    OADParagraphProperties *mProperties;
    NSMutableArray *mTextRuns;
    OADCharacterProperties *mParagraphEndCharacterProperties;
}

- (id)description;
- (id)plainText;
- (BOOL)isSimilarToParagraph:(id)arg1;
- (void)removeUnnecessaryOverrides;
- (void)applyProperties:(id)arg1;
- (void)changeParentParagraphPropertiesPreservingEffectiveValues:(id)arg1;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (id)bulletCharacterProperties;
- (BOOL)hasBulletCharacterProperties;
- (void)setParagraphEndCharacterProperties:(id)arg1;
- (id)paragraphEndCharacterProperties;
- (id)addFooterField;
- (id)addDateTimeFieldWithFormat:(int)arg1;
- (id)addGenericTextFieldWithGuid:(id)arg1 type:(id)arg2;
- (id)addRegularTextRun;
- (id)addTextLineBreak;
- (unsigned long long)lineBreakCount;
- (void)removeAllTextRuns;
- (id)textRunAtIndex:(unsigned long long)arg1;
- (unsigned long long)textRunCount;
- (unsigned long long)characterCount;
- (BOOL)isEmpty;
- (id)properties;
- (void)dealloc;
- (id)init;
- (id)addSlideNumberField;
- (id)findFirstTextRunOfClass:(Class)arg1;

@end

