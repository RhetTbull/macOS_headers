//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SmallModalDialogController.h"

#import "NSTextFieldDelegate-Protocol.h"

@class MAKitButton, MAKitPopUpButton, MAKitTextField, NSButton, NSString;

@interface ShareToITunesController : SmallModalDialogController <NSTextFieldDelegate>
{
    MAKitTextField *m_titleTextField;
    MAKitTextField *m_artistTextField;
    MAKitTextField *m_composerTextField;
    MAKitTextField *m_albumTextField;
    MAKitTextField *m_playlistTextField;
    MAKitPopUpButton *m_qualityPopUpButton;
    MAKitButton *m_shareButton;
    MAKitButton *m_cancelButton;
    NSButton *_lengthFromCycleCheck;
    struct CDocumentLogic *doc;
}

+ (void)showModalForDoc:(struct CDocumentLogic *)arg1;
+ (id)nibName;
@property(nonatomic) struct CDocumentLogic *doc; // @synthesize doc;
- (void)updateUI;
- (void)controlTextDidChange:(id)arg1;
- (id)_sharingParams;
- (_Bool)lengthFromCycle;
- (int)_bitRateForQuality:(unsigned int)arg1;
- (id)_albumName;
- (id)_iTunesPlaylistName;
- (id)_mediaTitle;
- (id)_mediaArtistName;
- (id)_composerName;
- (void)cancelAction:(id)arg1;
- (void)shareAction:(id)arg1;
- (unsigned long long)defaultQuality;
- (void)windowDidLoad;
- (void)showWindow:(id)arg1;
- (void)lengthFromCycleCheck:(id)arg1;
- (void)checkSongSelectionAndCycle;
- (void)fillTextFieldsWithMyInfo;
- (void)writeMyInfoToProject;
- (void)readMyInfoFromProjectAndOverwrite;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

