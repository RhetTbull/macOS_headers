//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCH3DRetargetRenderProcessor.h"

@class NSDictionary, NSMutableDictionary, TSCH3DScene;

@interface TSCH3DGeometryCollector : TSCH3DRetargetRenderProcessor
{
    TSCH3DScene *mScene;
    NSMutableDictionary *mDerivedData;
}

+ (id)collectorWithScene:(id)arg1;
+ (id)processor;
+ (id)processorWithOriginal:(id)arg1;
@property(readonly, nonatomic) NSDictionary *derivedData; // @synthesize derivedData=mDerivedData;
@property(readonly, nonatomic) TSCH3DScene *scene; // @synthesize scene=mScene;
- (void)dealloc;
- (id)init;
- (id)initWithScene:(id)arg1;

@end

