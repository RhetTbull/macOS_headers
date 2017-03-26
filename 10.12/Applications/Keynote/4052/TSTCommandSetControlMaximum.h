//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTCommandMutateCellFormat.h"

#import "GSSPAutoEncodable-Protocol.h"

@interface TSTCommandSetControlMaximum : TSTCommandMutateCellFormat <GSSPAutoEncodable>
{
    double mMaximum;
}

- (void)mutateCurrentFormatInCell:(id)arg1;
- (BOOL)isMaximumValidForControlFormat:(CDStruct_8374e35e *)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithTableInfo:(id)arg1 region:(id)arg2 maximum:(double)arg3 formatType:(int)arg4;
- (id)initWithTableInfo:(id)arg1 uidList:(id)arg2 maximum:(double)arg3 formatType:(int)arg4;
- (void)populateGSSPCmdTableSetControlCellsMaximum:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

