//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCHChartFeatureCategory.h"

@interface TSCHChartFeatureTwoAxis : TSCHChartFeatureCategory
{
}

- (BOOL)supportsReferenceLines;
- (int)representativeGridValueAxisType;
- (BOOL)supportsConnectingLines;
- (BOOL)supportsEditing;
- (BOOL)supportsSymbolOverhang;
- (void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2;
- (id)supportedAxisScales;
- (BOOL)supportsIndividualShadowRendering;
- (BOOL)supportsGroupedShadows;
- (BOOL)requiresYAxisOrdinal;
- (id)supportedSeriesTypes;
- (BOOL)supportsMultipleSeriesTypes;
- (id)userInterfaceName;
- (id)genericToSpecificPropertyMap;
- (id)defaultDataFileName;
- (Class)presetImagerClass;
- (unsigned long long)styleIndexForAxisID:(id)arg1;
- (Class)valueAxisClassForID:(id)arg1 scale:(int)arg2;
- (void)p_initializeAxisIDs;

@end

