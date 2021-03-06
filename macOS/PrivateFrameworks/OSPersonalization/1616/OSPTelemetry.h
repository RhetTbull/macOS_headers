//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, OSPRequest;

@interface OSPTelemetry : NSObject
{
    BOOL _isAppleInternal;
    BOOL _multipleVariants;
    OSPRequest *_request;
    NSString *_client;
    NSString *_sessionUUID;
    NSError *_error;
}

- (void).cxx_destruct;
@property(retain) NSError *error; // @synthesize error=_error;
@property BOOL multipleVariants; // @synthesize multipleVariants=_multipleVariants;
@property(retain) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property BOOL isAppleInternal; // @synthesize isAppleInternal=_isAppleInternal;
@property(retain) NSString *client; // @synthesize client=_client;
@property(retain) OSPRequest *request; // @synthesize request=_request;
- (void)__submitToInstallerDiagnostics;
- (void)_submitToInstallerDiagnostics;
- (id)_summaryForLogging;
- (void)submitWithError:(id)arg1;
- (id)initWithRequest:(id)arg1 multipleVariants:(BOOL)arg2;
- (id)initWithRequest:(id)arg1;
- (id)init;

@end

