//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SFUInputBundle-Protocol.h"

@class NSString;

@interface SFUPackageInputBundle : NSObject <SFUInputBundle>
{
    NSString *_rootPath;
}

- (void)copyEntry:(id)arg1 toFile:(id)arg2;
- (unsigned int)crc32ForEntry:(id)arg1;
- (long long)lengthOfEntry:(id)arg1;
- (id)bufferedInputStreamForEntry:(id)arg1;
- (id)inputStreamForEntry:(id)arg1;
- (BOOL)hasEntryWithName:(id)arg1;
- (id)_existingPathForEntryName:(id)arg1 isGz:(char *)arg2;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

