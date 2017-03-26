//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class IPXDatabaseMomentController, IPXDatabaseMomentsController, NSArray, NSString;

@protocol IPXDatabaseMomentsControllerMomentLifetimeChange

@optional
- (void)databaseMomentsController:(IPXDatabaseMomentsController *)arg1 versionsCachePurgedForYearUUID:(NSString *)arg2;
- (void)databaseMomentsController:(IPXDatabaseMomentsController *)arg1 versionsCachePurgedForCollectionUUID:(NSString *)arg2;
- (void)databaseMomentsController:(IPXDatabaseMomentsController *)arg1 momentController:(IPXDatabaseMomentController *)arg2 changedYearAssociationFrom:(NSString *)arg3 to:(NSString *)arg4;
- (void)databaseMomentsController:(IPXDatabaseMomentsController *)arg1 momentController:(IPXDatabaseMomentController *)arg2 changedCollectionAssociationFrom:(NSString *)arg3 to:(NSString *)arg4;
- (void)databaseMomentsController:(IPXDatabaseMomentsController *)arg1 didDeleteMomentControllersWithUUIDs:(NSArray *)arg2;
- (void)databaseMomentsController:(IPXDatabaseMomentsController *)arg1 willDeleteMomentControllersWithUUIDs:(NSArray *)arg2;
- (void)databaseMomentsController:(IPXDatabaseMomentsController *)arg1 didCreateMomentControllerWithUUID:(NSString *)arg2;
@end

