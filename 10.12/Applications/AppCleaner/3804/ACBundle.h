//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ACFile.h"

@class NSArray, NSDictionary, NSString, NSURL;

@interface ACBundle : ACFile
{
    BOOL _subBundle;
    long long _type;
    NSURL *_aliasURL;
    NSString *_bundleName;
    NSString *_bundleDisplayName;
    NSString *_bundleExecutable;
    NSString *_bundleIdentifier;
    NSString *_version;
    NSDictionary *_infoDict;
    NSArray *_relatedFiles;
}

+ (id)protectedPaths;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)bundleWithURL:(id)arg1;
+ (id)allowedPluginExtensions;
+ (id)bundlesInDirectoryURL:(id)arg1 withType:(long long)arg2;
+ (id)pluginBundlesInDirectory:(id)arg1;
+ (id)widgetBundlesInDirectory:(id)arg1;
+ (id)applicationBundlesInDirectory:(id)arg1;
@property(retain, nonatomic) NSArray *relatedFiles; // @synthesize relatedFiles=_relatedFiles;
@property(retain, nonatomic) NSDictionary *infoDict; // @synthesize infoDict=_infoDict;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *bundleExecutable; // @synthesize bundleExecutable=_bundleExecutable;
@property(retain, nonatomic) NSString *bundleDisplayName; // @synthesize bundleDisplayName=_bundleDisplayName;
@property(retain, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
@property(retain, nonatomic) NSURL *aliasURL; // @synthesize aliasURL=_aliasURL;
@property(nonatomic, getter=isSubBundle) BOOL subBundle; // @synthesize subBundle=_subBundle;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)restore;
- (id)filesToRestore;
- (id)recycle;
- (id)filesToRecycle;
- (unsigned long long)selectedRelatedFiles;
- (unsigned long long)totalSelectedFiles;
- (id)relatedFilesInDirectories:(id)arg1 maxDepth:(unsigned long long)arg2 matching:(CDUnknownBlockType)arg3;
- (id)relatedFilesInDirectories:(id)arg1 matching:(CDUnknownBlockType)arg2;
- (id)relatedFilesInDirectories:(id)arg1 maxDepth:(unsigned long long)arg2;
- (id)relatedFilesInDirectories:(id)arg1;
- (id)privateVarFiles;
- (id)logsFiles;
- (id)agentsAndDaemonsFiles;
- (id)savedStateFiles;
- (id)containersFiles;
- (id)miscFiles;
- (id)preferencesFiles;
- (void)fetchRelatedFiles;
- (void)fetchAll;
- (void)clearRelatedFiles;
- (void)enumerateSelectedFiles:(CDUnknownBlockType)arg1;
- (BOOL)isInstalled;
- (BOOL)isByApple;
- (unsigned long long)totalSize;
- (unsigned long long)count;
- (void)normalizeBundleId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1;

@end

