//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXDatabase2ndLevelObjectsController.h"

#import "RDLibraryMessagesReceiver-Protocol.h"

@class IPXDatabaseMomentsController, NSString;

@interface IPXDatabase2ndLevelMomentsGroupingController : IPXDatabase2ndLevelObjectsController <RDLibraryMessagesReceiver>
{
    IPXDatabaseMomentsController *_databaseMomentsController;
}

- (void).cxx_destruct;
- (void)handleNotReadyChildControllers:(id)arg1;
- (void)locked_arrangedObjectsWillLoseObjects:(id)arg1;
- (void)locked_arrangedObjectsDidGainObjects:(id)arg1;
- (void)uninstallObjectsSourceMonitor;
- (void)installObjectsSourceMonitor;
- (id)databaseMomentsController;
- (id)initWithDatabaseMomentsController:(id)arg1 uuid:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

