//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface KNEmptyMovieFileGenerator : NSObject
{
    NSURL *mGeneratedFileURL;
    double mDuration;
}

@property(readonly, nonatomic) NSURL *generatedFileURL; // @synthesize generatedFileURL=mGeneratedFileURL;
- (void)generateFileWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithGeneratedFileURL:(id)arg1 duration:(double)arg2;

@end

