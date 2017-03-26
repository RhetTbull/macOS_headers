//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Mantle/MTLModel.h>

@class NSData, NSURL;

@interface GHGitLFSInfo : MTLModel
{
    BOOL _local;
    long long _size;
    NSURL *_fileURL;
    NSData *_pointerData;
}

@property(readonly, copy, nonatomic) NSData *pointerData; // @synthesize pointerData=_pointerData;
@property(readonly, copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic, getter=isLocal) BOOL local; // @synthesize local=_local;
@property(readonly, nonatomic) long long size; // @synthesize size=_size;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPointerData:(id)arg1 size:(long long)arg2 local:(BOOL)arg3 fileURL:(id)arg4;

@end

