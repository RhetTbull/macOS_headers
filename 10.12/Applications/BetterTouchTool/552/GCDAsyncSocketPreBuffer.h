//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface GCDAsyncSocketPreBuffer : NSObject
{
    char *preBuffer;
    unsigned long long preBufferSize;
    char *readPointer;
    char *writePointer;
}

- (void)reset;
- (void)didWrite:(unsigned long long)arg1;
- (void)getWriteBuffer:(char **)arg1 availableSpace:(unsigned long long *)arg2;
- (char *)writeBuffer;
- (unsigned long long)availableSpace;
- (void)didRead:(unsigned long long)arg1;
- (void)getReadBuffer:(char **)arg1 availableBytes:(unsigned long long *)arg2;
- (char *)readBuffer;
- (unsigned long long)availableBytes;
- (void)ensureCapacityForWrite:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;

@end

