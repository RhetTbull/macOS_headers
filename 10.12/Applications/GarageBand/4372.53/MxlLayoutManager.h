//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface MxlLayoutManager : NSObject
{
    double scalingMillimeters;
    long long scalingTenths;
    NSMutableArray *scorePages;
    struct ScPageAxis *scAxis;
}

+ (long long)pageWidth_scUnits;
+ (long long)pageHeight_scUnits;
+ (BOOL)includePrintData;
- (void)dbgPrintLayoutManager:(id)arg1;
- (id)description;
- (void)xmlCreateDefaultsData:(id)arg1;
- (void)setupLayoutManager:(struct ScViewState *)arg1 mxlParts:(id)arg2;
- (long long)scalingTenths;
- (double)scalingMillimeters;
- (double)staffHeight_scUnits;
- (void)dealloc;
- (id)init;

@end

