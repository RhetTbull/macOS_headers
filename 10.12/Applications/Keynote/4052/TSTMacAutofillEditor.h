//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTAutofillEditor.h"

#import "TSDMacTouchBarAwareEditor-Protocol.h"
#import "TSDTextInput-Protocol.h"
#import "TSTMacAutofillTouchBarProviderDelegate-Protocol.h"

@class NSSet, NSString, TSDEditorController, TSKDocumentRoot, TSKSelection, TSTMacAutofillTouchBarProvider;
@protocol TSDTextSelection;

@interface TSTMacAutofillEditor : TSTAutofillEditor <TSDMacTouchBarAwareEditor, TSTMacAutofillTouchBarProviderDelegate, TSDTextInput>
{
    TSTMacAutofillTouchBarProvider *_touchBarProvider;
}

@property(retain, nonatomic) TSTMacAutofillTouchBarProvider *touchBarProvider; // @synthesize touchBarProvider=_touchBarProvider;
- (struct _NSRange)rangeOfWordEnclosingCharIndex:(unsigned long long)arg1 backward:(BOOL)arg2;
- (void)clearMarkedRange;
@property(readonly, nonatomic) struct _NSRange markedRange;
- (void)setSelectionWithRange:(struct _NSRange)arg1 endOfLine:(BOOL)arg2;
- (id)selectionWithRange:(struct _NSRange)arg1;
@property(readonly, retain, nonatomic) TSKSelection<TSDTextSelection> *textInputSelection;
- (void)replaceRange:(struct _NSRange)arg1 withText:(id)arg2;
- (void)extendSelectionForward;
- (void)extendSelectionBackward;
- (void)deleteForward;
- (void)deleteBackward;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2 replacementRange:(struct _NSRange)arg3;
- (unsigned long long)characterIndexForPoint:(struct CGPoint)arg1;
- (struct CGRect)firstRectForCharacterRange:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange)arg2;
- (id)validAttributesForMarkedText;
- (id)attributedSubstringForProposedRange:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
- (unsigned long long)textLength;
- (BOOL)textIsVerticalAtCharIndex:(unsigned long long)arg1;
- (void)endEditing;
- (BOOL)wantsKeyboard;
- (struct _NSRange)editRange;
- (void)touchBarEndAutofilling;
- (void)touchBarAutofillToBottom;
- (void)touchBarAutofillToTop;
- (void)touchBarAutofillToEnd;
- (void)touchBarAutofillToStart;
- (BOOL)touchBarCanAutofillToBottom;
- (BOOL)touchBarCanAutofillToTop;
- (BOOL)touchBarCanAutofillToEnd;
- (BOOL)touchBarCanAutofillToStart;
- (void)arrowKeyReceivedInDirection:(int)arg1 withModifierKeys:(int)arg2;
@property(readonly) BOOL wantsRawArrowKeyEvents;
- (void)willResignCurrentEditor;
- (void)didBecomeCurrentEditorForEditorController:(id)arg1;
- (void)selectionDidChangeFromSelection:(id)arg1 toSelection:(id)arg2 withFlags:(unsigned long long)arg3;
- (void)didProcessAllChanges;
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) TSKDocumentRoot *documentRoot;
@property(retain, nonatomic) TSDEditorController *editorController;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingCalloutAttributes;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingConnectionLineAttributes;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingEndpoints;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingFill;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingOpacity;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingReflection;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingResize;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingShadow;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingShrinkTextToFit;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingSmartShapeAttributes;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingStroke;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingTextInset;
@property(retain, nonatomic) TSKSelection<TSDTextSelection> *selectionForArrowKeys;
@property(readonly) Class superclass;

@end

