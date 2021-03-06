//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NUAbstractScaleNode.h>

@class NUSubsampleNode;

@interface NUResampleNode : NUAbstractScaleNode
{
    long long _subsampleFactor;
    long long _sampleMode;
    NUSubsampleNode *_subsampleNode;
}

@property(readonly) NUSubsampleNode *subsampleNode; // @synthesize subsampleNode=_subsampleNode;
@property(readonly) long long sampleMode; // @synthesize sampleMode=_sampleMode;
@property(readonly) long long subsampleFactor; // @synthesize subsampleFactor=_subsampleFactor;
- (void).cxx_destruct;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (BOOL)isGeometryNode;
- (id)_evaluateImage:(out id *)arg1;
- (CDStruct_912cb5d2)_additionalScale;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;
- (id)initWithSubsampleFactor:(long long)arg1 sampleMode:(long long)arg2 source:(id)arg3 subsampleNode:(id)arg4;
- (id)initWithPreparedInput:(id)arg1 subsampleNode:(id)arg2;
- (id)initWithInput:(id)arg1 settings:(id)arg2;

@end

