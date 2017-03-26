//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString;

@interface TSMTraceController : NSObject
{
    NSMutableArray *mBuffers;
    NSString *mTraceDirectory;
    long long mLastBufferID;
    NSDictionary *mBuildInfo;
    int mModuleCache[256];
    unsigned int mFilterCache[256];
}

+ (void)flushAllBuffers;
+ (void)startTracing;
+ (void)stopTracing;
+ (void)closeBufferWithID:(long long)arg1;
+ (void)addBuffer:(id)arg1;
+ (id)bufferByID:(long long)arg1;
+ (long long)addBufferWithTag:(id)arg1 size:(long long)arg2 synchronized:(BOOL)arg3;
+ (long long)addBufferWithTag:(id)arg1 size:(long long)arg2;
+ (id)traceDirectory;
+ (void)shutdown;
+ (BOOL)setup;
@property(readonly, nonatomic) NSString *traceDirectory; // @synthesize traceDirectory=mTraceDirectory;
- (void)p_buffer:(id)arg1 changedModule:(int)arg2 toFilter:(unsigned int)arg3 from:(unsigned int)arg4;
- (void)writeTraceRecord:(struct TSMTraceRecord_s *)arg1 withFilter:(unsigned int)arg2;
- (void)closeBuffer:(id)arg1;
- (void)p_writeBuildInfoToFile:(id)arg1;
- (long long)addBuffer:(id)arg1;
- (id)bufferByID:(long long)arg1;
- (void)startTracing;
- (void)stopTracing;
- (void)flushAllBuffers;
- (id)buffers;
- (void)dealloc;
- (id)init;
- (long long)p_newBufferID;
- (id)p_createTraceDirectory;

@end

