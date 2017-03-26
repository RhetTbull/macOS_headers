//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "IMChatSendProgressDelegate-Protocol.h"
#import "SOInputLineViewControllerDelegate-Protocol.h"

@class FezWebView, IMChat, IMHeaderView, InputLineViewController, NSArray, NSButton, NSLayoutConstraint, NSOrderedSet, NSStackView, NSString, NSTextField, NSView, NSVisualEffectView, NSWindow, SOChatDisplayController, SOInputLine, SORecipientBarViewController, SOTranscriptViewController;

@interface ChatViewController : NSViewController <SOInputLineViewControllerDelegate, IMChatSendProgressDelegate>
{
    BOOL _animatesChatDisplayControllerChanges;
    BOOL _animatingChatDisplayControllerTransition;
    BOOL _isStartingNewChat;
    BOOL _isAudioMessage;
    BOOL _isIgnoringUnencryptedFileWarning;
    int _footerDisplay;
    NSView *_inputLineView;
    NSView *_rejoinView;
    NSView *_invitationView;
    SOTranscriptViewController *_chatTranscriptViewController;
    InputLineViewController *_inputLineViewController;
    SORecipientBarViewController *_recipientBarViewController;
    SOChatDisplayController *_chatDisplayController;
    IMChat *_chat;
    NSWindow *_inviteMessageSheet;
    NSTextField *_inviteMessageText;
    NSTextField *_inviteMessageLabel;
    NSButton *_rejoinChatButton;
    NSVisualEffectView *_headerView;
    NSStackView *_headerViewContent;
    NSLayoutConstraint *_headerViewTopConstraint;
    NSOrderedSet *_headerViewControllers;
    NSVisualEffectView *_footerView;
    IMHeaderView *_footerViewContent;
    NSView *_footerViewSeparator;
    NSString *_inviteMessage;
    NSLayoutConstraint *_inputLineMinimumHeightConstraint;
    double _previousProgressSending;
}

