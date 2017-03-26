//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKSosBase.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSKDigestData-Protocol.h"

@class NSArray, NSString;

@interface TSKImageDigestData : TSKSosBase <GSSPAutoEncodable, TSKDigestData>
{
    NSString *_digest;
    NSArray *_sourceIdentifierList;
    int _orientation;
}

@property(readonly, nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) NSArray *sourceIdentifierList; // @synthesize sourceIdentifierList=_sourceIdentifierList;
@property(readonly, nonatomic) NSString *digest; // @synthesize digest=_digest;
- (void)dealloc;
- (id)initWithDigest:(id)arg1 sourceIdentifierList:(id)arg2 orientation:(int)arg3;
- (void)populateGSSPImageDigestData:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

