//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCRCWeakReferenceContainer;

@interface ErrorRecoveryDelegator : NSObject
{
    SCRCWeakReferenceContainer *_delegateContainer;
}

@property(retain, nonatomic) SCRCWeakReferenceContainer *delegateContainer; // @synthesize delegateContainer=_delegateContainer;
- (BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;
@property(nonatomic) __weak id delegate;
- (void)dealloc;

@end

