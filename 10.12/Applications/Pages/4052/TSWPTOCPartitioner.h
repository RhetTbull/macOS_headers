//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDPartitioner-Protocol.h"

@class TSWPTOCInfo;

@interface TSWPTOCPartitioner : NSObject <TSDPartitioner>
{
    TSWPTOCInfo *_info;
}

@property(readonly, nonatomic) TSWPTOCInfo *info; // @synthesize info=_info;
- (id)hintForLayout:(id)arg1;
- (BOOL)didHint:(id)arg1 syncWithNextHint:(id)arg2 horizontally:(BOOL)arg3 delta:(int)arg4;
- (id)layoutForHint:(id)arg1 parentLayout:(id)arg2;
- (id)nextHintForSize:(struct CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(BOOL)arg4 outFinished:(out char *)arg5;
- (id)nextLayoutForSize:(struct CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(BOOL)arg4 outFinished:(out char *)arg5;
- (id)initWithInfo:(id)arg1;

@end

