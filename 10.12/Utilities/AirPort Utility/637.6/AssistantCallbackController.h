//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AssistantCallbackUIDelegateResult-Protocol.h"

@protocol AssistantCallbackUIDelegate;

@interface AssistantCallbackController : NSObject <AssistantCallbackUIDelegateResult>
{
    BOOL _saveScanState;
    id _uiDelegate;
    struct AssistantCallbackContext *_callbackContext;
}

+ (int)removeKeychainPasswordForBaseStation:(id)arg1;
+ (void)keychainPasswordForBaseStation:(id)arg1 delegate:(id)arg2;
+ (id)keychainPasswordForBaseStation:(id)arg1;
+ (int)updateKeychainBasePassword:(id)arg1 forMACAddress:(id)arg2 withBaseName:(id)arg3;
+ (int)updateKeychainNetworkPassword:(id)arg1 forNetworkNamed:(id)arg2;
@property(nonatomic) id <AssistantCallbackUIDelegate> uiDelegate; // @synthesize uiDelegate=_uiDelegate;
- (void)callbackAskUserAQuestionResult:(int)arg1 result:(int)arg2;
- (void)callbackAskUserToChooseFromStringListResult:(int)arg1 selectedString:(id)arg2;
- (void)callbackAskUserForPasswordResult:(int)arg1 password:(id)arg2 remember:(int)arg3;
- (int)subclassAssistantCallback:(struct AssistantCallbackContext *)arg1;
- (CDUnknownFunctionPointerType)assistantCallback;
- (void)dealloc;
- (id)init;
- (void)directedScanDone:(id)arg1;
- (void)scanForNetworksDone:(id)arg1;
- (int)startScanForNetworks;
- (int)startDirectedScan:(id)arg1 wifiType:(int)arg2 retries:(long long)arg3;
- (void)joinNetworkDone:(id)arg1;
- (int)startJoinNetwork:(id)arg1 password:(id)arg2 rememberChoice:(int)arg3;
- (void)userResponseToPPPoECredsFailed:(int)arg1;
- (void)userResponseToWarning:(int)arg1;
- (void)userResponseToJoinNetwork:(int)arg1;
- (int)assistantCallback:(struct AssistantCallbackContext *)arg1 withSelector:(int)arg2;

@end

