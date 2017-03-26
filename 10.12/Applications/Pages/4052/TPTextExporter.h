//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSKExporter-Protocol.h"

@class NSString, TPDocumentRoot, TSUProgressContext;

@interface TPTextExporter : NSObject <TSKExporter>
{
    TPDocumentRoot *mDocumentRoot;
    BOOL mIsCancelled;
    TSUProgressContext *mProgressContext;
}

@property(retain) TSUProgressContext *progressContext; // @synthesize progressContext=mProgressContext;
- (BOOL)exportToURL:(id)arg1 delegate:(id)arg2 error:(id *)arg3;
- (id)initWithDocumentRoot:(id)arg1;
- (void)dealloc;
- (void)quit;
- (void)cancel;
- (BOOL)isCancelled;
- (void)setup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

