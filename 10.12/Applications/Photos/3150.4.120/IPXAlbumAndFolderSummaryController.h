//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPXSummaryViewDelegate-Protocol.h"

@class IPXSummaryViewModel, IPXVersionsSummarizer, NSString, PFCoalescer;
@protocol IPXAlbumAndFolderSummaryControllerDelegate, OS_dispatch_queue;

@interface IPXAlbumAndFolderSummaryController : NSObject <IPXSummaryViewDelegate>
{
    NSObject<OS_dispatch_queue> *_updateQueue;
    PFCoalescer *_updateCoalescer;
    id <IPXAlbumAndFolderSummaryControllerDelegate> _delegate;
    IPXSummaryViewModel *_summaryViewModel;
    IPXVersionsSummarizer *_summarizer;
}

@property(readonly, nonatomic) IPXVersionsSummarizer *summarizer; // @synthesize summarizer=_summarizer;
@property(readonly, nonatomic) IPXSummaryViewModel *summaryViewModel; // @synthesize summaryViewModel=_summaryViewModel;
@property(nonatomic) __weak id <IPXAlbumAndFolderSummaryControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)summaryViewControllerWillBeginContentPresentation:(id)arg1;
- (void)updateDateRange:(id)arg1;
- (void)updateItemCount:(id)arg1;
- (void)updateTitle:(id)arg1;
- (void)coalescedSummaryUpdate;
- (void)summaryUpdate;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

