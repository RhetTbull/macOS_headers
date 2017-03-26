//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXMetadataEditorViewController-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"
#import "PFActionNotificationsReceiver-Protocol.h"

@class IPXButton, IPXMetadataInfoViewController, NSLayoutConstraint, NSString, NSTextField, NSView;

@interface IPXMetadataEditorDescriptionViewController : IPXViewController <NSTextFieldDelegate, PFActionNotificationsReceiver, IPXMetadataEditorViewController>
{
    NSString *_initialDescription;
    BOOL _edited;
    BOOL _readOnly;
    IPXButton *_favoriteButton;
    NSTextField *_descriptionTextField;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    IPXMetadataInfoViewController *_contentController;
}

@property(nonatomic) __weak IPXMetadataInfoViewController *contentController; // @synthesize contentController=_contentController;
@property(nonatomic) __weak NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(nonatomic) __weak NSTextField *descriptionTextField; // @synthesize descriptionTextField=_descriptionTextField;
@property(nonatomic) __weak IPXButton *favoriteButton; // @synthesize favoriteButton=_favoriteButton;
- (void).cxx_destruct;
- (void)action:(id)arg1 statusChangedFrom:(int)arg2 to:(int)arg3;
- (void)a_favoriteItem:(id)arg1;
- (void)a_descriptionEdited:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)metadataViewIsVisible;
- (void)selectedVersions:(id)arg1;
- (void)propertiesHaveChanged:(id)arg1 forSelectedVersions:(id)arg2;
- (void)saveChanges;
@property(readonly, nonatomic) NSView *finalFirstResponder;
@property(readonly, nonatomic) NSView *initialFirstResponder;
- (id)propertiesForTable:(id)arg1;
- (id)tableClasses;
- (id)editorIdentifier;
- (void)willBecomeInactive;
- (void)didBecomeActive;
- (id)_firstDescriptionForItems:(id)arg1;
- (void)_setPlaceholderString:(id)arg1;
- (id)_property;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

