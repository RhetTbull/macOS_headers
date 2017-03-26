//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HBBluetoothPeripheralSession, HBBluetoothReceivedResponse, NSData, NSDate, NSString;

@interface HBBluetoothRequest : NSObject
{
    BOOL _responseExpected;
    BOOL _writeRequestSynchronously;
    BOOL _unencryptedResponseExpected;
    int _state;
    double _timeout;
    CDUnknownBlockType _responseBlock;
    HBBluetoothReceivedResponse *_response;
    HBBluetoothPeripheralSession *_session;
    NSDate *_requestTime;
    NSString *_requestType;
    NSData *_requestData;
    NSData *_requestDataBuffer;
    unsigned long long _requestDataIndex;
}

+ (id)outgoingRequestOfType:(id)arg1 withData:(id)arg2 andSession:(id)arg3 withEncryption:(BOOL)arg4;
+ (id)outgoingRequestOfType:(id)arg1 withData:(id)arg2 andSession:(id)arg3;
@property(nonatomic) BOOL unencryptedResponseExpected; // @synthesize unencryptedResponseExpected=_unencryptedResponseExpected;
@property(nonatomic) unsigned long long requestDataIndex; // @synthesize requestDataIndex=_requestDataIndex;
@property(retain, nonatomic) NSData *requestDataBuffer; // @synthesize requestDataBuffer=_requestDataBuffer;
@property(retain, nonatomic) NSData *requestData; // @synthesize requestData=_requestData;
@property(retain, nonatomic) NSString *requestType; // @synthesize requestType=_requestType;
@property(retain, nonatomic) NSDate *requestTime; // @synthesize requestTime=_requestTime;
@property(retain, nonatomic) HBBluetoothPeripheralSession *session; // @synthesize session=_session;
@property(retain, nonatomic) HBBluetoothReceivedResponse *response; // @synthesize response=_response;
@property(copy, nonatomic) CDUnknownBlockType responseBlock; // @synthesize responseBlock=_responseBlock;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) BOOL writeRequestSynchronously; // @synthesize writeRequestSynchronously=_writeRequestSynchronously;
@property(nonatomic) BOOL responseExpected; // @synthesize responseExpected=_responseExpected;
@property(nonatomic) int state; // @synthesize state=_state;
- (id)_nextOutgoingDataPacket;
- (void)dealloc;
- (id)init;
- (BOOL)sendToCentralOnCharacteristic:(id)arg1;
- (void)timeoutRequest;
- (void)cancelDeallocatedRequest;
- (void)complete;
- (void)didFailToSendDataToCentralOnCharacteristic:(id)arg1;
- (void)didSendDataToCentralOnCharacteristic:(id)arg1;
- (void)handleResponse;

@end

