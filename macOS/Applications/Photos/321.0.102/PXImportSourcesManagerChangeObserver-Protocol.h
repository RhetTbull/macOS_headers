//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PXChangeObserver-Protocol.h"

@class PHImportSource, PXImportSourcesManager;

@protocol PXImportSourcesManagerChangeObserver <PXChangeObserver>

@optional
- (void)importSourcesManager:(PXImportSourcesManager *)arg1 didRemoveImportSource:(PHImportSource *)arg2;
- (void)importSourcesManager:(PXImportSourcesManager *)arg1 didUpdateImportSource:(PHImportSource *)arg2;
- (void)importSourcesManager:(PXImportSourcesManager *)arg1 didAddImportSource:(PHImportSource *)arg2;
@end

