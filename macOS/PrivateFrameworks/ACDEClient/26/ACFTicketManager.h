//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ACDEClient/ACFTicketManagerProtocol-Protocol.h>

@class NSData, NSString;
@protocol ACFCertificateStoragePolicy;

__attribute__((visibility("hidden")))
@interface ACFTicketManager : NSObject <ACFTicketManagerProtocol>
{
    NSData *_sessionRandomKey;
    NSData *_initializationVector;
    id <ACFCertificateStoragePolicy> _certificateStoragePolicy;
}

@property(retain, nonatomic) id <ACFCertificateStoragePolicy> certificateStoragePolicy; // @synthesize certificateStoragePolicy=_certificateStoragePolicy;
@property(retain, nonatomic) NSData *initializationVector; // @synthesize initializationVector=_initializationVector;
@property(retain, nonatomic) NSData *sessionRandomKey; // @synthesize sessionRandomKey=_sessionRandomKey;
- (id)clientSecretHmacForToken:(id)arg1;
- (id)clientSecretCreateDateForToken:(id)arg1;
- (id)deviceIdentifier;
- (id)twoSVCreateDateForPrincipal:(id)arg1;
- (id)twoSVSecretForPrincipal:(id)arg1;
- (id)twoSVPersonIDForPrincipal:(id)arg1;
- (void)tokenDidReceive2SVSecret:(id)arg1;
- (id)serviceTicketPrefix;
- (id)serviceTicketStringWithRequest:(id)arg1 ssoToken:(id)arg2;
- (id)changePasswordTokenWithRequest:(id)arg1 oldPassword:(id)arg2 newPassword:(id)arg3;
- (Class)ssoTokenClass;
- (id)createSSOTokenWithTGT:(id)arg1 keyHMAC:(id)arg2 initialToken:(id)arg3;
- (void)prepareTokenFor2SV:(id)arg1 withVerificationCode:(id)arg2 tgtInfo:(id)arg3;
- (id)prepareToken:(id)arg1 withTGTInfo:(id)arg2;
- (id)tokenVersion;
- (unsigned long long)clientID;
- (id)identifier;
- (Class)initialTokenClass;
- (void)updateTokenEncryptionHash:(id)arg1 withKeyCode:(id)arg2;
- (id)initialTokenWithRequest:(id)arg1 sessionToken:(id)arg2;
- (id)initialTokenNotTiedToSessionWithRequest:(id)arg1;
- (id)initialTokenWithRequest:(id)arg1 keyCode:(id)arg2 authenticationType:(unsigned long long)arg3;
- (id)envelopEncryptedSourceToken:(id)arg1 dsKeyVersion:(id)arg2 encryptedRandomKey:(id)arg3 initializationVector:(id)arg4 tokenDataHMAC:(id)arg5 tokenVersion:(id)arg6;
- (id)decryptEncryptedContent:(id)arg1 hmac:(id)arg2;
- (id)encryptSourceTokenWithSourceTokenData:(id)arg1 encryptionKey:(id)arg2 initializationVector:(id)arg3;
- (id)envelopForToken:(id)arg1 publicKey:(struct OpaqueSecKeyRef *)arg2;
- (id)envelopForToken:(id)arg1;
- (id)createNonceString;
- (id)certificateLabelForRealm:(id)arg1;
- (id)publicKeyVersionForRealm:(id)arg1;
- (id)defaultPublicKeyVersionForRealm:(id)arg1;
- (struct OpaqueSecCertificateRef *)defaultPublicKeyCertificateForRealm:(id)arg1;
- (void)setPublickKeyVersion:(id)arg1 label:(id)arg2 forRealm:(id)arg3;
- (id)setPublicKeyWithCertificate:(struct OpaqueSecCertificateRef *)arg1 version:(id)arg2 forRealm:(id)arg3;
- (BOOL)hasValidPublicKeyForRealm:(id)arg1;
- (struct OpaqueSecKeyRef *)publicKeyForRealm:(id)arg1;
- (struct OpaqueSecCertificateRef *)certificateForRealm:(id)arg1;
- (void)uninstallPublicKeyForRealm:(id)arg1;
- (BOOL)installCertificateWithString:(id)arg1 version:(id)arg2 forRealm:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

