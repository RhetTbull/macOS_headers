//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CALOperationPanelController.h"

#import "CALRemotePublisherDelegate-Protocol.h"

@class CALPublishOperation, NSButton, NSMutableDictionary, NSString, NSTextField, NSView;

@interface CALPublishPanelController : CALOperationPanelController <CALRemotePublisherDelegate>
{
    NSView *publishView;
    NSTextField *nameField;
    NSButton *publishButton;
    NSButton *publishTodosCheckbox;
    NSButton *publishSubjectsCheckbox;
    NSButton *publishAlarmsCheckbox;
    NSButton *publishAttachmentsCheckbox;
    NSButton *publishChangesCheckbox;
    NSTextField *srvURLField;
    NSTextField *srvLoginField;
    NSTextField *srvPasswordField;
    BOOL _nibLoaded;
    NSMutableDictionary *_pendingUnpublish;
    CALPublishOperation *_publishOperation;
    BOOL _handleUnpublishCallbackInController;
}

- (void).cxx_destruct;
- (void)remotePublisher:(id)arg1 progressedToCurrentUnits:(unsigned long long)arg2 totalUnits:(unsigned long long)arg3;
- (void)remotePublisher:(id)arg1 didFinishWithError:(id)arg2;
- (void)abortOperation;
- (int)unpublishModalPublication:(id)arg1;
- (void)validateSrvURLField:(id)arg1;
- (void)enablePublishIfNecessary;
- (id)_getBaseURL;
- (void)controlTextDidChange:(id)arg1;
- (void)changeFilter:(id)arg1;
- (void)cancel:(id)arg1;
- (void)startPublish:(id)arg1;
- (void)unpublishDoneForRemotePublisher:(id)arg1;
- (void)unpublish:(id)arg1;
- (int)publishLoopForNode:(id)arg1 unpublish:(BOOL)arg2;
- (int)changeLocationForNode:(id)arg1;
- (int)publishLoopForNode:(id)arg1;
- (BOOL)unpublishNode:(id)arg1;
- (BOOL)publishNode:(id)arg1 withUnpublish:(BOOL)arg2;
- (BOOL)changeLocation:(id)arg1;
- (BOOL)publishNode:(id)arg1;
- (BOOL)load;
- (void)dealloc;
- (id)init;
- (id)initWithMainController:(id)arg1;
- (void)checkConsistency;
- (void)validateSrvURL;
- (void)_handleErrorForTitle:(id)arg1 url:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

