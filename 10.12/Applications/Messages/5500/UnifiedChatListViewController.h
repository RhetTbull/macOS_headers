//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSPopoverDelegate-Protocol.h"
#import "NSSearchFieldDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "OrderedSetControllerDelegate-Protocol.h"

@class ChatTranscriptSearch, ChatWindowAccountStatusViewController, IMHeaderView, NSArray, NSButton, NSLayoutConstraint, NSMutableSet, NSObject, NSPopover, NSProgressIndicator, NSSearchField, NSSegmentedControl, NSStackView, NSString, NSTableView, NSView, OrderedSetController, SOChatDisplayController;
@protocol OS_os_activity;

@interface UnifiedChatListViewController : NSViewController <NSPopoverDelegate, NSTableViewDelegate, NSTableViewDataSource, OrderedSetControllerDelegate, NSSearchFieldDelegate>
{
    BOOL _firstRowIsPlacardView;
    BOOL _showNoSelectionLabel;
    BOOL _compact;
    BOOL _automaticallySortsChats;
    BOOL _shouldSuppressInputLineBecomingKey;
    BOOL _searchContents;
    BOOL _conversationFilteringIsEnabled;
    BOOL _isDelayingSearch;
    NSMutableSet *_searchResults;
    NSTableView *_chatTable;
    NSSearchField *_searchField;
    NSProgressIndicator *_searchProgress;
    OrderedSetController *_contentsController;
    NSArray *_draggedChatDisplayControllers;
    NSViewController *_emptyChatListTabViewController;
    NSStackView *_chatListStackView;
    NSView *_chatListTabViewContainer;
    NSSegmentedControl *_chatListTabs;
    NSPopover *_chatInfoPopover;
    NSObject<OS_os_activity> *_searchActivityID;
    NSButton *_startNewChatButton;
    ChatWindowAccountStatusViewController *_accountStatusViewController;
    NSView *_accountStatusContainerView;
    NSLayoutConstraint *_accountStatusContainerViewHeightConstraint;
    IMHeaderView *_chatListHeader;
    NSView *_chatListHeaderSeparator;
    NSLayoutConstraint *_topMarginConstraint;
    NSLayoutConstraint *_minWidthConstraint;
    NSLayoutConstraint *_maxWidthConstraint;
    NSLayoutConstraint *_compactWidthConstraint;
    NSLayoutConstraint *_startNewChatButtonWidth;
    NSLayoutConstraint *_startNewChatButtonTrailingMargin;
    NSLayoutConstraint *_startNewChatButtonCompactAlignment;
    ChatTranscriptSearch *_chatTranscriptSearch;
    NSString *_lastSearchedString;
    id _previouslySelectedChat;
}

