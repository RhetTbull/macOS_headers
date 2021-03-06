//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class AWDProactiveModelFittingEvaluation, AWDProactiveModelFittingLinRegFeatureMatrix, AWDProactiveModelFittingLinRegObjectiveFeatures, AWDProactiveModelFittingLogRegGradient, AWDProactiveModelFittingLogRegWeights;

@interface AWDProactiveModelFittingParsecFeedbackEnvelope : PBCodable <NSCopying>
{
    AWDProactiveModelFittingEvaluation *_evaluation;
    AWDProactiveModelFittingLinRegFeatureMatrix *_linRegFeatureMatrix;
    AWDProactiveModelFittingLinRegObjectiveFeatures *_linRegObjectiveFeatures;
    AWDProactiveModelFittingLogRegGradient *_logRegGradient;
    AWDProactiveModelFittingLogRegWeights *_logRegWeights;
}

@property(retain, nonatomic) AWDProactiveModelFittingLinRegObjectiveFeatures *linRegObjectiveFeatures; // @synthesize linRegObjectiveFeatures=_linRegObjectiveFeatures;
@property(retain, nonatomic) AWDProactiveModelFittingLinRegFeatureMatrix *linRegFeatureMatrix; // @synthesize linRegFeatureMatrix=_linRegFeatureMatrix;
@property(retain, nonatomic) AWDProactiveModelFittingLogRegGradient *logRegGradient; // @synthesize logRegGradient=_logRegGradient;
@property(retain, nonatomic) AWDProactiveModelFittingLogRegWeights *logRegWeights; // @synthesize logRegWeights=_logRegWeights;
@property(retain, nonatomic) AWDProactiveModelFittingEvaluation *evaluation; // @synthesize evaluation=_evaluation;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasLinRegObjectiveFeatures;
@property(readonly, nonatomic) BOOL hasLinRegFeatureMatrix;
@property(readonly, nonatomic) BOOL hasLogRegGradient;
@property(readonly, nonatomic) BOOL hasLogRegWeights;
@property(readonly, nonatomic) BOOL hasEvaluation;

@end

