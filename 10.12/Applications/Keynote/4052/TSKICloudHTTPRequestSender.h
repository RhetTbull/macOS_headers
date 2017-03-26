//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"

@class NSArray, NSData, NSDictionary, NSMutableData, NSOperationQueue, NSString, NSURLResponse, NSURLSessionDataTask, NSUUID, TSKICloudHTTPRequestSenderFactory;
@protocol OS_dispatch_queue, TSKICloudHTTPRequestSenderDelegate;

@interface TSKICloudHTTPRequestSender : NSObject <NSURLSessionDataDelegate>
{
    NSString *_method;
    NSString *_hostOverride;
    NSString *_applicationName;
    NSData *_requestData;
    NSUUID *_logicalRequestUUID;
    NSUUID *_httpRequestUUID;
    BOOL _isCancelled;
    BOOL _isSendDataCalled;
    BOOL _didCallCompletion;
    id <TSKICloudHTTPRequestSenderDelegate> _delegate;
    CDUnknownBlockType _completionHandler;
    NSOperationQueue *_delegateQueue;
    NSMutableData *_responseData;
    BOOL _shouldCaptureResponse;
    unsigned long long _totalResponseCaptures;
    BOOL _shouldResendOnClientTimeout;
    double _timeoutInterval;
    TSKICloudHTTPRequestSenderFactory *_requestSenderFactory;
    NSURLResponse *_response;
    NSURLSessionDataTask *_dataTask;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSOperationQueue *_accessOperationQueue;
    long long _host;
    NSArray *_pathComponents;
    NSDictionary *_parameters;
}

@property(readonly, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) NSArray *pathComponents; // @synthesize pathComponents=_pathComponents;
@property(readonly, nonatomic) long long host; // @synthesize host=_host;
@property(readonly, retain, nonatomic) NSOperationQueue *accessOperationQueue; // @synthesize accessOperationQueue=_accessOperationQueue;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(retain, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) NSUUID *httpRequestUUID; // @synthesize httpRequestUUID=_httpRequestUUID;
@property(readonly, nonatomic) NSUUID *logicalRequestUUID; // @synthesize logicalRequestUUID=_logicalRequestUUID;
@property(readonly, retain, nonatomic) TSKICloudHTTPRequestSenderFactory *requestSenderFactory; // @synthesize requestSenderFactory=_requestSenderFactory;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic) BOOL shouldResendOnClientTimeout; // @synthesize shouldResendOnClientTimeout=_shouldResendOnClientTimeout;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)p_handleUserUnauthorizedResponse:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)p_handleUserMovedResponse:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)p_handleCapturedResponse:(id)arg1 data:(id)arg2;
- (void)p_didCompleteWithData:(id)arg1 request:(id)arg2 response:(id)arg3 error:(id)arg4;
- (void)p_prepareRequestHeaders:(id)arg1;
- (id)i_makeRequestURLComponents;
- (void)captureResponse:(id)arg1 data:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)shouldCaptureResponse:(id)arg1;
- (id)requestWithData:(id)arg1;
- (void)cancel;
- (void)p_sendData;
- (void)p_sendData:(id)arg1;
- (void)sendData:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)sendData:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)logDescription;
- (void)dealloc;
- (id)init;
- (id)initWithRequestSenderFactory:(id)arg1 method:(id)arg2 host:(long long)arg3 hostOverride:(id)arg4 applicationName:(id)arg5 pathComponents:(id)arg6 parameters:(id)arg7;
- (void)tsa_convertTokenRequestWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)tsa_sendForceRefreshRequestWithQueue:(id)arg1 passphrase:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)tsa_sendRestoreVersionRequestWithEtag:(id)arg1 passphrase:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)tsa_sendDataParsingResponse:(id)arg1 endPointDescription:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

