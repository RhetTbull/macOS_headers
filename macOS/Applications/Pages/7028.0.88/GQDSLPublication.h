//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GQDSLBaseDocument.h"

@class GQDSLDrawableStorage, GQDSLPageMargins, GQDWPBodyStorage, NSString;

@interface GQDSLPublication : GQDSLBaseDocument
{
    struct CGSize mPageSize;
    double mPageScale;
    unsigned long long mOrientation;
    GQDSLPageMargins *mPageMargins;
    BOOL mIsOldAssetNameMapInitialized;
    struct __CFDictionary *mOldAssetNameMap;
    BOOL mIsOldTemplateNameMapInitialized;
    struct __CFDictionary *mOldTemplateNameMap;
    BOOL mChangeTrackingEnabled;
    BOOL mChangeTrackingPaused;
    struct __CFArray *mWindowConfigs;
    struct __CFArray *mSections;
    struct __CFArray *mHeaders;
    struct __CFArray *mFooters;
    struct __CFArray *mCitationRecords;
    struct __CFArray *mAnnotations;
    struct __CFArray *mChangeSessionHistory;
    GQDSLDrawableStorage *mDrawables;
    GQDWPBodyStorage *mMainBodyStorage;
    struct __CFDictionary *mPublicationInfo;
    NSString *mPaperName;
}

+ (id)pTOCSettingsForExportingParagraphStyleTOCPropertiesFromDocumentRoot:(id)arg1;
+ (void)exportHotKeySettingsForNativeStyle:(id)arg1 toExportedStyle:(id)arg2 inDocument:(id)arg3;
+ (id)newNullSectionStyle;
+ (id)newDefaultSectionStyle;
- (void)setAnnotations:(struct __CFArray *)arg1;
- (struct __CFArray *)annotations;
- (void)setCitationRecords:(struct __CFArray *)arg1;
- (struct __CFArray *)citationRecords;
- (struct __CFArray *)windowConfigs;
- (void)setWindowConfigs:(struct __CFArray *)arg1;
- (struct __CFArray *)sections;
- (void)addSection:(id)arg1;
- (id)footerStorageWithName:(struct __CFString *)arg1;
- (id)headerStorageWithName:(struct __CFString *)arg1;
- (void)setFooters:(struct __CFArray *)arg1;
- (struct __CFArray *)footers;
- (void)setHeaders:(struct __CFArray *)arg1;
- (struct __CFArray *)headers;
- (BOOL)hasFooters;
- (BOOL)hasHeaders;
- (BOOL)showOutliner;
- (BOOL)boolValueForDocumentInfoProperty:(id)arg1;
- (void)setIntegerValue:(long long)arg1 forDocumentInfoProperty:(id)arg2;
- (void)setBoolValue:(BOOL)arg1 forDocumentInfoProperty:(id)arg2;
- (struct __CFURL *)newUrlToAppBundleResource:(struct __CFString *)arg1 processorBundle:(struct __CFBundle *)arg2;
- (void)setPaperName:(id)arg1;
- (id)paperName;
- (void)setChangeSessionHistory:(struct __CFArray *)arg1;
- (struct __CFArray *)changeSessionHistory;
- (id)upgradedPathForAppResourcePath:(id)arg1;
- (void)initializeAppBundleResourcesUrl;
- (BOOL)hasBody;
- (void)setPageMargins:(id)arg1;
- (id)pageMargins;
- (void)setPageScale:(double)arg1;
- (double)pageScale;
- (void)setOrientation:(unsigned long long)arg1;
- (unsigned long long)orientation;
- (void)setPageSize:(struct CGSize)arg1;
- (struct CGSize)pageSize;
- (void)dealloc;
- (id)init;
- (BOOL)changeTrackingPaused;
- (BOOL)changeTrackingEnabled;
- (struct __CFString *)newUpgradedPathForOldAssetPath:(struct __CFString *)arg1;
- (void)initializeOldAssetNameMap;
- (struct __CFArray *)newUpgradedPathComponentsFromOldTemplatePathComponents:(struct __CFArray *)arg1;
- (struct __CFString *)newFixedPathForOldAppBundleResourcePath:(struct __CFString *)arg1;
- (int)readChangeTrackingFromReader:(struct _xmlTextReader *)arg1;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;
- (void)setChangeTrackingPaused:(BOOL)arg1;
- (void)setChangeTrackingEnabled:(BOOL)arg1;
- (void)addFooter:(id)arg1;
- (void)addHeader:(id)arg1;
- (id)mainBodyStorage;
- (void)setMainBodyStorage:(id)arg1;
- (id)drawables;
- (void)setDrawables:(id)arg1;
- (id)pBodyWayPointsWithDocumentRoot:(id)arg1;
- (void)pAddCopyOfFooter:(id)arg1 withName:(struct __CFString *)arg2;
- (void)pAddCopyOfHeader:(id)arg1 withName:(struct __CFString *)arg2;
- (id)initFromTSKDocumentRoot:(id)arg1 exporter:(id)arg2;
- (void)pAddHeaderAndFooterForPageMaster:(id)arg1 headerIdentifier:(struct __CFString *)arg2 footerIdentifier:(struct __CFString *)arg3 prototypeHeaderFooter:(id)arg4 exporter:(id)arg5;
- (id)p_newMergedHeaderFooter:(long long)arg1 withName:(struct __CFString *)arg2 pageMaster:(id)arg3 exporter:(id)arg4;
- (id)defaultHeaderFooterParagraphStyle;
- (char *)documentElementName;
- (void)encodeDocumentAttributesWithExporter:(id)arg1;
- (void)encodeDocumentContentWithExporter:(id)arg1;
- (void)encodeNamespacesWithExporter:(id)arg1;
- (void)encodeHeadersFooters:(id)arg1 isHeaders:(BOOL)arg2 exporter:(id)arg3;
- (void)encodeWindowConfigs:(id)arg1;

@end

