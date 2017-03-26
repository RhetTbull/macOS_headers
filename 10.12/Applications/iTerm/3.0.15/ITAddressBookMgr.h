//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSNetServiceBrowserDelegate-Protocol.h"
#import "NSNetServiceDelegate-Protocol.h"

@class NSMutableArray, NSNetServiceBrowser, NSString, iTermDynamicProfileManager;

@interface ITAddressBookMgr : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    NSNetServiceBrowser *sshBonjourBrowser;
    NSNetServiceBrowser *ftpBonjourBrowser;
    NSNetServiceBrowser *telnetBonjourBrowser;
    NSMutableArray *bonjourServices;
    iTermDynamicProfileManager *_dynamicProfileManager;
}

+ (void)removeKeyMappingsReferringToGuid:(id)arg1;
+ (void)removeProfile:(id)arg1 fromModel:(id)arg2;
+ (BOOL)canRemoveProfile:(id)arg1 fromModel:(id)arg2;
+ (id)bookmarkWorkingDirectory:(id)arg1 forObjectType:(long long)arg2;
+ (id)_advancedWorkingDirWithOption:(id)arg1 directory:(id)arg2;
+ (id)bookmarkCommand:(id)arg1 forObjectType:(long long)arg2;
+ (id)standardLoginCommand;
+ (BOOL)hushlogin;
+ (id)loginShellCommandForBookmark:(id)arg1 forObjectType:(long long)arg2;
+ (id)shellLauncherCommand;
+ (void)setDefaultsInBookmark:(id)arg1;
+ (id)descFromFont:(id)arg1;
+ (id)fontWithDesc:(id)arg1;
+ (id)decodeColor:(id)arg1;
+ (id)encodeColor:(id)arg1;
+ (id)sharedInstance;
- (id)getBonjourServiceType:(id)arg1;
- (void)netServiceDidStop:(id)arg1;
- (void)netServiceWillResolve:(id)arg1;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (unsigned short)portFromSockaddr:(struct sockaddr *)arg1;
- (void *)inaddrFromSockaddr:(struct sockaddr *)arg1;
- (void)_addBonjourHostProfileWithName:(id)arg1 ipAddressString:(id)arg2 port:(int)arg3 serviceType:(id)arg4;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (BOOL)verbose;
- (id)model;
- (void)setBookmarks:(id)arg1 defaultGuid:(id)arg2;
- (void)recursiveMigrateBookmarks:(id)arg1 path:(id)arg2;
- (void)copyProfileToBookmark:(id)arg1;
- (void)stopLocatingBonjourServices;
- (void)locateBonjourServices;
- (void)removeBonjourProfiles;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

