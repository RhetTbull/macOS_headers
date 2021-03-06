//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface KCJoiningMessage : NSObject
{
    int _type;
    NSData *_firstData;
    NSData *_secondData;
    NSData *_der;
}

+ (id)encodeToDERType:(int)arg1 data:(id)arg2 payload:(id)arg3 error:(id *)arg4;
+ (unsigned long long)encodedSizeType:(int)arg1 data:(id)arg2 payload:(id)arg3 error:(id *)arg4;
+ (id)messageWithType:(int)arg1 data:(id)arg2 payload:(id)arg3 error:(id *)arg4;
+ (id)messageWithType:(int)arg1 data:(id)arg2 secondData:(id)arg3 error:(id *)arg4;
+ (id)messageWithType:(int)arg1 data:(id)arg2 error:(id *)arg3;
+ (id)messageWithDER:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly) NSData *der; // @synthesize der=_der;
@property(readonly) NSData *secondData; // @synthesize secondData=_secondData;
@property(readonly) NSData *firstData; // @synthesize firstData=_firstData;
@property(readonly) int type; // @synthesize type=_type;
- (id)initWithType:(int)arg1 data:(id)arg2 payload:(id)arg3 error:(id *)arg4;
- (id)initWithDER:(id)arg1 error:(id *)arg2;
- (_Bool)inflatePartsOfEncoding:(id *)arg1;

@end

