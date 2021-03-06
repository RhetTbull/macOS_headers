//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSSandboxExtensionToken.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSSet, NSURL;

@interface WBSSandboxExtensionToken : NSObject <WBSSandboxExtensionToken>
{
    NSArray *_extensions;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _stopAccessingRequestURLWhenDone;
    NSURL *_requestURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property(readonly, nonatomic) BOOL stopAccessingRequestURLWhenDone; // @synthesize stopAccessingRequestURLWhenDone=_stopAccessingRequestURLWhenDone;
- (id)copy;
- (void)dealloc;
- (void)invalidate;
- (BOOL)isValid;
@property(readonly, nonatomic) NSURL *shortestAccessibleURL;
@property(readonly, copy, nonatomic) NSSet *urls;
- (id)_consumeAllExtensionsOrNone:(id)arg1 error:(id *)arg2;
- (id)initWithExtensions:(id)arg1 requestURL:(id)arg2 stopAccessingRequestURLWhenDone:(BOOL)arg3 queue:(id)arg4 error:(id *)arg5;

@end

