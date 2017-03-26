//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "AVChatController.h"

@class AudioConferenceView, NSBox, NSButton, NSProgressIndicator, NSTextField, NSView;

@interface AudioChatController : AVChatController
{
    NSView *_contentContainer;
    NSButton *_recordingButton;
    NSTextField *_messageField;
    NSTextField *_statusField;
    NSProgressIndicator *_progressIndicator;
    NSBox *_box;
    AudioConferenceView *_conferenceView;
    BOOL _referToConnectionDoctor;
    BOOL _recordingUnderNegotiation;
    BOOL _recordingNegotiationStatusInConferenceView;
}

- (void)AVChatIrisStateChanged:(id)arg1;
- (void)AVChatStateChanged:(id)arg1;
- (void)AVChatParticipantStateChanged:(id)arg1;
- (void)AVChatParticipantAdded:(id)arg1;
- (void)avChat:(id)arg1 participantBeginRecording:(id)arg2;
- (void)stopRecording;
- (void)avChat:(id)arg1 participantDeniedRecording:(id)arg2;
- (void)avChat:(id)arg1 participantGrantedRecording:(id)arg2;
- (void)requestRecording;
- (void)_informUserRecordingNegotiationBeginning;
- (void)_clearMessage;
- (void)_updatePhaseTabForAVChat:(id)arg1 stateChange:(unsigned int)arg2;
- (void)logError:(id)arg1 forParticipant:(id)arg2;
- (void)dealloc;
- (void)removeParticipantWithID:(id)arg1;
- (void)_setMessage:(id)arg1;
- (void)_showRecordingIndicatorOn:(BOOL)arg1;
- (void)showRecordingIndicator:(BOOL)arg1;
- (struct CGRect)_textReplyWindowFrame;
- (id)longWindowTitle;
- (id)_stringForLocalState:(unsigned int)arg1 reason:(unsigned int)arg2;
- (void)selectPhaseTabWithIdentifier:(id)arg1;
- (void)_addParticipantsToConferenceView:(id)arg1;
- (void)_fitPhaseTab;
- (void)_setupAutoresizingForTabView:(BOOL)arg1;
- (float)_heightForTab:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (struct CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(struct CGRect)arg3;
- (void)windowDidLoad;
- (void)_removeContentView;
- (void)_setupTabForARDChat:(id)arg1;
- (void)_fixGradient;
- (id)windowNibName;
- (void)_positionRecordingButton;
- (void)awakeFromNib;

@end

