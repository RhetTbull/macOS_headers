//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCHChartCommand.h"

#import "GSSPAutoEncodable-Protocol.h"

@class TSCHChartStyleState, TSCHCommandStyleSwap;

@interface TSCHCommandReplaceImageData : TSCHChartCommand <GSSPAutoEncodable>
{
    TSCHChartStyleState *mChartStyleState;
    BOOL mDefinedChartStyleState;
    TSCHCommandStyleSwap *mStyleSwapCommand;
    CDUnknownBlockType mStyleStateGenerationBlock;
    TSCHChartStyleState *mInverseChartStyleState;
}

+ (BOOL)supportsCollaboration;
- (id)initFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (const struct ChartCommandArchive *)chartCommandArchiveFromUnarchiver:(id)arg1;
- (BOOL)isValidForCommit;
- (id)makeInversePrimitive;
- (void)redoPrimitive;
- (void)undoPrimitive;
- (void)commitPrimitive;
- (void)dealloc;
- (id)initWithChartInfo:(id)arg1 chartStyleState:(id)arg2;
- (id)initWithChartInfo:(id)arg1 generatorBlock:(CDUnknownBlockType)arg2;
- (void)populateGSSPCmdChartReplaceImageData:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

