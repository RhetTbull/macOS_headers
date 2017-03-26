//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSKExporter-Protocol.h"

@class KNDocumentRoot, KNMovieExporter, NSDictionary, NSMutableArray, NSString, TSUProgress, TSUScaledProgress;
@protocol KNMovieSampleGenerator, OS_dispatch_queue;

@interface KNQTExporter : NSObject <TSKExporter>
{
    KNDocumentRoot *mDocumentRoot;
    NSDictionary *mOptions;
    TSUScaledProgress *mProgress;
    NSObject<OS_dispatch_queue> *mQueue;
    id <KNMovieSampleGenerator> mMovieSampleGenerator;
    NSMutableArray *mMovieSampleGeneratorPreparationCompletionHandlers;
    BOOL mIsMovieSampleGeneratorPrepared;
    KNMovieExporter *mMovieExporter;
    // Error parsing type: Ai, name: mCancelled
}

@property(readonly) TSUProgress *progress; // @synthesize progress=mProgress;
- (id)documentSpecificTypeUTI;
- (void)quit;
- (void)setOptions:(id)arg1;
- (void)setProgressContext:(id)arg1;
- (id)progressContext;
- (BOOL)isCancelled;
- (void)cancel;
- (id)p_exportPreset;
- (void)p_didPrepareMovieSampleGenerator;
- (void)p_prepareMovieSampleGeneratorWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)exportToURL:(id)arg1 delegate:(id)arg2 error:(id *)arg3;
- (void)calculateMovieDurationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithDocumentRoot:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