+ (void)initialize;
+ (void)_handleChatControllerWillUnregister:(id)arg1;
+ (void)_handleChatControllerRegistered:(id)arg1;
+ (void)_createViewForChatIfNeeded:(id)arg1;
+ (_Bool)_automaticallyCreateChatDisplayControllers;
+ (double)compactWidth;
+ (double)minWidth;
+ (double)maxWidth;
+ (double)defaultChatListWidth;
+ (void)createChatViewsIfNeeded;
+ (void)endManualChatListChanges;
+ (void)beginManualChatListChanges;
+ (id)sharedController;
@property(nonatomic) BOOL isDelayingSearch; // @synthesize isDelayingSearch=_isDelayingSearch;
@property(retain, nonatomic) id previouslySelectedChat; // @synthesize previouslySelectedChat=_previouslySelectedChat;
@property(copy, nonatomic) NSString *lastSearchedString; // @synthesize lastSearchedString=_lastSearchedString;
@property(retain, nonatomic) ChatTranscriptSearch *chatTranscriptSearch; // @synthesize chatTranscriptSearch=_chatTranscriptSearch;
@property(nonatomic) BOOL conversationFilteringIsEnabled; // @synthesize conversationFilteringIsEnabled=_conversationFilteringIsEnabled;
@property(nonatomic) BOOL searchContents; // @synthesize searchContents=_searchContents;
@property(retain, nonatomic) NSLayoutConstraint *startNewChatButtonCompactAlignment; // @synthesize startNewChatButtonCompactAlignment=_startNewChatButtonCompactAlignment;
@property(retain, nonatomic) NSLayoutConstraint *startNewChatButtonTrailingMargin; // @synthesize startNewChatButtonTrailingMargin=_startNewChatButtonTrailingMargin;
@property(nonatomic) __weak NSLayoutConstraint *startNewChatButtonWidth; // @synthesize startNewChatButtonWidth=_startNewChatButtonWidth;
@property(retain, nonatomic) NSLayoutConstraint *compactWidthConstraint; // @synthesize compactWidthConstraint=_compactWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *maxWidthConstraint; // @synthesize maxWidthConstraint=_maxWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *minWidthConstraint; // @synthesize minWidthConstraint=_minWidthConstraint;
@property(retain) NSLayoutConstraint *topMarginConstraint; // @synthesize topMarginConstraint=_topMarginConstraint;
@property(retain) NSView *chatListHeaderSeparator; // @synthesize chatListHeaderSeparator=_chatListHeaderSeparator;
@property(retain) IMHeaderView *chatListHeader; // @synthesize chatListHeader=_chatListHeader;
@property(retain, nonatomic) NSLayoutConstraint *accountStatusContainerViewHeightConstraint; // @synthesize accountStatusContainerViewHeightConstraint=_accountStatusContainerViewHeightConstraint;
@property(retain, nonatomic) NSView *accountStatusContainerView; // @synthesize accountStatusContainerView=_accountStatusContainerView;
@property(retain, nonatomic) ChatWindowAccountStatusViewController *accountStatusViewController; // @synthesize accountStatusViewController=_accountStatusViewController;
@property(retain, nonatomic) NSButton *startNewChatButton; // @synthesize startNewChatButton=_startNewChatButton;
@property(retain) NSObject<OS_os_activity> *searchActivityID; // @synthesize searchActivityID=_searchActivityID;
@property(retain, nonatomic) NSPopover *chatInfoPopover; // @synthesize chatInfoPopover=_chatInfoPopover;
@property(retain, nonatomic) NSSegmentedControl *chatListTabs; // @synthesize chatListTabs=_chatListTabs;
@property(retain, nonatomic) NSView *chatListTabViewContainer; // @synthesize chatListTabViewContainer=_chatListTabViewContainer;
@property(retain, nonatomic) NSStackView *chatListStackView; // @synthesize chatListStackView=_chatListStackView;
@property(retain, nonatomic) NSViewController *emptyChatListTabViewController; // @synthesize emptyChatListTabViewController=_emptyChatListTabViewController;
@property(retain) NSArray *draggedChatDisplayControllers; // @synthesize draggedChatDisplayControllers=_draggedChatDisplayControllers;
@property BOOL shouldSuppressInputLineBecomingKey; // @synthesize shouldSuppressInputLineBecomingKey=_shouldSuppressInputLineBecomingKey;
@property(readonly, nonatomic) OrderedSetController *contentsController; // @synthesize contentsController=_contentsController;
@property(nonatomic) BOOL automaticallySortsChats; // @synthesize automaticallySortsChats=_automaticallySortsChats;
@property(nonatomic, getter=isCompact) BOOL compact; // @synthesize compact=_compact;
@property(nonatomic) BOOL showNoSelectionLabel; // @synthesize showNoSelectionLabel=_showNoSelectionLabel;
@property(retain, nonatomic) NSProgressIndicator *searchProgress; // @synthesize searchProgress=_searchProgress;
@property(retain, nonatomic) NSSearchField *searchField; // @synthesize searchField=_searchField;
@property(retain, nonatomic) NSTableView *chatTable; // @synthesize chatTable=_chatTable;
- (void).cxx_destruct;
- (void)_setupPopoverToDisplayChatTableCellView:(id)arg1;
- (void)_updateCompactState:(BOOL)arg1 forChatTableCellView:(id)arg2;
- (void)_setupManualChatSorting;
- (void)_setupAutomaticChatSorting;
- (id)_imHandlesSuitableForInviteToChat:(id)arg1 fromPasteboard:(id)arg2;
- (id)_imHandlesFromPasteboard:(id)arg1;
- (void)_updateEmptyChatListTabView;
- (void)_preferredScrollerStyleDidChange:(id)arg1;
- (void)clearChatInfoPopover;
- (void)setContentsController:(id)arg1;
- (void)_imAccountActiveStatusChanged:(id)arg1;
- (void)_moveChatTableViewRowAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)_removeRowsInChatTableViewAtIndexes:(id)arg1 withAnimation:(unsigned long long)arg2;
- (void)_insertRowsInChatTableViewAtIndexes:(id)arg1 withAnimation:(unsigned long long)arg2;
- (void)_chatTableViewAnimationCompletionHandler;
- (long long)_mouseIsOnChatTableViewRow;
- (void)_scrollRowToVisible:(long long)arg1;
- (void)_installStatusView;
- (void)_uninstallStatusView;
- (void)_accountStatusViewHeightChanged:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)viewDidLayout;
- (void)popoverDidClose:(id)arg1;
- (id)tableView:(id)arg1 rowActionsForRow:(long long)arg2 edge:(long long)arg3;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)tableView:(id)arg1 didRemoveRowView:(id)arg2 forRow:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(struct CGPoint)arg3 operation:(unsigned long long)arg4;
- (void)tableView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(struct CGPoint)arg3 forRowIndexes:(id)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)orderedSetController:(id)arg1 didReplaceFilteredContents:(id)arg2 atIndexes:(id)arg3;
- (void)orderedSetController:(id)arg1 didMoveFilteredContents:(id)arg2 atIndexes:(id)arg3 toFilteredContents:(id)arg4 atIndexes:(id)arg5;
- (void)orderedSetController:(id)arg1 didRemoveFilteredContents:(id)arg2 fromIndexes:(id)arg3;
- (void)orderedSetController:(id)arg1 didInsertFilteredContentsAtIndexes:(id)arg2;
- (void)orderedSetControllerSelectionDidChange:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_chatTranscriptSearchChatsLoaded:(id)arg1;
- (void)_chatTranscriptSearchChatWillLoad:(id)arg1;
- (void)_chatTranscriptSearchFinished:(id)arg1;
- (BOOL)_chatController:(id)arg1 matchesSearchString:(id)arg2;
- (void)clearSearch;
- (void)searchChats:(id)arg1;
- (void)_showSearchSpinner:(BOOL)arg1;
- (void)_searchContents:(id)arg1;
- (void)_filterConversations:(id)arg1;
@property(readonly, nonatomic) NSMutableSet *searchResults; // @synthesize searchResults=_searchResults;
@property(readonly, getter=isDisplayingSearchResults) BOOL displayingSearchResults; // @dynamic displayingSearchResults;
@property(readonly, nonatomic) NSString *searchString;
- (id)addExistingChatDisplayControllerForChat:(id)arg1 updateSorting:(BOOL)arg2;
- (id)existingChatDisplayControllerForChat:(id)arg1;
- (void)_setupFilterByUnknownSendersList;
- (void)_setupFilterByContactsList;
- (void)_removeFilteringAndUpdate:(BOOL)arg1;
- (void)_setupDefaultFiltering;
- (void)switchConversationList:(id)arg1;
- (void)toggleFilteredConversationList:(id)arg1;
- (void)_setConversationFilter:(long long)arg1;
- (void)setCurrentConversationFilter:(long long)arg1;
- (long long)currentConversationFilter;
@property(getter=isFilteringConversations) BOOL filteringConversations;
- (void)markAsRead:(id)arg1;
- (void)toggleDoNotDisturb:(id)arg1;
- (void)showContactCard:(id)arg1;
- (void)displayDetails:(id)arg1;
- (void)delete:(id)arg1;
- (void)closeTab:(id)arg1;
@property(readonly, nonatomic) SOChatDisplayController *contextChatDisplayController;
- (void)selectPreviousChatDisplayController;
- (void)selectNextChatDisplayController;
- (id)addChatDisplayControllerForNewChatWithHandles:(id)arg1;
- (id)chatDisplayControllersForNewChatsWithHandles:(id)arg1;
- (id)chatDisplayControllersForNewChats;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)_commonUnifiedChatListViewControllerInit;
- (void)_scrollViewContentViewBoundsDidChange:(id)arg1;
@property(readonly, nonatomic) BOOL useTableViewAnimations;
@property double topMargin; // @dynamic topMargin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

