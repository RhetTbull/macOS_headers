//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FIRAuthRPCResponse.h"

@class NSArray, NSString;

@interface FIRCreateAuthURIResponse : NSObject <FIRAuthRPCResponse>
{
    BOOL _registered;
    BOOL _forExistingProvider;
    NSString *_authURI;
    NSString *_providerID;
    NSArray *_allProviders;
    NSArray *_signinMethods;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *signinMethods; // @synthesize signinMethods=_signinMethods;
@property(readonly, copy, nonatomic) NSArray *allProviders; // @synthesize allProviders=_allProviders;
@property(readonly, nonatomic) BOOL forExistingProvider; // @synthesize forExistingProvider=_forExistingProvider;
@property(readonly, nonatomic) NSString *providerID; // @synthesize providerID=_providerID;
@property(readonly, nonatomic) BOOL registered; // @synthesize registered=_registered;
@property(readonly, nonatomic) NSString *authURI; // @synthesize authURI=_authURI;
- (BOOL)setWithDictionary:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

