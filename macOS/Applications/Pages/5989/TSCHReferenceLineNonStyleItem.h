//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSSPAutoEncodable-Protocol.h"

@class NSUUID, TSCHReferenceLineNonStyle;

@interface TSCHReferenceLineNonStyleItem : NSObject <GSSPAutoEncodable>
{
    TSCHReferenceLineNonStyle *mNonStyle;
    NSUUID *mUUID;
}

@property(retain, nonatomic) TSCHReferenceLineNonStyle *nonStyle; // @synthesize nonStyle=mNonStyle;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=mUUID;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1 message:(struct ChartReferenceLineNonStyleItem *)arg2;
- (id)initFromUnarchiver:(id)arg1 message:(const struct ChartReferenceLineNonStyleItem *)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithNonStyle:(id)arg1 uuid:(id)arg2;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (void)populateGSSPChartReferenceLineNonStyleItem:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;

@end

