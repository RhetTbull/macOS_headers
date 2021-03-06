//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TXRBuffer.h"

@class NSMutableData, NSString;

__attribute__((visibility("hidden")))
@interface TXRDefaultBuffer : NSObject <TXRBuffer>
{
    NSMutableData *_data;
}

- (void).cxx_destruct;
- (id)map;
- (id)initWithLength:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2;
- (id)initWithData:(id)arg1 zone:(struct _NSZone *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

