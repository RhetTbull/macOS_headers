//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXPhotosBrowserHeader.h"

#import "NSMenuDelegate-Protocol.h"

@class NSEvent, NSMenu, NSString;
@protocol IPXPhotosBrowserMomentsHeaderDelegate;

@interface IPXPhotosBrowserMomentsHeader : IPXPhotosBrowserHeader <NSMenuDelegate>
{
    NSMenu *_optionsMenu;
    NSEvent *_optionsMenuEvent;
    CDStruct_86f3d7d2 _delegateFlags;
    id <IPXPhotosBrowserMomentsHeaderDelegate> _delegate;
}

@property(nonatomic) __weak id <IPXPhotosBrowserMomentsHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)sectionContainsPoint:(struct CGPoint)arg1;
- (void)menuDidClose:(id)arg1;
- (void)_showOptionsMenu:(id)arg1;
- (id)_momentCollectionAtIndex:(long long)arg1;
- (id)_mediaSectionAtIndex:(long long)arg1;
- (id)_photosBrowserMediaSection;
- (void)a_showOverview:(id)arg1;
- (void)a_mergeDown:(id)arg1;
- (void)a_mergeUp:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)photosBrowserMomentsHeaderButtonsView:(id)arg1 shareAction:(id)arg2;
- (void)photosBrowserMomentsHeaderButtonsView:(id)arg1 addAction:(id)arg2;
- (void)photosBrowserMomentsHeaderButtonsView:(id)arg1 playAction:(id)arg2;
- (void)disableEditingModeAnimated:(BOOL)arg1;
- (void)enableEditingModeAnimated:(BOOL)arg1;
- (id)placeholderString;
- (void)updateWithMediaSection:(id)arg1;
- (void)setTitle:(id)arg1 subtitle:(id)arg2;
- (BOOL)isReadOnly;
- (BOOL)editingEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

