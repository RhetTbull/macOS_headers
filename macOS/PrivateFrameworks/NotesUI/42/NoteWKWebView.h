//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKWebView.h"

@class NoteHTMLEditorView;

@interface NoteWKWebView : WKWebView
{
    NoteHTMLEditorView *_noteHTMLEditorView;
}

@property(nonatomic) __weak NoteHTMLEditorView *noteHTMLEditorView; // @synthesize noteHTMLEditorView=_noteHTMLEditorView;
- (void).cxx_destruct;
- (id)ic_evaluateJavaScriptAndWait:(id)arg1 error:(id *)arg2;
- (void)ic_evaluateJavaScript:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)pasteAsPlainText:(id)arg1;
- (void)paste:(id)arg1;
- (void)strikethrough:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;

@end