+ (id)_displayButtonTitle;
+ (id)_acceptButtonTitle;
+ (double)minHeight;
+ (double)minWidth;
@property(nonatomic) double previousProgressSending; // @synthesize previousProgressSending=_previousProgressSending;
@property(nonatomic) BOOL isIgnoringUnencryptedFileWarning; // @synthesize isIgnoringUnencryptedFileWarning=_isIgnoringUnencryptedFileWarning;
@property(nonatomic) BOOL isAudioMessage; // @synthesize isAudioMessage=_isAudioMessage;
@property(nonatomic) BOOL isStartingNewChat; // @synthesize isStartingNewChat=_isStartingNewChat;
@property(nonatomic) NSLayoutConstraint *inputLineMinimumHeightConstraint; // @synthesize inputLineMinimumHeightConstraint=_inputLineMinimumHeightConstraint;
@property(retain) NSString *inviteMessage; // @synthesize inviteMessage=_inviteMessage;
@property(nonatomic) int footerDisplay; // @synthesize footerDisplay=_footerDisplay;
@property(retain) NSView *footerViewSeparator; // @synthesize footerViewSeparator=_footerViewSeparator;
@property(retain) IMHeaderView *footerViewContent; // @synthesize footerViewContent=_footerViewContent;
@property(retain) NSVisualEffectView *footerView; // @synthesize footerView=_footerView;
@property(copy, nonatomic) NSOrderedSet *headerViewControllers; // @synthesize headerViewControllers=_headerViewControllers;
@property(retain) NSLayoutConstraint *headerViewTopConstraint; // @synthesize headerViewTopConstraint=_headerViewTopConstraint;
@property __weak NSStackView *headerViewContent; // @synthesize headerViewContent=_headerViewContent;
@property __weak NSVisualEffectView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) NSButton *rejoinChatButton; // @synthesize rejoinChatButton=_rejoinChatButton;
@property(retain) NSTextField *inviteMessageLabel; // @synthesize inviteMessageLabel=_inviteMessageLabel;
@property(retain) NSTextField *inviteMessageText; // @synthesize inviteMessageText=_inviteMessageText;
@property(retain) NSWindow *inviteMessageSheet; // @synthesize inviteMessageSheet=_inviteMessageSheet;
@property(nonatomic, getter=isAnimatingChatDisplayControllerTransition) BOOL animatingChatDisplayControllerTransition; // @synthesize animatingChatDisplayControllerTransition=_animatingChatDisplayControllerTransition;
@property(readonly) IMChat *chat; // @synthesize chat=_chat;
@property BOOL animatesChatDisplayControllerChanges; // @synthesize animatesChatDisplayControllerChanges=_animatesChatDisplayControllerChanges;
@property(retain, nonatomic) SOChatDisplayController *chatDisplayController; // @synthesize chatDisplayController=_chatDisplayController;
@property(retain) SORecipientBarViewController *recipientBarViewController; // @synthesize recipientBarViewController=_recipientBarViewController;
@property(retain, nonatomic) InputLineViewController *inputLineViewController; // @synthesize inputLineViewController=_inputLineViewController;
@property(retain, nonatomic) SOTranscriptViewController *chatTranscriptViewController; // @synthesize chatTranscriptViewController=_chatTranscriptViewController;
- (void).cxx_destruct;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)_footerViewFrameDidChange:(id)arg1;
- (void)_updateBottomOverlap;
- (void)_headerViewFrameDidChange:(id)arg1;
- (void)_updateTopOverlap;
- (void)_chatDisplayControllerChatDidChange:(id)arg1;
- (void)_chatDisplayControllerRecipientsDidChange:(id)arg1;
- (void)fadeinAnimation:(double)arg1;
- (void)recipientsSelected:(id)arg1;
- (void)toggleShowAllBuddyPicturesInConversations:(id)arg1;
- (void)clearTranscript:(id)arg1;
- (void)cancelInviteMessage:(id)arg1;
- (void)acceptInviteMessage:(id)arg1;
- (void)_runInviteSheetForInvitees:(id)arg1;
- (void)blockInvitation:(id)arg1;
- (void)rejectInvitation:(id)arg1;
- (void)acceptInvitation:(id)arg1;
- (void)_showErrorSheetWithTitle:(id)arg1 message:(id)arg2 helpAnchor:(id)arg3;
- (void)_chatErrorPosted:(id)arg1;
- (void)block:(id)arg1;
- (void)requestValidation:(id)arg1;
- (void)deleteSelectedBuddies:(id)arg1;
- (void)addABuddy:(id)arg1;
- (void)showInAddressBook:(id)arg1;
- (void)addToAddressBook:(id)arg1;
- (void)showSelectedBuddyProfile:(id)arg1;
- (void)showSelectedBuddyInfo:(id)arg1;
- (void)showInBuddyList:(id)arg1;
- (void)toggleQuietMode:(id)arg1;
- (void)handleIMChatParticipantStateDidChange:(id)arg1;
- (id)_debugNSStringFromIMChatParticipantState:(unsigned long long)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)inviteToVideoChat:(id)arg1;
- (void)inviteToAudioChat:(id)arg1;
- (void)sendFile:(id)arg1;
- (void)composeEMail:(id)arg1;
- (BOOL)_hasSendError;
- (id)localizedErrorMessage;
- (void)_displayIMessageChatError:(id)arg1;
- (void)_handleIMessageErrorForTokenFieldController:(id)arg1;
- (void)_displayIMessageErrorForTokenFieldController:(id)arg1;
- (void)sendInputLineContents:(id)arg1;
- (void)_sendMessage;
- (void)rejoinChat:(id)arg1;
- (void)_finishSendMessageCompletionHandlerSetUp:(id)arg1 chat:(id)arg2 finished:(BOOL)arg3;
- (void)_sendMessage:(BOOL)arg1 forceSend:(BOOL)arg2;
- (void)_executeAppleScriptHandlerForInput:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)_messagesToSend:(id)arg1 flags:(unsigned long long)arg2;
- (BOOL)_messagesToSendContainsPluginPayload:(id)arg1;
- (void)_sendMessage:(id)arg1;
- (void)chat:(id)arg1 progressDidChange:(float)arg2 sendingMessages:(id)arg3 sendCount:(unsigned long long)arg4 totalCount:(unsigned long long)arg5 finished:(BOOL)arg6;
- (id)undoManagerForInputLineManager:(id)arg1;
- (void)inputLineDidEnter:(id)arg1 isAudioMessage:(BOOL)arg2;
- (BOOL)addNewIMHandles:(id)arg1;
- (void)_updateFooterContents:(id)arg1;
- (void)_accountLoginStatusChanged:(id)arg1;
- (void)_setJoinedState;
- (void)_setJoiningState;
- (void)_setUnjoinedState;
- (BOOL)isInputLineVisible;
- (void)pasteAndMatchStyle:(id)arg1;
- (void)paste:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)makeInputFieldFirstResponderAndResetSelection:(BOOL)arg1;
@property(readonly, nonatomic) SOInputLine *preparedFieldEditor;
- (void)_handleMenuUserSwitchedHandle:(id)arg1;
- (void)_setIsInvitingForGroupChatIfApplicable;
@property(readonly, nonatomic) BOOL inputLineHasFocus;
- (id)undoManager;
@property(readonly, copy) NSString *description;
@property(readonly) NSArray *selectedIMHandles;
@property(readonly) FezWebView *chatTranscriptView; // @dynamic chatTranscriptView;
@property(readonly, nonatomic) NSWindow *window; // @dynamic window;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithChatDisplayController:(id)arg1;
- (void)_commonChatViewControllerInitWithChatDisplayController:(id)arg1;
- (void)viewDidLoad;
- (void)_beginNewChat;
@property(readonly, nonatomic) SOInputLine *inputLine; // @dynamic inputLine;
@property(readonly, nonatomic) NSView *invitationView; // @synthesize invitationView=_invitationView;
@property(readonly, nonatomic) NSView *rejoinView; // @synthesize rejoinView=_rejoinView;
@property(readonly, nonatomic) NSView *inputLineView; // @synthesize inputLineView=_inputLineView;
- (void)makeTextStandardSize:(id)arg1;
- (void)makeTextSmaller:(id)arg1;
- (void)makeTextLarger:(id)arg1;
@property(nonatomic) BOOL showsFooterView; // @dynamic showsFooterView;
@property double topMargin; // @dynamic topMargin;
@property(nonatomic) BOOL showsRecipientBar; // @dynamic showsRecipientBar;
- (void)setChat:(id)arg1;
- (void)setChatDisplayController:(id)arg1 animated:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

