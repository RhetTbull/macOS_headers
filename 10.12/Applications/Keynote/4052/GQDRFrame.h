//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GQDRStroke.h"

#import "ICExportable-Protocol.h"

@class NSString;

@interface GQDRFrame : GQDRStroke <ICExportable>
{
    double mAssetScale;
}

+ (const struct StateSpec *)stateForReading;
+ (struct __CFString *)pSageFrameForTangierFrameName:(struct __CFString *)arg1;
- (double)assetScale;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)setAssetScale:(double)arg1;
- (BOOL)encodeWithExporter:(id)arg1;
- (void)encodeAttributesWithExporter:(id)arg1;
- (char *)elementName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

