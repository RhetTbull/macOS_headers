//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, WDProtocolModel;

@interface WDProtocolBackendProxy : NSObject
{
    id <WDSessionHost> _sessionHost;
    WDProtocolModel *_model;
    long long _nextSequenceId;
    NSMutableDictionary *_pendingResponses;
    CDUnknownBlockType _protocolEventHandler;
}

@property(copy, nonatomic) CDUnknownBlockType protocolEventHandler; // @synthesize protocolEventHandler=_protocolEventHandler;
- (void).cxx_destruct;
- (void)cancelPendingResponsesWithErrorMessage:(id)arg1;
- (void)sendCommand:(id)arg1 parameters:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)dispatchMessageToFrontend:(id)arg1;
- (id)initWithProtocolAtURL:(id)arg1;
- (id)initWithSessionHost:(id)arg1 protocolWithURL:(id)arg2;

@end

