//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MAStorePKMutableArchive.h"

@class NSMutableArray, NSString;

@interface MAStorePKXARArchive : MAStorePKMutableArchive
{
    NSString *_archivePath;
    struct __xar_t *_xar;
    NSMutableArray *_signers;
}

+ (id)_fileAttributeForXARProperty:(char *)arg1 fileAttributeKey:(id)arg2;
+ (id)_fileAttributeKeyForXARFileType:(id)arg1;
+ (id)_fileAttributeKeyForXARPropertyName:(id)arg1;
- (unsigned long long)_fileOffsetForPath:(id)arg1 error:(id *)arg2;
- (void)closeArchive;
- (BOOL)fileExistsAtPath:(id)arg1;
- (id)fileAttributesAtPath:(id)arg1;
- (BOOL)_extractFile:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (id)dataForPath:(id)arg1;
- (id)enumeratorAtPath:(id)arg1;
- (struct __xar_file_t *)_fileStructForSubpath:(id)arg1;
- (id)archivePath;
- (BOOL)_checkChildIntegrityForDO;
- (void)dealloc;
- (void)finalize;
- (BOOL)isValid;
- (BOOL)_recursiveValidateArchiveForSubpath:(id)arg1;
- (id)initForReadingFromPath:(id)arg1;
- (BOOL)setFile:(id)arg1 forPath:(id)arg2 compressed:(BOOL)arg3;
- (BOOL)setData:(id)arg1 forPath:(id)arg2 compressed:(BOOL)arg3;
- (id)initForWritingToPath:(id)arg1 error:(id *)arg2;
- (BOOL)addSignatureBySigningWithIdentity:(struct OpaqueSecIdentityRef *)arg1 algorithm:(id)arg2;
- (id)archiveSignatures;

@end

