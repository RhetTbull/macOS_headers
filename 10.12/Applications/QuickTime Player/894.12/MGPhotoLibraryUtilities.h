//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MGPhotoLibraryUtilities : NSObject
{
}

+ (CDStruct_1b6d18a9)naturalTimeFromScaledTime:(CDStruct_1b6d18a9)arg1 forMediaClip:(id)arg2 withSlowMotionTimeRange:(CDStruct_e83c9415)arg3;
+ (CDStruct_1b6d18a9)scaledTimeFromNaturalTime:(CDStruct_1b6d18a9)arg1 forMediaClip:(id)arg2 withSlowMotionTimeRange:(CDStruct_e83c9415)arg3;
+ (CDStruct_1b6d18a9)naturalTimeFromScaledTime:(CDStruct_1b6d18a9)arg1 forMediaClip:(id)arg2;
+ (CDStruct_1b6d18a9)scaledTimeFromNaturalTime:(CDStruct_1b6d18a9)arg1 forMediaClip:(id)arg2;
+ (BOOL)writeSlowMotionDataForMediaClip:(id)arg1 withOriginalItemURL:(id)arg2;
+ (BOOL)readSlowMotionDataForMediaClip:(id)arg1 withOriginalItemURL:(id)arg2;

@end

