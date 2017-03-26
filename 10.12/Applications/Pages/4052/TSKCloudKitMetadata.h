//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKSosBase.h"

#import "GSSPAutoEncodable-Protocol.h"

@class NSString;

@interface TSKCloudKitMetadata : TSKSosBase <GSSPAutoEncodable>
{
    NSString *_etag;
}

@property(readonly, nonatomic) NSString *etag; // @synthesize etag=_etag;
- (void)dealloc;
- (id)initWithEtag:(id)arg1;
- (void)populateGSSPCloudKitMetadata:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

