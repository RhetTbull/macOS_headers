//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceRequest.h>

#import "NSSecureCoding.h"
#import "PKAccountWebServiceApplePayTrustProtocol.h"

@class NSData, NSString, NSURL, PKApplePayTrustHashResponse, PKPaymentDeviceMetadata, PKPhysicalCardOrder;

@interface PKAccountWebServiceRequestPhysicalCardRequest : PKAccountWebServiceRequest <PKAccountWebServiceApplePayTrustProtocol, NSSecureCoding>
{
    NSURL *baseURL;
    PKApplePayTrustHashResponse *hashResponse;
    NSData *_publicKeyHash;
    NSString *_accountIdentifier;
    PKPhysicalCardOrder *_order;
    PKPaymentDeviceMetadata *_deviceMetadata;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata; // @synthesize deviceMetadata=_deviceMetadata;
@property(retain, nonatomic) PKPhysicalCardOrder *order; // @synthesize order=_order;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(copy, nonatomic) NSData *publicKeyHash; // @synthesize publicKeyHash=_publicKeyHash;
@property(retain, nonatomic) PKApplePayTrustHashResponse *hashResponse; // @synthesize hashResponse;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)manifestHashWithReferenceIdentifier:(id)arg1;
- (Class)signatureResponseClass;
- (id)endpointComponents;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

