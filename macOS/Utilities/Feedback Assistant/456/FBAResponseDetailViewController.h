//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBAContentItemDetailViewController.h"

@class FBACorrespondenceViewController, FBAFeedback, FBAFollowupListView, FBAFormResponseStub, FBAFormResponseStubViewController, FBAStackView, NSArray, NSNumber, NSScrollView, NSView;

@interface FBAResponseDetailViewController : FBAContentItemDetailViewController
{
    BOOL _loaded;
    BOOL _chronological;
    NSScrollView *_scrollView;
    NSView *_documentView;
    FBAStackView *_stackView;
    NSView *_tileBackground;
    NSView *_formResponseView;
    FBAFollowupListView *_followupListView;
    NSView *_unsolicitedFollowupButtonView;
    NSArray *_viewConfigurationConstraints;
    FBAFormResponseStubViewController *_feedbackSummaryViewController;
    FBACorrespondenceViewController *_feedbackSummaryCorrespondence;
    NSView *_feedbackSummaryContentView;
    id _modelChangeObserver;
    NSNumber *_selectedFormResponseID;
    CDUnknownBlockType _promptForPendingContentCompletionHandler;
}

+ (BOOL)automaticallyNotifiesObserversOfCornerView;
+ (id)keyPathsForValuesAffectingFeedback;
+ (id)keyPathsForValuesAffectingFormResponseStub;
+ (void)initialize;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType promptForPendingContentCompletionHandler; // @synthesize promptForPendingContentCompletionHandler=_promptForPendingContentCompletionHandler;
@property(retain) NSNumber *selectedFormResponseID; // @synthesize selectedFormResponseID=_selectedFormResponseID;
@property(nonatomic) __weak id modelChangeObserver; // @synthesize modelChangeObserver=_modelChangeObserver;
@property(retain) NSView *feedbackSummaryContentView; // @synthesize feedbackSummaryContentView=_feedbackSummaryContentView;
@property(retain) FBACorrespondenceViewController *feedbackSummaryCorrespondence; // @synthesize feedbackSummaryCorrespondence=_feedbackSummaryCorrespondence;
@property(retain) FBAFormResponseStubViewController *feedbackSummaryViewController; // @synthesize feedbackSummaryViewController=_feedbackSummaryViewController;
@property(retain) NSArray *viewConfigurationConstraints; // @synthesize viewConfigurationConstraints=_viewConfigurationConstraints;
@property(retain) NSView *unsolicitedFollowupButtonView; // @synthesize unsolicitedFollowupButtonView=_unsolicitedFollowupButtonView;
@property(retain) FBAFollowupListView *followupListView; // @synthesize followupListView=_followupListView;
@property __weak NSView *formResponseView; // @synthesize formResponseView=_formResponseView;
@property(retain) NSView *tileBackground; // @synthesize tileBackground=_tileBackground;
@property __weak FBAStackView *stackView; // @synthesize stackView=_stackView;
@property __weak NSView *documentView; // @synthesize documentView=_documentView;
@property __weak NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(getter=isChronological) BOOL chronological; // @synthesize chronological=_chronological;
- (id)createTileBackground;
- (void)resetScrollPosition;
- (void)replaceFollowupListViewFor:(id)arg1;
- (void)replaceFormResponseViewFor:(id)arg1;
- (void)updateScrollBackground;
- (void)updateViewConfiguration;
- (void)updateForFormResponseChange;
- (BOOL)shouldShowCards;
- (BOOL)hasPendingFollowup;
- (void)closeWithPendingFollowupAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)promptForPendingContentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)hasPendingContent;
- (void)clearPendingContent;
- (void)didClickAddInformation:(id)arg1;
@property(readonly) FBAFeedback *feedback;
- (void)updateViewWithFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain) FBAFormResponseStub *formResponseStub;
- (id)displayedItem;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (void)didPresentErrorWithRecovery:(BOOL)arg1 contextInfo:(void *)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)loadView;
- (id)init;

@end

