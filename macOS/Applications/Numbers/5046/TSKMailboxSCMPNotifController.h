//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSKMailboxSessionControllerDelegate-Protocol.h"

@class NSString, TSKDocumentRoot;
@protocol TSKMailboxSessionController;

@interface TSKMailboxSCMPNotifController : NSObject <TSKMailboxSessionControllerDelegate>
{
    TSKDocumentRoot *_documentRoot;
    id <TSKMailboxSessionController> _mailboxSessionController;
}

@property(nonatomic) __weak id <TSKMailboxSessionController> mailboxSessionController; // @synthesize mailboxSessionController=_mailboxSessionController;
- (void).cxx_destruct;
- (void)p_setClientAccessModeOnScmpRequest:(id)arg1;
- (void)p_processResponse:(id)arg1;
- (void)onDisconnectedWithCode:(unsigned long long)arg1 message:(id)arg2;
- (void)onUnrecoverableError:(id)arg1;
- (void)onResponseError:(id)arg1;
- (void)reInit;
- (void)processResponsePayload:(id)arg1;
- (void)preProcessResponsePayload:(id)arg1;
- (void)onResponseReceived;
- (void)onRequestSent;
- (void)populateDataRequest:(id)arg1;
- (void)populateActionRequest:(id)arg1;
- (BOOL)hasPendingActions;
- (id)initWithDocumentRoot:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

