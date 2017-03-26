//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCHChartSeriesProxy.h"

@interface TSCHChartSeriesScatterXShuntProxy : TSCHChartSeriesProxy
{
    BOOL mReadScatterX;
    BOOL mWriteScatterX;
    BOOL mWriteStandard;
}

- (int)modelUpdateDataTypeFromKey:(id)arg1;
- (void)willSetValue:(id)arg1 forKeyPath:(id)arg2;
- (id)tuplesToSetValue:(id)arg1 forKey:(id)arg2 onStyleOwner:(id)arg3;
- (void)didChangeValueForKey:(id)arg1;
- (void)willChangeValueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)p_ensureStandardKey:(id)arg1;
- (id)p_ensureScatterXKey:(id)arg1;
- (id)p_propertiesThatShouldNotBeConvertedToScatterX;
- (id)p_initWithChartEditor:(id)arg1 forSeries:(id)arg2 readScatterX:(BOOL)arg3 writeScatterX:(BOOL)arg4 writeStandard:(BOOL)arg5;
- (id)initWithChartEditor:(id)arg1 forSeries:(id)arg2;

@end

