//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SFUDataRepresentation.h"

#import "SFUZipArchiveDataRepresentation-Protocol.h"

@class NSString, SFUFileDataRepresentation;

@interface SFUZipArchiveFileDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation>
{
    SFUFileDataRepresentation *mFileRepresentation;
    int mFd;
}

- (id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (id)path;
- (BOOL)hasSameLocationAs:(id)arg1;
- (id)inputStream;
- (BOOL)isEncrypted;
- (long long)dataLength;
- (BOOL)isReadable;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

