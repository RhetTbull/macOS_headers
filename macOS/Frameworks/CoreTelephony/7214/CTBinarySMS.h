//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CTXPCServiceSubscriptionContext, NSData, NSString;

@interface CTBinarySMS : NSObject
{
    int _portAddressingScheme;
    int _srcPort;
    int _dstPort;
    NSData *_payload;
    NSString *_destinationAddress;
    NSString *_smscAddress;
    CTXPCServiceSubscriptionContext *_context;
}

@property(copy, nonatomic) CTXPCServiceSubscriptionContext *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *smscAddress; // @synthesize smscAddress=_smscAddress;
@property(copy, nonatomic) NSString *destinationAddress; // @synthesize destinationAddress=_destinationAddress;
@property(copy, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(nonatomic) int dstPort; // @synthesize dstPort=_dstPort;
@property(nonatomic) int srcPort; // @synthesize srcPort=_srcPort;
@property(nonatomic) int portAddressingScheme; // @synthesize portAddressingScheme=_portAddressingScheme;
- (BOOL)isValid;
- (void)dealloc;
- (id)init;

@end

