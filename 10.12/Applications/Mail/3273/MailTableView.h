//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableView.h>

#import "NSScrollViewDelegate-Protocol.h"

@class NSString;
@protocol MailTableViewDelegate;

@interface MailTableView : NSTableView <NSScrollViewDelegate>
{
    BOOL _keyEventHandled;
    BOOL _delegateProvidesDragImage;
    BOOL _delegateDoesCommandBySelector;
    BOOL _delegateDragWillEndOperation;
    BOOL _delegateDraggedImageMovedTo;
    BOOL _delegateProvidesBackgroundShadedRegions;
    BOOL _delegateProvidesHighlightStyle;
    BOOL _delegateRespondsToWillDrawRowsInRange;
    BOOL _delegateApprovesScrolling;
    BOOL _delegateRespondsToGotEvent;
    BOOL _delegateRespondsToMouseDown;
    BOOL _delegateRespondsToWillMoveToWindow;
    BOOL _delegateRespondsToDidMoveToWindow;
    BOOL _delegateRespondsToWillStartLiveResize;
    BOOL _delegateRespondsToDidEndLiveResize;
    BOOL _delegateRespondsToDidBecomeFirstResponder;
    BOOL _delegateRespondsToDidResignFirstResponder;
    BOOL _delegateRespondsToTopLineColor;
    BOOL _delegateApprovesRemoveColumn;
    BOOL _delegateApprovesAddColumn;
    BOOL _delegateRespondsToUserDidScrollInTableView;
    BOOL _delegateRespondsToPrepareContentInRange;
    BOOL _delegateRespondsToAccesibilityUILinkedViewsForMailTableView;
    BOOL _didLazyLoadMenu;
    long long _virtualClickedRow;
}

