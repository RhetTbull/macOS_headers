//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GQDRoot : NSObject
{
    struct __CFDictionary *mUidToObjectMap;
    BOOL mAppBundleColorMapLoaded;
    struct __CFDictionary *mAppBundleResourceToColorMap;
    BOOL mAppBundleResourcesUrlInitialized;
    struct __CFURL *mAppBundleResourcesUrl;
    int mAppBundleVersion;
    unsigned long long mDocVersion;
    unsigned long long mCompatibleDocVersion;
    NSArray *mVersionHistory;
    NSArray *mCustomCellFormats;
    BOOL mBaseDateIs1904;
}

+ (struct _xmlNs *)appNamespace;
- (BOOL)appBundleCanProcessCurrentDocVersion;
- (BOOL)isImported;
- (id)customCellFormats;
- (id)versionHistory;
- (unsigned long long)compatibleDocVersion;
- (unsigned long long)docVersion;
- (unsigned long long)documentReleaseVersion;
- (BOOL)baseDateIs1904;
- (void)readDocumentBaseDate:(struct _xmlTextReader *)arg1;
- (BOOL)readDocumentVersion:(struct _xmlTextReader *)arg1;
- (void)initializeAppBundleResourcesUrl;
- (struct __CFURL *)appBundleResourcesUrl;
- (struct __CFURL *)newUrlToAppBundleResource:(struct __CFString *)arg1 processorBundle:(struct __CFBundle *)arg2;
- (struct __CFURL *)newUrlToAppBundleResource:(struct __CFString *)arg1 processorBundle:(struct __CFBundle *)arg2 fileExists:(char *)arg3;
- (id)upgradedPathForAppResourcePath:(id)arg1;
- (BOOL)includeStyleWithIdentifier:(const char *)arg1 parentIdentifier:(const char *)arg2 uid:(const char *)arg3;
- (void)forgetAboutObjectWithXmlUid:(const char *)arg1;
- (id)objectWithXmlUid:(const char *)arg1;
- (const char *)addIdentifiedObject:(id)arg1 fromCurrentNode:(struct _xmlTextReader *)arg2;
- (BOOL)addObject:(id)arg1 withOwnedXmlUid:(const char *)arg2;
- (Class)classForName:(const char *)arg1;
- (void)dealloc;
- (id)init;
- (void)setCustomCellFormats:(id)arg1;
- (void)setupTablesCustomFormats:(id)arg1;
- (void)setVersionHistory:(id)arg1;
- (char *)documentElementName;
- (void)encodeDocumentAttributesWithExporter:(id)arg1;
- (void)encodeDocumentVersionWithExporter:(id)arg1;
- (void)encodeNamespacesWithExporter:(id)arg1;
- (void)encodeDocumentContentWithExporter:(id)arg1;
- (void)encodeDocumentWithExporter:(id)arg1;

@end

