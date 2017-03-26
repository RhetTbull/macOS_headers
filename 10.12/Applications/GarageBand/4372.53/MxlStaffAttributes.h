//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MxlMeasureElem.h"

@class NSDictionary;

@interface MxlStaffAttributes : MxlMeasureElem
{
    int clefSign;
    BOOL clefLine;
    BOOL clefOctave;
    BOOL timeBeats;
    BOOL timeBeatType;
    BOOL keyMode;
    BOOL keyFifths;
    int measureStyle0;
    long long numberOfBars;
    NSDictionary *attrsDict;
}

- (id)description;
- (id)descriptionString;
- (void)setMeasureStyle:(int)arg1 numberOfBars:(long long)arg2;
- (void)xmlDebugMeasureElem:(id)arg1 elemIndex:(long long)arg2;
- (id)attrsDict;
- (void)setAttrsDict:(id)arg1;
- (int)mxlElemType;
- (void)dealloc;
- (id)initWithStaffNumber:(long long)arg1;

@end

