//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Photos/PHAssetResource.h>

@class RDMaster;

@interface PHAssetResourceOriginal : PHAssetResource
{
    RDMaster *_master;
}

- (void).cxx_destruct;
- (long long)analysisType;
- (id)urlWithError:(id *)arg1;
- (id)newDownloadResourceRequest;
- (BOOL)isLocallyAvailable;
- (id)originalFilename;
- (id)uniformTypeIdentifier;
- (id)initWithAsset:(id)arg1 resourceType:(long long)arg2;

@end

