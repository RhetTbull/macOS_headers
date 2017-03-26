//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPCryptoInfoInternal.h"

#import "TSPMutableCryptoInfo-Protocol.h"

@class NSArray, NSString, SFUCryptoKey;

@interface TSPMutableCryptoInfoInternal : TSPCryptoInfoInternal <TSPMutableCryptoInfo>
{
}

- (void)incrementDecodedLengthBy:(unsigned long long)arg1;
- (void)addBlockInfo:(id)arg1;
- (void)reset;
- (id)initWithCryptoKey:(id)arg1 preferredBlockSize:(unsigned long long)arg2 blockInfos:(id)arg3 decodedLength:(unsigned long long)arg4;

// Remaining properties
@property(readonly, nonatomic) NSArray *blockInfos;
@property(readonly, nonatomic) SFUCryptoKey *cryptoKey;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) unsigned long long decodedLength;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasDecodedLength;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long preferredBlockSize;
@property(readonly) Class superclass;

@end

