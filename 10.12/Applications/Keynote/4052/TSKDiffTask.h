//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSKDeserializedDiff;

@interface TSKDiffTask : NSObject
{
    CDUnknownBlockType _completion;
    TSKDeserializedDiff *_deserializedDiff;
}

@property(readonly, nonatomic) TSKDeserializedDiff *deserializedDiff; // @synthesize deserializedDiff=_deserializedDiff;
- (void)callCompletionWithDidProcessDiffs:(BOOL)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithDeserializedDiff:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

