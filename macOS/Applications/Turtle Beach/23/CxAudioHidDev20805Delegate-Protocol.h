//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol CxAudioHidDev20805Delegate <NSObject>
- (void)updateFailure:(NSString *)arg1;
- (void)updateSuccess;
- (void)updateProcess:(unsigned int)arg1 totalPayloadSize:(unsigned int)arg2 totalNumOfBytes:(unsigned int)arg3 totalRecord:(unsigned int)arg4 feedBack:(void *)arg5;
@end

