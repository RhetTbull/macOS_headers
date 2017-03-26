//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <StorageManagement/STMOperation.h>

@class NSSet, NSURL;

@interface SPInfoSizeDirectoryOperation : STMOperation
{
    NSURL *_directoryURL;
    NSSet *_excludedSubdirectoryURLs;
    long long _directorySize;
}

+ (void)load;
@property long long directorySize; // @synthesize directorySize=_directorySize;
@property(copy) NSSet *excludedSubdirectoryURLs; // @synthesize excludedSubdirectoryURLs=_excludedSubdirectoryURLs;
@property(retain) NSURL *directoryURL; // @synthesize directoryURL=_directoryURL;
- (void)main;
- (void)dealloc;

@end

