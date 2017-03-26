//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "MUICollectionViewDelegate-Protocol.h"
#import "NSUserInterfaceValidations-Protocol.h"

@class ConversationMember, ConversationMemberArrayController, ConversationViewFindController, MUICollectionView, MessageSelection, MessageViewController, NSArray, NSHashTable, NSMutableDictionary, NSMutableIndexSet, NSMutableOrderedSet, NSMutableSet, NSScrollView, NSString, NSUUID;
@protocol NSTextFinderBarContainer;

@interface ConversationViewController : NSViewController <MUICollectionViewDelegate, NSUserInterfaceValidations>
{
    NSMutableOrderedSet *_conversationMembers;
    NSMutableSet *_viewControllers;
    NSMutableIndexSet *_loadIndexes;
    NSMutableIndexSet *_primaryIndexes;
    NSMutableIndexSet *_unreadIndexes;
    NSMutableIndexSet *_visibleIndexes;
    NSMutableDictionary *_defaultMessageViewingState;
    NSMutableDictionary *_messageViewingStateByLibraryID;
    ConversationMember *_conversationMemberObservedForActivity;
    NSHashTable *_observedConversations;
    BOOL _scrollViewIsInLiveScroll;
    BOOL _loaded;
    BOOL _needsBackdrop;
    BOOL _hiddenBehindSnapshot;
    MUICollectionView *_conversationView;
    ConversationMemberArrayController *_arrayController;
    ConversationViewFindController *_findController;
    double _pageZoom;
    NSUUID *_updateUUID;
    NSScrollView *_scrollView;
    NSString *_urlStringToContinue;
}

+ (BOOL)automaticallyNotifiesObserversOfRepresentedObject;
@property(copy, nonatomic) NSString *urlStringToContinue; // @synthesize urlStringToContinue=_urlStringToContinue;
@property(nonatomic) BOOL hiddenBehindSnapshot; // @synthesize hiddenBehindSnapshot=_hiddenBehindSnapshot;
@property(nonatomic) __weak NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) NSUUID *updateUUID; // @synthesize updateUUID=_updateUUID;
@property(nonatomic) double pageZoom; // @synthesize pageZoom=_pageZoom;
@property(nonatomic) BOOL needsBackdrop; // @synthesize needsBackdrop=_needsBackdrop;
@property(nonatomic) BOOL loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic) ConversationViewFindController *findController; // @synthesize findController=_findController;
@property(readonly, nonatomic) ConversationMemberArrayController *arrayController; // @synthesize arrayController=_arrayController;
@property(readonly, nonatomic) MUICollectionView *conversationView; // @synthesize conversationView=_conversationView;
- (void).cxx_destruct;
- (void)updateUserActivityState:(id)arg1;
@property(readonly, nonatomic) BOOL conversationMemberHasRelatedMessages;
- (BOOL)validateToolbarItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)makeFontSmaller:(id)arg1;
- (void)makeFontBigger:(id)arg1;
- (void)toggleViewRelatedMessages:(id)arg1;
- (void)performTextFinderAction:(id)arg1;
@property(readonly, nonatomic) MessageViewController *actionViewController;
@property(readonly, copy, nonatomic) NSArray *actionConversationMembers;
- (id)actionMessagesIncludingDuplicates:(BOOL)arg1;
- (id)_actionConversationMemberIndices;
- (void)_updateLastViewedDateAndMarkRead:(id)arg1;
- (void)_prepareToUpdateLastViewedDateAndMarkReadIfNeeded:(id)arg1 index:(unsigned long long)arg2;
- (void)_cellViewFrameDidChange:(id)arg1;
- (void)collectionView:(id)arg1 didSelectIndex:(unsigned long long)arg2;
- (void)collectionView:(id)arg1 didEndScrollInScrollView:(id)arg2;
- (void)collectionView:(id)arg1 didScrollInScrollView:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCellView:(id)arg2 forItemAtIndex:(unsigned long long)arg3;
- (void)collectionView:(id)arg1 didBeginDisplayingCellView:(id)arg2 forItemAtIndex:(unsigned long long)arg3;
- (void)collectionView:(id)arg1 willEvictCellView:(id)arg2;
- (id)collectionView:(id)arg1 makeCellViewForItemAtIndex:(unsigned long long)arg2;
- (double)collectionView:(id)arg1 initialHeightOfCellAtIndex:(unsigned long long)arg2;
- (void)_restoreMessageViewingState:(id)arg1;
- (void)_saveMessageViewingState:(id)arg1;
- (void)_viewControllerDidFinishLoading:(id)arg1;
- (void)_markViewControllerLoaded;
- (void)_loadCellAtNextIndex;
- (void)_performInitialPinning;
- (void)_updateConversationMembers:(id)arg1;
- (void)_resetConversationDisplayState;
- (void)_resetConversationState;
- (void)_updateActivityFromConversationMember:(id)arg1;
@property(retain, nonatomic) ConversationMember *conversationMemberObservedForActivity;
- (void)_updateFirstResponderIfNeeded;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateNeedsBackdrop;
- (void)_scrollViewDidEndLiveScroll:(id)arg1;
- (void)_scrollViewWillStartLiveScroll:(id)arg1;
- (void)viewDidLoad;
- (BOOL)_isSingleton;
- (void)_updateContent;
@property(retain) MessageSelection *representedObject;
@property(readonly, nonatomic) __weak id <NSTextFinderBarContainer> textFinderBarContainer;
@property(readonly, copy) NSString *description;
- (void)_performDiagnostics:(id)arg1;
- (void)tearDown;
- (void)dealloc;
- (void)_conversationViewControllerCommonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

