//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCHChartCommand.h"

#import "GSSPAutoEncodable-Protocol.h"

@class NSString;

@interface TSCHCommandSetSeriesName : TSCHChartCommand <GSSPAutoEncodable>
{
    NSString *_oldName;
    int _seriesIndex;
    NSString *_name;
}

+ (BOOL)supportsCollaboration;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (const struct ChartCommandArchive *)chartCommandArchiveFromUnarchiver:(id)arg1;
- (id)makeInversePrimitive;
- (BOOL)isValidForCommit;
- (void)redoPrimitive;
- (void)undoPrimitive;
- (void)commitPrimitive;
- (id)p_series;
- (id)actionString;
- (void)dealloc;
- (id)initWithChartInfo:(id)arg1 seriesIndex:(unsigned long long)arg2 name:(id)arg3;
- (void)populateGSSPCmdChartSetSeriesName:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

