//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FIRAuthRequestConfiguration, NSData, NSString, NSURL;

@protocol FIRAuthBackendRPCIssuer <NSObject>
- (void)asyncPostToURLWithRequestConfiguration:(FIRAuthRequestConfiguration *)arg1 URL:(NSURL *)arg2 body:(NSData *)arg3 contentType:(NSString *)arg4 completionHandler:(void (^)(NSData *, NSError *))arg5;
@end

