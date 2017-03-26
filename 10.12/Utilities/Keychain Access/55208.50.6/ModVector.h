//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@interface ModVector : NSObject
{
    NSXPCConnection *_proxyConnection;
    struct AuthorizationOpaqueRef *_authRef;
    struct OpaqueSecKeychainRef *_kcRef;
    struct OpaqueSecKeychainRef *_tmpRef;
    long long _err;
    long long _lock;
    unsigned int _uid;
    NSString *_path;
    NSString *_tmpPath;
}

+ (id)pathForKeychain:(struct OpaqueSecKeychainRef *)arg1;
+ (BOOL)isAccessError:(int)arg1;
+ (id)sharedInstance;
- (int)changeItemACL:(struct OpaqueSecKeychainItemRef *)arg1 promptSelector:(struct cssm_acl_keychain_prompt_selector)arg2 promptDescription:(struct __CFString *)arg3 appRefList:(id)arg4;
- (id)dataForItem:(struct OpaqueSecKeychainItemRef *)arg1 error:(int *)arg2;
- (int)exportItems:(void *)arg1 prompt:(id)arg2 passphrase:(id)arg3 format:(unsigned int)arg4 flags:(unsigned int)arg5 outData:(id *)arg6;
- (int)p12Import:(id)arg1 prompt:(id)arg2 passphrase:(id)arg3 importKeychain:(struct OpaqueSecKeychainRef *)arg4 outItems:(id *)arg5;
- (int)addCertificate:(struct OpaqueSecCertificateRef *)arg1 toKeychain:(struct OpaqueSecKeychainRef *)arg2;
- (int)addCertificate:(struct OpaqueSecCertificateRef *)arg1 toKeychain:(struct OpaqueSecKeychainRef *)arg2 domain:(unsigned int)arg3 settings:(struct __CFArray *)arg4;
- (int)copyItem:(struct OpaqueSecKeychainItemRef *)arg1 toKeychain:(struct OpaqueSecKeychainRef *)arg2;
- (int)cloneItem:(id)arg1 toKeychain:(id)arg2;
- (int)deleteItem:(id)arg1;
- (int)removeItem:(struct OpaqueSecKeychainItemRef *)arg1;
- (int)modifyItem:(struct OpaqueSecKeychainItemRef *)arg1 attributes:(id)arg2 data:(id)arg3;
- (int)addItem:(unsigned int)arg1 attributes:(struct SecKeychainAttributeList *)arg2 data:(id)arg3 access:(struct OpaqueSecAccessRef *)arg4 toKeychain:(struct OpaqueSecKeychainRef *)arg5 item:(struct OpaqueSecKeychainItemRef **)arg6;
- (int)deleteKeychain:(struct OpaqueSecKeychainRef *)arg1 remove:(_Bool)arg2;
- (BOOL)canModifySFKeychain:(id)arg1;
- (BOOL)canModifyKeychain:(struct OpaqueSecKeychainRef *)arg1;
- (BOOL)canModifyItem:(struct OpaqueSecKeychainItemRef *)arg1;
- (BOOL)authorizationValidForRight:(char *)arg1;
- (BOOL)authorizationValid;
- (long long)releaseAuthorization;
- (int)obtainAuthorization:(id)arg1 forRight:(char *)arg2;
- (int)obtainAuthorization:(id)arg1;
- (void)doWithProxy:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2 withRight:(char *)arg3;
- (void)doWithProxy:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2;
- (void)stopProxy;
- (void)startProxy;
- (id)proxyForRight:(char *)arg1 withSemaphore:(id)arg2 andStatus:(int *)arg3;
- (void)updateRunLoop;
- (void)updateRunLoopInMode:(id)arg1;
- (void)dealloc;
- (id)init;

@end

