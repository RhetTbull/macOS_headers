//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "iTermOptionalComponentDownloadPhase.h"

@class NSArray, NSString, iTermDownloadableComponentInfo;

@interface iTermManifestDownloadPhase : iTermOptionalComponentDownloadPhase
{
    int _version;
    iTermDownloadableComponentInfo *_fullComponent;
    iTermDownloadableComponentInfo *_sitePackagesComponent;
    NSString *_requestedPythonVersion;
    NSArray *_pythonVersionsInArchive;
    struct _NSRange _sitePackagesDependencies;
}

@property(readonly, copy, nonatomic) NSArray *pythonVersionsInArchive; // @synthesize pythonVersionsInArchive=_pythonVersionsInArchive;
@property(readonly, copy, nonatomic) NSString *requestedPythonVersion; // @synthesize requestedPythonVersion=_requestedPythonVersion;
@property(readonly, nonatomic) int version; // @synthesize version=_version;
@property(readonly, nonatomic) struct _NSRange sitePackagesDependencies; // @synthesize sitePackagesDependencies=_sitePackagesDependencies;
@property(readonly, nonatomic) iTermDownloadableComponentInfo *sitePackagesComponent; // @synthesize sitePackagesComponent=_sitePackagesComponent;
@property(readonly, nonatomic) iTermDownloadableComponentInfo *fullComponent; // @synthesize fullComponent=_fullComponent;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)parsedManifestFromInputStream:(id)arg1;
- (BOOL)iTermVersionAtLeast:(id)arg1 atMost:(id)arg2;
- (id)infoGivenExistingFullComponent:(id)arg1;
- (id)initWithURL:(id)arg1 requestedPythonVersion:(id)arg2 nextPhaseFactory:(CDUnknownBlockType)arg3;

@end

