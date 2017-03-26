//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MAStoreDownloader, NSDictionary, NSError, NSString;

@protocol MAStoreInstallerDelegate <NSObject>
- (void)installError:(NSError *)arg1 forDownloader:(MAStoreDownloader *)arg2;
- (void)installPercentageComplete:(float)arg1 forDownloader:(MAStoreDownloader *)arg2;
- (void)installPhase:(NSString *)arg1 forDownloader:(MAStoreDownloader *)arg2;
- (void)installStatus:(NSString *)arg1 forDownloader:(MAStoreDownloader *)arg2;
- (void)installFinishedForDownloader:(MAStoreDownloader *)arg1;
- (void)installStartedForDownloader:(MAStoreDownloader *)arg1;
- (void)installWillStartForDownloader:(MAStoreDownloader *)arg1;
- (void)installerWillPrepare:(NSDictionary *)arg1;
@end

