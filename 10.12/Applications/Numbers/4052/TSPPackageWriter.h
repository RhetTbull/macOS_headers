//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSPPackageDataWriter-Protocol.h"

@class NSError, NSProgress, NSString, NSURL, SFUCryptoKey, TSPPackage, TSUZipFileWriter;
@protocol OS_dispatch_queue, TSPComponentWriteChannel;

@interface TSPPackageWriter : NSObject <TSPPackageDataWriter>
{
    TSPPackage *_originalDocumentPackage;
    TSPPackage *_originalSupportPackage;
    id <TSPComponentWriteChannel> _componentWriteChannel;
    NSObject<OS_dispatch_queue> *_errorQueue;
    NSError *_error;
    TSPPackage *_writtenPackage;
    BOOL _isOpened;
    NSURL *_URL;
    NSURL *_documentTargetURL;
    NSURL *_relativeURLForExternalData;
    long long _updateType;
    SFUCryptoKey *_encryptionKey;
    TSUZipFileWriter *_zipArchiveWriter;
    NSProgress *_progress;
}

+ (id)newPackageWriterWithPackageType:(long long)arg1 URL:(id)arg2 documentTargetURL:(id)arg3 relativeURLForExternalData:(id)arg4 packageIdentifier:(unsigned char)arg5 documentProperties:(id)arg6 fileFormatVersion:(unsigned long long)arg7 updateType:(long long)arg8 encryptionKey:(id)arg9 originalDocumentPackage:(id)arg10 originalSuppportPackage:(id)arg11 fileCoordinatorDelegate:(id)arg12 progress:(id)arg13 error:(id *)arg14;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) TSUZipFileWriter *zipArchiveWriter; // @synthesize zipArchiveWriter=_zipArchiveWriter;
@property(readonly, nonatomic) SFUCryptoKey *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
@property(readonly, nonatomic) long long updateType; // @synthesize updateType=_updateType;
@property(readonly, nonatomic) NSURL *relativeURLForExternalData; // @synthesize relativeURLForExternalData=_relativeURLForExternalData;
@property(readonly, nonatomic) NSURL *documentTargetURL; // @synthesize documentTargetURL=_documentTargetURL;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)newRawDataWriteChannelForRelativePath:(id)arg1 originalLastModificationDate:(id)arg2 originalSize:(unsigned long long)arg3 originalCRC:(unsigned int)arg4 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(BOOL)arg5;
- (id)newPackageWithPackageIdentifier:(unsigned char)arg1 documentProperties:(id)arg2 fileFormatVersion:(unsigned long long)arg3 decryptionKey:(id)arg4 fileCoordinatorDelegate:(id)arg5;
- (id)writtenPackageWithURL:(id)arg1;
- (BOOL)closeAndReturnError:(id *)arg1;
- (void)closeWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGDataConsumer *)newCGDataConsumerAtRelativePath:(id)arg1;
- (BOOL)writeData:(id)arg1 toRelativePath:(id)arg2 allowEncryption:(BOOL)arg3 error:(id *)arg4;
- (id)copyData:(id)arg1 withReadChannel:(id)arg2 decryptionInfo:(id)arg3 size:(unsigned long long)arg4 preferredFilename:(id)arg5 error:(id *)arg6;
- (id)linkOrCopyData:(id)arg1 fromURL:(id)arg2 decryptionInfo:(id)arg3 preferredFilename:(id)arg4 error:(id *)arg5;
- (BOOL)addData:(id)arg1 infoMessage:(struct DataInfo *)arg2 saveOperationState:(id)arg3;
- (id)filenameForData:(id)arg1 preferredFilename:(id)arg2;
- (void)copyComponent:(id)arg1 locator:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)newRawComponentWriteChannelWithPackageLocator:(id)arg1 storeOutsideObjectArchive:(BOOL)arg2;
- (id)newComponentWriteChannelWithPackageLocator:(id)arg1 storeOutsideObjectArchive:(BOOL)arg2;
- (void)closeCurrentChannel;
- (id)packageEntryInfoForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(BOOL)arg2 packageURL:(id)arg3;
- (void)setError:(id)arg1;
@property(readonly, nonatomic) TSPPackage *originalPackage;
@property(readonly, nonatomic) BOOL canLinkData;
- (void)dealloc;
- (id)initWithURL:(id)arg1 documentTargetURL:(id)arg2 relativeURLForExternalData:(id)arg3 packageIdentifier:(unsigned char)arg4 documentProperties:(id)arg5 fileFormatVersion:(unsigned long long)arg6 updateType:(long long)arg7 encryptionKey:(id)arg8 originalDocumentPackage:(id)arg9 originalSuppportPackage:(id)arg10 fileCoordinatorDelegate:(id)arg11 progress:(id)arg12 error:(id *)arg13;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

