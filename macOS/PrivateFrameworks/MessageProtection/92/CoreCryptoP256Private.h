//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "P256PrivateKeyProtocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CoreCryptoP256Private : NSObject <P256PrivateKeyProtocol>
{
    struct ccec_full_ctx *_full_key;
}

+ (id)generate;
@property struct ccec_full_ctx *full_key; // @synthesize full_key=_full_key;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)signData:(id)arg1 error:(id *)arg2;
- (id)keychainData;
- (void)dealloc;
- (id)publicKey;
- (id)keyAgreement:(id)arg1 error:(id *)arg2;
- (id)initWithKey:(struct ccec_full_ctx *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

