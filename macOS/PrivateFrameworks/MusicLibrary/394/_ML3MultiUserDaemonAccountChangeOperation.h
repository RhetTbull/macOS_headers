//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSVAsyncOperation.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _ML3MultiUserDaemonAccountChangeOperation : MSVAsyncOperation
{
    NSString *_initialDSID;
    NSString *_finalDSID;
    id <_ML3MultiUserDaemonAccountChangeOperationDelegate> _delegate;
    id <MLMediaLibraryAccountChangeObserver> _accountChangeObserver;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <MLMediaLibraryAccountChangeObserver> accountChangeObserver; // @synthesize accountChangeObserver=_accountChangeObserver;
@property(nonatomic) __weak id <_ML3MultiUserDaemonAccountChangeOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *finalDSID; // @synthesize finalDSID=_finalDSID;
@property(readonly, copy, nonatomic) NSString *initialDSID; // @synthesize initialDSID=_initialDSID;
- (void)execute;
- (id)initWithInitialDSID:(id)arg1 finalDSID:(id)arg2 accountChangeObserver:(id)arg3;

@end

