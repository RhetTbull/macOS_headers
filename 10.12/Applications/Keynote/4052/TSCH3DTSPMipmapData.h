//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSCHUnretainedParent-Protocol.h"

@class TSCH3DTSPImageDataTexture, TSPData;

@interface TSCH3DTSPMipmapData : NSObject <TSCHUnretainedParent>
{
    TSCH3DTSPImageDataTexture *mParent;
    TSPData *mData;
}

+ (id)dataWithTSPData:(id)arg1;
@property(readonly, nonatomic) TSPData *data; // @synthesize data=mData;
- (id)databuffer;
- (void)setParent:(id)arg1;
- (void)clearParent;
- (void)dealloc;
- (id)initWithTSPData:(id)arg1;

@end

