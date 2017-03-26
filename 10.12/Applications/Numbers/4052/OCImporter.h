//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "OCMapper.h"

@class NSData, NSString, NSURL, OCDReader, TCImportTracing, TSUProgressContext;

@interface OCImporter : OCMapper
{
    NSURL *mURL;
    NSData *mData;
    OCDReader *mReader;
    TCImportTracing *mTracing;
    BOOL mTryAlternateReader;
    TSUProgressContext *mProgressContext;
    NSString *_lastPasswordAttempted;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *lastPasswordAttempted; // @synthesize lastPasswordAttempted=_lastPasswordAttempted;
@property(readonly, nonatomic) TCImportTracing *tracing; // @synthesize tracing=mTracing;
@property(retain) TSUProgressContext *progressContext; // @synthesize progressContext=mProgressContext;
- (void)finalizeWithDocumentState:(id)arg1;
- (id)displayName;
- (id)filename;
- (BOOL)setPassphrase:(id)arg1;
- (BOOL)isDocumentEncryptedUnsupportedVersion:(char *)arg1 errorMessage:(id *)arg2;
- (BOOL)isDocumentEncryptedUnsupportedVersionHelper:(char *)arg1 errorMessage:(id *)arg2 readError:(char *)arg3;
- (BOOL)tryAlternateReader;
- (void)setURL:(id)arg1;
- (id)url;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (BOOL)start;
- (BOOL)isXML;

@end

