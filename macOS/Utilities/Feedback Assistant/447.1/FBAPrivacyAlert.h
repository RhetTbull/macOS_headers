//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSResponder.h>

@class NSAlert;

@interface FBAPrivacyAlert : NSResponder
{
    NSAlert *_alert;
    BOOL _allowsSuppression;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property BOOL allowsSuppression; // @synthesize allowsSuppression=_allowsSuppression;
- (void)alertDidEnd:(id)arg1 returnCode:(unsigned long long)arg2 contextInfo:(void *)arg3;
- (void)beginSheetIfNeededModalForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)runModalIfNeeded;
@property(readonly) NSAlert *alert;
- (id)initAllowingSuppression:(BOOL)arg1;
- (id)init;

@end

