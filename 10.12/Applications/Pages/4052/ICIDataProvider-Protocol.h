//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GQDImageBinary, GQDSFEData, TSPData, TSPDocumentResourceDataProvider;

@protocol ICIDataProvider <NSObject>
@property(readonly, nonatomic) TSPDocumentResourceDataProvider *documentResourceDataProvider;
- (TSPData *)dataFromImageBinary:(GQDImageBinary *)arg1 needsDownload:(char *)arg2;
- (TSPData *)dataFromSFEData:(GQDSFEData *)arg1 needsDownload:(char *)arg2;
@end

