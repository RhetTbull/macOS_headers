//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSURemotePropertyList.h"

@class NSString;

@interface TSKRemoteStrings : TSURemotePropertyList
{
    NSString *_localization;
    NSString *_localizedFilename;
}

- (void).cxx_destruct;
- (void)processPropertyList:(id)arg1;
- (id)deserializePropertyListData:(id)arg1 error:(out id *)arg2;
- (double)timeIntervalUntilNextUpdate;
- (id)validateUserDefaultsDownloadURL:(id)arg1;
- (id)localization;
- (id)init;
- (id)initWithRemoteURL:(id)arg1 localURL:(id)arg2;

@end

