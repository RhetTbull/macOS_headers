//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SampleAnalysis/SACountedTreeNode.h>

#import "SAJSONSerialization.h"

@class NSMutableArray, NSString, SAFrame;

__attribute__((visibility("hidden")))
@interface SACountedTreeFrame : SACountedTreeNode <SAJSONSerialization>
{
    BOOL _isLeafFrame;
    SAFrame *_frame;
    NSMutableArray *_children;
}

+ (void)enumerateTree:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)treeFrameWithFrame:(id)arg1 startSampleIndex:(unsigned long long)arg2 sampleCount:(unsigned long long)arg3 isLeafFrame:(BOOL)arg4;
- (void).cxx_destruct;
@property(readonly) NSMutableArray *children; // @synthesize children=_children;
@property(readonly) BOOL isLeafFrame; // @synthesize isLeafFrame=_isLeafFrame;
@property(readonly) SAFrame *frame; // @synthesize frame=_frame;
- (void)writeJSONDictionaryEntriesToStream:(id)arg1;
- (id)initWithFrame:(id)arg1 startSampleIndex:(unsigned long long)arg2 sampleCount:(unsigned long long)arg3 isLeafFrame:(BOOL)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

