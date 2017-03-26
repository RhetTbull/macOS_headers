//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString, TSUImage;

@interface TSCHFillSet : NSObject
{
    NSString *mIdentifier;
    NSString *mPListPath;
    NSDictionary *mPListProperties;
    TSUImage *mSwatchImage;
    NSMutableArray *mSeriesSwatchImages;
    struct CGRect *mSeriesSwatchImageRects;
}

+ (struct CGSize)defaultSwatchSize;
+ (id)fillSetRegistryIdentifierSortOrder;
+ (id)instanceWithArchive:(const struct ChartFillSetArchive *)arg1 unarchiver:(id)arg2;
+ (id)fillSetFromGSSPChartFillSet:(id)arg1;
@property(readonly, nonatomic) NSString *plistPath; // @synthesize plistPath=mPListPath;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=mIdentifier;
- (id)seriesStylesForSeriesTypes:(id)arg1 context:(id)arg2;
- (id)propertyMutationTuplesForPreviewOnChart:(id)arg1;
- (void)p_createSeriesSwatchImagesWithSeriesCount:(unsigned long long)arg1 swatchSize:(struct CGSize)arg2;
- (void)primeSwatchImageCache;
- (id)seriesSwatchImageWithSwatchSize:(struct CGSize)arg1 seriesIndex:(unsigned long long)arg2;
- (id)fillsForDefaultSeriesType;
- (id)swatchImageWithSize:(struct CGSize)arg1;
- (id)styleSwapCommandToApplyToChart:(id)arg1 context:(id)arg2;
- (id)commandToApplyToChart:(id)arg1 context:(id)arg2;
- (id)p_propertyMapsToApplyToChart:(id)arg1 context:(id)arg2;
- (BOOL)chartAlreadyMatches:(id)arg1;
- (id)colorFromProperties:(id)arg1;
- (id)fillFromSageProperties:(id)arg1;
- (id)fillForPreviewForSeriesIndex:(unsigned long long)arg1 seriesType:(id)arg2;
- (id)fillForSeriesIndex:(unsigned long long)arg1 seriesType:(id)arg2 context:(id)arg3;
- (id)p_sagePropertiesForSeriesIndex:(unsigned long long)arg1 seriesType:(id)arg2;
- (id)p_sagePropertiesForSeriesType:(id)arg1;
- (id)p_tangierToSageProperties;
- (unsigned long long)countOfDefinedSeriesForSeriesType:(id)arg1;
- (id)fillsForSeriesType:(id)arg1 context:(id)arg2;
- (id)plistProperties;
@property(readonly, nonatomic) NSString *lookupString;
- (void)dealloc;
- (id)init;
- (id)initWithIdentifier:(id)arg1 plistPath:(id)arg2;
- (void)saveToArchive:(struct ChartFillSetArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct ChartFillSetArchive *)arg1 unarchiver:(id)arg2;
- (void)populateGSSPChartFillSet:(id)arg1 forSeriesTypes:(id)arg2 withEncodeContext:(struct GSSPEncodeConversionContext *)arg3 objectContext:(id)arg4;

@end