@property(nonatomic) BOOL didLazyLoadMenu; // @synthesize didLazyLoadMenu=_didLazyLoadMenu;
@property(nonatomic) long long virtualClickedRow; // @synthesize virtualClickedRow=_virtualClickedRow;
@property(nonatomic) BOOL delegateRespondsToAccesibilityUILinkedViewsForMailTableView; // @synthesize delegateRespondsToAccesibilityUILinkedViewsForMailTableView=_delegateRespondsToAccesibilityUILinkedViewsForMailTableView;
@property(nonatomic) BOOL delegateRespondsToPrepareContentInRange; // @synthesize delegateRespondsToPrepareContentInRange=_delegateRespondsToPrepareContentInRange;
@property(nonatomic) BOOL delegateRespondsToUserDidScrollInTableView; // @synthesize delegateRespondsToUserDidScrollInTableView=_delegateRespondsToUserDidScrollInTableView;
@property(nonatomic) BOOL delegateApprovesAddColumn; // @synthesize delegateApprovesAddColumn=_delegateApprovesAddColumn;
@property(nonatomic) BOOL delegateApprovesRemoveColumn; // @synthesize delegateApprovesRemoveColumn=_delegateApprovesRemoveColumn;
@property(nonatomic) BOOL delegateRespondsToTopLineColor; // @synthesize delegateRespondsToTopLineColor=_delegateRespondsToTopLineColor;
@property(nonatomic) BOOL delegateRespondsToDidResignFirstResponder; // @synthesize delegateRespondsToDidResignFirstResponder=_delegateRespondsToDidResignFirstResponder;
@property(nonatomic) BOOL delegateRespondsToDidBecomeFirstResponder; // @synthesize delegateRespondsToDidBecomeFirstResponder=_delegateRespondsToDidBecomeFirstResponder;
@property(nonatomic) BOOL delegateRespondsToDidEndLiveResize; // @synthesize delegateRespondsToDidEndLiveResize=_delegateRespondsToDidEndLiveResize;
@property(nonatomic) BOOL delegateRespondsToWillStartLiveResize; // @synthesize delegateRespondsToWillStartLiveResize=_delegateRespondsToWillStartLiveResize;
@property(nonatomic) BOOL delegateRespondsToDidMoveToWindow; // @synthesize delegateRespondsToDidMoveToWindow=_delegateRespondsToDidMoveToWindow;
@property(nonatomic) BOOL delegateRespondsToWillMoveToWindow; // @synthesize delegateRespondsToWillMoveToWindow=_delegateRespondsToWillMoveToWindow;
@property(nonatomic) BOOL delegateRespondsToMouseDown; // @synthesize delegateRespondsToMouseDown=_delegateRespondsToMouseDown;
@property(nonatomic) BOOL delegateRespondsToGotEvent; // @synthesize delegateRespondsToGotEvent=_delegateRespondsToGotEvent;
@property(nonatomic) BOOL delegateApprovesScrolling; // @synthesize delegateApprovesScrolling=_delegateApprovesScrolling;
@property(nonatomic) BOOL delegateRespondsToWillDrawRowsInRange; // @synthesize delegateRespondsToWillDrawRowsInRange=_delegateRespondsToWillDrawRowsInRange;
@property(nonatomic) BOOL delegateProvidesHighlightStyle; // @synthesize delegateProvidesHighlightStyle=_delegateProvidesHighlightStyle;
@property(nonatomic) BOOL delegateProvidesBackgroundShadedRegions; // @synthesize delegateProvidesBackgroundShadedRegions=_delegateProvidesBackgroundShadedRegions;
@property(nonatomic) BOOL delegateDraggedImageMovedTo; // @synthesize delegateDraggedImageMovedTo=_delegateDraggedImageMovedTo;
@property(nonatomic) BOOL delegateDragWillEndOperation; // @synthesize delegateDragWillEndOperation=_delegateDragWillEndOperation;
@property(nonatomic) BOOL delegateDoesCommandBySelector; // @synthesize delegateDoesCommandBySelector=_delegateDoesCommandBySelector;
@property(nonatomic) BOOL delegateProvidesDragImage; // @synthesize delegateProvidesDragImage=_delegateProvidesDragImage;
@property BOOL keyEventHandled; // @synthesize keyEventHandled=_keyEventHandled;
- (id)accessibilityLinkedUIElements;
- (void)prepareContentInRect:(struct CGRect)arg1;
- (void)reloadData;
- (BOOL)_isRichTableView;
- (void)didScrollInScrollView:(id)arg1;
- (void)scrollRowToVisible:(long long)arg1 position:(long long)arg2;
- (void)showSelectionAndCenter:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isSelectionVisible;
@property(readonly, nonatomic) long long lastRowInSelection;
@property(readonly, nonatomic) long long firstRowInSelection;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)_postEventNotification:(id)arg1 fromCell:(id)arg2;
- (void)mouseUp:(id)arg1;
- (void)_logSpotlightInfoForClickedMessage;
- (void)mouseDown:(id)arg1;
- (long long)clickedRow;
- (void)drawGridInClipRect:(struct CGRect)arg1;
- (void)drawRow:(long long)arg1 clipRect:(struct CGRect)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawBackgroundInClipRect:(struct CGRect)arg1;
- (void)_colorizeRow:(long long)arg1 inRect:(struct CGRect)arg2 clipRect:(struct CGRect)arg3;
- (void)_highlightRect:(struct CGRect)arg1 withColor:(id)arg2 usingStyle:(long long)arg3;
@property(readonly, nonatomic) BOOL shouldUseSecondaryHighlightColor;
- (void)draggingSession:(id)arg1 movedToPoint:(struct CGPoint)arg2;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(struct CGPoint *)arg4;
- (void)addTableColumn:(id)arg1;
- (void)removeTableColumn:(id)arg1;
- (void)moveColumn:(long long)arg1 toColumn:(long long)arg2;
- (void)setTableColumn:(id)arg1 toVisible:(BOOL)arg2 atPosition:(long long)arg3;
- (void)scrollRowToVisible:(long long)arg1;
- (void)showTableColumnsFromArray:(id)arg1 allColumns:(id)arg2;
- (void)drawBackgroundOverhangInRect:(struct CGRect)arg1;
- (id)menu;
@property __weak id <MailTableViewDelegate> delegate;
- (void)keyDown:(id)arg1;
- (void)insertText:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_mailTableViewCommonInit;
- (id)menuForEvent:(id)arg1;
- (BOOL)isOpaque;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

