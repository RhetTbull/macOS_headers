//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayerItem, MGPlayerDocument, NSAlert;

@interface MGPlayerDocumentDRMHandler : NSObject
{
    MGPlayerDocument *_playerDocument;
    AVPlayerItem *_playerItem;
    NSAlert *_authorizationInProgressAlert;
    CDUnknownBlockType _completionHandler;
    unsigned int _needsToShowDRMAlerts:1;
    unsigned int _needsToWaitForAuthorization:1;
}

- (void).cxx_destruct;
- (void)waitForAuthorization;
- (void)confirmAuthorization;
- (void)authorizationFailedWithStatus:(long long)arg1;
- (void)closeDocumentWhenPossible;
- (void)displayDRMAuthorizationAlertWithDescription:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 waitForAuthorization:(BOOL)arg4;
- (BOOL)needsToShowDRMAlerts;
- (void)validateDRMWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)completionHandler;
- (void)invalidate;
- (id)initWithDocument:(id)arg1 playerItem:(id)arg2;

@end

