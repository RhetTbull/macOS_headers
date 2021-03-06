//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import "NSTextFieldDelegate-Protocol.h"

@class IEFileSystemItem, IERootColumnVC, NSButton, NSOutlineView, NSString, NSTextField, NSTrackingArea;

__attribute__((visibility("hidden")))
@interface IERootColumnCellView : NSTableCellView <NSTextFieldDelegate>
{
    IEFileSystemItem *_fsi;
    NSTextField *_displayText;
    NSOutlineView *_parentOutlineView;
    IERootColumnVC *_parentController;
    NSTrackingArea *_trackingArea;
    NSButton *_deleteButton;
}

@property(retain, nonatomic) NSButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(nonatomic) IERootColumnVC *parentController; // @synthesize parentController=_parentController;
@property(nonatomic) __weak NSOutlineView *parentOutlineView; // @synthesize parentOutlineView=_parentOutlineView;
@property(retain, nonatomic) NSTextField *displayText; // @synthesize displayText=_displayText;
@property(retain, nonatomic) IEFileSystemItem *fsi; // @synthesize fsi=_fsi;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)updateTrackingAreas;
- (void)clearTrackingArea;
- (void)createTrackingArea;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)mouseExited;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered;
- (void)mouseEntered:(id)arg1;
- (void)deleteButtonClicked:(id)arg1;
- (void)removeItemFromNavbar;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)prepareForDisplay;
- (void)resizeSubviews;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)awakeFromNib;
- (void)setup;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

