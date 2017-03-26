//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString, SFUCryptoKey, SFUDataRepresentation;
@protocol SFUZipArchiveDataRepresentation;

@interface SFUZipArchive : NSObject
{
    NSMutableDictionary *mEntries;
    SFUDataRepresentation<SFUZipArchiveDataRepresentation> *mDataRepresentation;
    NSData *mPassphraseVerifier;
    NSString *mPassphraseHint;
    SFUCryptoKey *mCryptoKey;
    NSData *mEncryptedDocumentUuid;
}

+ (BOOL)isZipArchiveAtPath:(id)arg1;
- (id)commonRootDirectoryIgnoringCase:(BOOL)arg1;
- (BOOL)decompressAtPath:(id)arg1 wasEmpty:(char *)arg2;
- (BOOL)decompressAtPath:(id)arg1;
- (void)setCryptoKey:(id)arg1;
- (id)encryptedDocumentUuid;
- (id)passphraseHint;
- (id)passphraseVerifier;
- (BOOL)isEncrypted;
- (id)allEntryNames;
- (id)entryWithName:(id)arg1 dataLength:(long long)arg2;
- (id)entryWithName:(id)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2 ignoreCase:(BOOL)arg3;
- (id)initWithData:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2;
- (id)initWithPath:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2 ignoreCase:(BOOL)arg3;
- (id)initWithPath:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2;
- (id)dffEntry;
- (void)readExtraFieldFromBuffer:(const char *)arg1 size:(unsigned long long)arg2 entry:(id)arg3;
- (id)readFilenameFromBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (struct SFUZipEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long)arg2;
- (struct SFUZipEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 eocdOffset:(long long)arg2;
- (const char *)searchForEndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long *)arg2;
- (struct SFUZipEndOfCentralDirectory)readEndOfCentralDirectoryFromInputStream:(id)arg1;
- (void)collapseCommonRootDirectoryIgnoreCase:(BOOL)arg1;
- (void)readEntries;

@end

