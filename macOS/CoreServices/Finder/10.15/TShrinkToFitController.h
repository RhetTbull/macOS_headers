//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSWindowDelegate-Protocol.h"

@class NSFont, NSString, NSWindow, TRenameOperation, TShrinkToFitTextView;
@protocol TShrinkToFitDelegateProtocol;

@interface TShrinkToFitController : NSObject <NSWindowDelegate>
{
    struct TNSRef<TShrinkToFitTextView, void> _stfTextView;
    struct TNSRef<NSWindow, void> _parentWindow;
    struct TNSRef<NSTimer, void> _delayTimer;
    struct TString _initialText;
    struct TNSRef<NSFont, void> _font;
    struct _NSRange _selectionRange;
    struct CGRect _maxGlobalFrame;
    unsigned long long _maxUniChars;
    long long _maxNumLines;
    long long _alignment;
    long long _baseWritingDirection;
    _Bool _disableDeepClickLookUp;
    _Bool _textGrowsUpwards;
    struct TFENode _configuredNode;
    TNSRef_a11c280b _renameOp;
    struct TNSWeakPtr<NSObject<TShrinkToFitDelegateProtocol>, void> _weakDelegate;
}

@property(nonatomic) _Bool disableDeepClickLookUp; // @synthesize disableDeepClickLookUp=_disableDeepClickLookUp;
@property(nonatomic) long long baseWritingDirection; // @synthesize baseWritingDirection=_baseWritingDirection;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) unsigned long long maxUniChars; // @synthesize maxUniChars=_maxUniChars;
@property(nonatomic) struct CGRect maxGlobalFrame; // @synthesize maxGlobalFrame=_maxGlobalFrame;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct TFENode)nodeForEditing;
- (void)shrinkToFitTextViewAboutToClose;
- (void)shrinkToFitTextViewEditingComplete:(id)arg1;
- (_Bool)shrinkToFitTextViewAboutToOpen;
- (void)windowDidResignKey:(id)arg1;
@property(readonly, nonatomic) _Bool isEditing;
- (void)stopEditing:(_Bool)arg1;
- (void)startEditingViaDelayTimer;
- (void)startEditing:(_Bool)arg1;
@property(nonatomic) long long maxNumLines;
@property(nonatomic) _Bool textGrowsUpwards; // @synthesize textGrowsUpwards=_textGrowsUpwards;
- (struct CGRect)globalFrame;
- (int)editingSelectionType;
- (void)setText:(id)arg1 selectionRange:(const struct _NSRange *)arg2;
- (void)configureForNode:(const struct TFENode *)arg1;
@property(retain, nonatomic) NSFont *font; // @dynamic font;
@property(nonatomic) __weak NSObject<TShrinkToFitDelegateProtocol> *delegate; // @dynamic delegate;
@property(readonly, retain, nonatomic) TRenameOperation *renameOp; // @dynamic renameOp;
@property(readonly, retain, nonatomic) NSWindow *parentWindow; // @dynamic parentWindow;
@property(readonly, retain, nonatomic) TShrinkToFitTextView *stfTextView; // @dynamic stfTextView;
- (void)dealloc;
- (id)initWithParentWindow:(id)arg1 renameOp:(id)arg2 delegate:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

