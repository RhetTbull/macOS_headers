//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSData.h>

@class NSMutableData;

@interface MGAppendableData : NSData
{
    NSMutableData *_backing;
    unsigned long long _readOnlyLength;
    unsigned long long _appendableLength;
}

- (void).cxx_destruct;
- (id)subdataWithRange:(struct _NSRange)arg1;
- (void)appendData:(id)arg1;
- (void)appendBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (unsigned long long)maximumCapacity;
- (const void *)bytes;
- (unsigned long long)length;
- (id)init;
- (id)initWithMaximumCapacity:(unsigned long long)arg1;

@end

