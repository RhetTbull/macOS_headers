//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLPhotoLibrary.h>

@interface PLMainQueuePhotoLibrary : PLPhotoLibrary
{
    int _splChangedToken;
}

+ (id)systemMainQueuePhotoLibrary;
+ (void)_resetSharedInstance;
- (void)dealloc;
- (id)initWithName:(const char *)arg1 libraryBundle:(id)arg2 options:(id)arg3;

@end

