//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MxlMeasureElem.h"

@class NSMutableArray;

@interface MxlDirection : MxlMeasureElem
{
    NSMutableArray *directionTypes;
    BOOL placeAbove1;
    BOOL isDirective;
    long long offsetDivisions;
}

@property long long offsetDivisions; // @synthesize offsetDivisions;
@property BOOL isDirective; // @synthesize isDirective;
@property BOOL placeAbove1; // @synthesize placeAbove1;
- (id)description;
- (id)descriptionString;
- (void)xmlDebugMeasureElem:(id)arg1 elemIndex:(long long)arg2;
- (long long)xmlCreateDirectionData:(id)arg1 currentDivision:(long long)arg2;
- (id)firstDirType;
- (int)mxlElemType;
- (void)dealloc;
- (id)initWithMxlDirType:(id)arg1 staffNumber:(long long)arg2;

@end

