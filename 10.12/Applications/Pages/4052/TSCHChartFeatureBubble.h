//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCHChartFeatureScatter.h"

@interface TSCHChartFeatureBubble : TSCHChartFeatureScatter
{
}

- (id)filteredStyleOwnersFromStyleOwners:(id)arg1;
- (int)representativeGridValueAxisType;
- (unsigned long long)gridOffsetToSeriesForScatterFormat:(int)arg1;
- (BOOL)supportsShowLabelsInFrontOption;
- (BOOL)supportsConnectingLines;
- (BOOL)supportsBubbleOptions;
- (id)supportedSeriesTypes;
- (void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2;
- (id)supportedAxisScales;
- (id)genericToSpecificPropertyMap;
- (id)defaultDataFileName;
- (Class)presetImagerClass;
- (unsigned long long)styleIndexForAxisID:(id)arg1;
- (Class)valueAxisClassForID:(id)arg1 scale:(int)arg2;
- (BOOL)supportsEditingForAxisID:(id)arg1;
- (void)p_initializeAxisIDs;
- (BOOL)supportsSharedAndSeparateX;

@end

