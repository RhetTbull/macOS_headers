//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "_IPXDatabaseVersionsQueryEditorialModel.h"

@class RDMemory;

@interface _IPXDatabaseMemoryEditorialModel : _IPXDatabaseVersionsQueryEditorialModel
{
    RDMemory *_databaseMemory;
    BOOL _didLoadTitleCategory;
    long long _titleCategory;
}

- (void).cxx_destruct;
- (void)libraryUpdatedMemory:(id)arg1 forKeyPaths:(id)arg2;
- (unsigned long long)userEventSourceType;
- (id)navigationDestination;
- (BOOL)hasLocation;
- (void)deleteMemoryWithUndoManager:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)canDeleteMemory;
- (BOOL)canCreateMemory;
- (void)toggleFavoriteWithUndoManager:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)isFavorite;
- (BOOL)canFavorite;
- (unsigned long long)titleFontNameHash;
- (long long)titleCategory;
- (id)titleFontName;
- (id)subtitle;
- (id)title;
- (id)newAssetCollection;
- (id)initWithDatabaseMemory:(id)arg1 posterVersion:(id)arg2;

@end

