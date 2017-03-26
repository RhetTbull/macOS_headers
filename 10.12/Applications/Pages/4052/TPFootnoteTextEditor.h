//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSWPTextEditor.h"

#import "TPFootnoteInspecting-Protocol.h"
#import "TSDKeyValueProxyVendingEditor-Protocol.h"

@class NSString, TPFootnoteOptionsPropertyVendor, TPFootnoteTextInspectorPane;

@interface TPFootnoteTextEditor : TSWPTextEditor <TSDKeyValueProxyVendingEditor, TPFootnoteInspecting>
{
    TPFootnoteTextInspectorPane *_textInspector;
    TPFootnoteOptionsPropertyVendor *_footnoteSelectionProxy;
}

+ (Class)touchBarProviderClass;
+ (id)keysResolvedByKeyValueProxy;
- (id)attributedSubstringForProposedRange:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
- (void)setFootnoteSpacing:(id)arg1;
- (id)footnoteSpacing;
- (void)inspector:(id)arg1 applyFootnoteNumbering:(int)arg2;
- (int)footnoteNumberingForInspector:(id)arg1;
- (void)inspector:(id)arg1 applyFootnoteFormat:(int)arg2;
- (int)footnoteFormatForInspector:(id)arg1;
- (void)inspector:(id)arg1 applyFootnoteKind:(int)arg2;
- (int)footnoteKindForInspector:(id)arg1;
- (id)p_documentRoot;
- (id)p_titleForFootnoteTextInspector;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;
- (void)willResignCurrentEditor;
- (id)footnoteInspectorPropertyVendor;
- (id)keyValueProxy;
- (id)tma_formatInspectorPaneIdentifiers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

