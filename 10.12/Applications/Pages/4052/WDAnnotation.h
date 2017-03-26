//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "WDRun.h"

@class WDAnnotationData, WDCharacterRun;

@interface WDAnnotation : WDRun
{
    int mType;
    WDCharacterRun *mReference;
    BOOL mReferencePopertiesFixed;
    WDAnnotationData *mData;
    WDAnnotation *mOtherEndOfRangedAnnotation;
}

- (id)description;
- (void)dealloc;
- (void)setOtherEndOfRangedAnnotation:(id)arg1;
- (id)otherEndOfRangedAnnotation;
- (void)useDataFromOtherEnd;
- (id)data;
- (void)setOwner:(id)arg1;
- (id)owner;
- (void)setDate:(id)arg1;
- (id)date;
- (int)annotationType;
- (int)runType;
- (void)setReferencePropertiesFixed;
- (BOOL)referencePropertiesFixed;
- (id)reference;
- (id)text;
- (id)initWithParagraph:(id)arg1 type:(int)arg2;

@end

