//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ControlContaineeViewController.h"

#import "UGCPOIEnrichmentEditor-Protocol.h"

@class CardView, NSString, UGCPOIEnrichmentForm, UGCPOIEnrichmentModalHeaderView, UGCPOIEnrichmentViewController;
@protocol UGCPOIEnrichmentEditorDelegate;

__attribute__((visibility("hidden")))
@interface UGCPOIEnrichmentContaineeViewController : ControlContaineeViewController <UGCPOIEnrichmentEditor>
{
    UGCPOIEnrichmentViewController *_contentViewController;
    UGCPOIEnrichmentForm *_poiEnrichmentForm;
    UGCPOIEnrichmentModalHeaderView *_headerView;
    CardView *_cardView;
    BOOL _showCardBackground;
    id <UGCPOIEnrichmentEditorDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL showCardBackground; // @synthesize showCardBackground=_showCardBackground;
@property(nonatomic) __weak id <UGCPOIEnrichmentEditorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)submissionFinishedWithError:(id)arg1;
- (void)willBeginSubmissionWithProgress:(id)arg1;
- (void)formDidChange:(id)arg1;
- (struct CGSize)preferredContentSize;
- (double)heightForLayout:(unsigned long long)arg1;
- (void)viewDidLoad;
- (void)_updateAppearanceForSubmission;
- (void)sendButtonPressed;
- (void)cancelButtonPressed;
- (id)initWithPOIEnrichmentForm:(id)arg1 delegate:(id)arg2 presentationContext:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

