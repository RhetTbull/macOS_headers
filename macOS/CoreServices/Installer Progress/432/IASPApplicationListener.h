//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IASUnifiedProgressProtocol-Protocol.h"

@class IASPApplicationProgressControllerListener, IASPShieldWindowController, NSMutableDictionary, NSXPCListener;
@protocol NSXPCListenerDelegate, OS_dispatch_queue;

@interface IASPApplicationListener : NSObject <IASUnifiedProgressProtocol>
{
    NSXPCListener *_listener;
    IASPApplicationProgressControllerListener<NSXPCListenerDelegate> *_listenerDelegate;
    NSObject<OS_dispatch_queue> *_managerSerialQueue;
    IASPShieldWindowController *_shieldWindowController;
    NSMutableDictionary *_connectedProcesses;
    BOOL _progressUIEnded;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)_startListener;
- (void)_removeConnection:(int)arg1;
- (void)_quitTimerHandler:(id)arg1;
- (void)_startQuitTimer:(long long)arg1 userInfo:(id)arg2;
- (void)getVersion:(CDUnknownBlockType)arg1;
- (void)registerClient:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)unregisterClient:(id)arg1;
- (void)registerClient:(id)arg1;
- (void)setBatteryInfo:(id)arg1;
- (void)setPhaseDone:(id)arg1;
- (void)setPhaseAlternateStatus:(id)arg1;
- (void)setPhaseStatus:(id)arg1;
- (void)setPhaseProgress:(id)arg1;
- (void)isShowingUI:(CDUnknownBlockType)arg1;
- (void)hideProgressUI;
- (void)showProgressUI:(id)arg1;
- (void)hasPhases:(CDUnknownBlockType)arg1;
- (void)clearPhases;
- (void)addPhase:(id)arg1;
- (void)currentProgress:(CDUnknownBlockType)arg1;
- (id)phaseNameFromInfo:(id)arg1;

@end

