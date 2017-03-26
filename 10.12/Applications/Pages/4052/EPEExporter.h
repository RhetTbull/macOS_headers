//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSKExporter-Protocol.h"

@class EPESDocument, NSDictionary, NSString, TSKDocumentRoot, TSUProgressContext;

@interface EPEExporter : NSObject <TSKExporter>
{
    TSKDocumentRoot *mDocumentRoot;
    EPESDocument *mState;
    NSDictionary *mOptions;
    TSUProgressContext *mProgressContext;
}

+ (void)initialize;
@property(retain) TSUProgressContext *progressContext; // @synthesize progressContext=mProgressContext;
- (void)setOptions:(id)arg1;
- (BOOL)isCancelled;
- (void)quit;
- (void)cancel;
- (BOOL)exportToURL:(id)arg1 delegate:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithDocumentRoot:(id)arg1;
- (void)pExtractMetadata:(id)arg1 path:(id)arg2 to:(id)arg3;
- (id)newCoverImageData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

