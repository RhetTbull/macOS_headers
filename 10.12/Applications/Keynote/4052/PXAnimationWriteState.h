//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OCXWriteState, TCXmlPrefixStreamWriter;

@interface PXAnimationWriteState : NSObject
{
    unsigned long long mCommonTimeNodeDataId;
    OCXWriteState *mWriteState;
    TCXmlPrefixStreamWriter *mFile;
    BOOL mHasMainSeqTimeNodeId;
    unsigned long long mMainSeqTimeNodeId;
}

@property(retain, nonatomic) TCXmlPrefixStreamWriter *file; // @synthesize file=mFile;
@property(retain, nonatomic) OCXWriteState *writeState; // @synthesize writeState=mWriteState;
- (unsigned long long)mainSeqTimeNodeId;
- (void)setMainSeqTimeNodeId:(unsigned long long)arg1;
- (BOOL)hasMainSeqTimeNodeId;
- (unsigned long long)newCommonTimeNodeDataId;
- (void)dealloc;
- (id)initWithWriteState:(id)arg1 file:(id)arg2;

@end

