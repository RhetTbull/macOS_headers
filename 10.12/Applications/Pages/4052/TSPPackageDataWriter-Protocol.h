//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol TSPPackageDataWriter <NSObject>
- (struct CGDataConsumer *)newCGDataConsumerAtRelativePath:(NSString *)arg1;
- (BOOL)writeData:(NSData *)arg1 toRelativePath:(NSString *)arg2 allowEncryption:(BOOL)arg3 error:(id *)arg4;
@end

