//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface iTermRemotePreferences : NSObject
{
    BOOL _haveTriedToLoadRemotePrefs;
    BOOL _customFolderChanged;
    NSDictionary *_savedRemotePrefs;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSDictionary *savedRemotePrefs; // @synthesize savedRemotePrefs=_savedRemotePrefs;
@property(nonatomic) BOOL customFolderChanged; // @synthesize customFolderChanged=_customFolderChanged;
@property(readonly, nonatomic) BOOL remoteLocationIsURL;
- (void)applicationWillTerminate;
- (BOOL)remotePrefsHaveChanged;
- (BOOL)localPrefsDifferFromSavedRemotePrefs;
- (void)copyRemotePrefsToLocalUserDefaults;
- (void)saveLocalUserDefaultsToRemotePrefs;
- (BOOL)remoteLocationIsValid;
- (BOOL)folderIsWritable:(id)arg1;
- (id)localPrefsFilename;
- (id)freshCopyOfRemotePreferences;
- (BOOL)preferenceKeyIsSyncable:(id)arg1;
- (id)prefsFilenameWithBaseDir:(id)arg1;
- (id)remotePrefsLocation;
- (id)expandedCustomFolderOrURL;
@property(readonly, nonatomic) NSString *customFolderOrURL;
@property(nonatomic) BOOL shouldLoadRemotePrefs;
- (void)dealloc;

@end

