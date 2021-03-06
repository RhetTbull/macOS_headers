//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GQPArrayBasedStack, GQSDocument, NSString, SFUCryptoKey, SFUZipArchive, SFUZipInflateInputStream, TSUProgressContext;

@interface GQPProcessor : NSObject
{
    struct _xmlTextReader *mReader;
    SFUZipArchive *mArchive;
    SFUCryptoKey *mCryptoKey;
    GQPArrayBasedStack *mXmlElementStack;
    GQPArrayBasedStack *mStateStack;
    GQSDocument *mDocumentState;
    struct __QLPreviewRequest *mOutputPreviewRequest;
    struct __CFBundle *mBundle;
    BOOL mWrongFormat;
    BOOL mProgressReportingEnabled;
    unsigned int mLastProgress;
    unsigned long long mTotalBytesToConsume;
    SFUZipInflateInputStream *mInputStream;
    TSUProgressContext *mProgressContext;
    BOOL _needsSecondPass;
    NSString *_path;
    NSString *_indexName;
    SFUZipArchive *_zipArchive;
}

+ (struct _xmlTextReader *)createXmlReaderWithPath:(id)arg1 indexFileName:(id)arg2 cryptoKey:(id)arg3 totalBytes:(unsigned long long *)arg4 zipArchive:(id *)arg5 zipInputStream:(id *)arg6;
+ (struct _xmlTextReader *)createXmlReaderWithZipArchive:(id)arg1 indexFileName:(id)arg2 cryptoKey:(id)arg3 indexEntry:(id *)arg4 zipInputStream:(id *)arg5;
+ (void)initialize;
@property BOOL needsSecondPass; // @synthesize needsSecondPass=_needsSecondPass;
@property(retain) SFUZipArchive *zipArchive; // @synthesize zipArchive=_zipArchive;
@property(retain) NSString *indexName; // @synthesize indexName=_indexName;
@property(retain) NSString *path; // @synthesize path=_path;
- (void)setProgressContext:(id)arg1;
- (id)progressContext;
- (unsigned long long)totalBytesConsumed;
- (unsigned long long)totalBytesToConsume;
- (unsigned int)lastProgress;
- (void)setLastProgress:(unsigned int)arg1;
- (void)disableProgressReporting;
- (BOOL)progressReportingEnabled;
- (void)setWrongFormat:(BOOL)arg1;
- (BOOL)resetReader;
- (BOOL)isWrongFormat;
- (id)documentState;
- (id)stateStack;
- (id)xmlElementStack;
- (BOOL)go;
- (void)setBundle:(struct __CFBundle *)arg1;
- (struct __CFBundle *)bundle;
- (id)cryptoKey;
- (void)setCryptoKey:(id)arg1;
- (id)archive;
- (void)pushInitialState;
- (const struct StateSpec *)initialState;
- (void)dealloc;
- (id)initWithZipArchive:(id)arg1 indexFileName:(id)arg2 previewRequest:(struct __QLPreviewRequest *)arg3 cryptoKey:(id)arg4;
- (id)initWithZipArchive:(id)arg1 indexFileName:(id)arg2 previewRequest:(struct __QLPreviewRequest *)arg3;
- (id)initWithPath:(id)arg1 indexFileName:(id)arg2 previewRequest:(struct __QLPreviewRequest *)arg3 cryptoKey:(id)arg4;
- (id)initWithPath:(id)arg1 indexFileName:(id)arg2 previewRequest:(struct __QLPreviewRequest *)arg3;

@end

