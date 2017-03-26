//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDCanvasDelegate-Protocol.h"

@class KNAnimatedSlideModel, KNDocumentRoot, KNPlaybackSession, KNSlideNode, NSArray, NSString;

@interface KNPlaybackEventBuildEnumerator : NSObject <TSDCanvasDelegate>
{
    KNDocumentRoot *mDocumentRoot;
    KNPlaybackSession *mSession;
    KNAnimatedSlideModel *mAnimatedSlideModel;
    unsigned long long mCurrentEventIndex;
    NSArray *mCurrentEventBuildRendererTimeRanges;
}

@property(readonly, nonatomic) unsigned long long currentEventIndex; // @synthesize currentEventIndex=mCurrentEventIndex;
- (id)documentRoot;
- (void)enumerateBuildRenderersAtCurrentEventIndexUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isFirstBuildEventAutomatic) BOOL firstBuildEventAutomatic;
@property(readonly, nonatomic) unsigned long long currentSlideNodeEventCount;
- (void)gotoSlideNode:(id)arg1 eventIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) KNSlideNode *currentSlideNode;
- (void)dealloc;
- (id)init;
- (id)initWithDocumentRoot:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

