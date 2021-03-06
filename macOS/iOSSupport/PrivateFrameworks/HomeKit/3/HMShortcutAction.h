//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/HMAction.h>

@class WFHomeWorkflow;

@interface HMShortcutAction : HMAction
{
    WFHomeWorkflow *_shortcut;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)isSupportedForHome:(id)arg1;
+ (id)_actionWithInfo:(id)arg1 home:(id)arg2;
- (void).cxx_destruct;
@property(readonly) WFHomeWorkflow *shortcut; // @synthesize shortcut=_shortcut;
- (id)initWithCoder:(id)arg1;
- (id)_serializeForAdd;
- (BOOL)requiresDeviceUnlock;
- (BOOL)isValid;
- (unsigned long long)type;
- (id)initWithShortcut:(id)arg1;

@end

