//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTWPInteractiveCanvasController.h"

@interface TSTFormulaInteractiveCanvasController : TSTWPInteractiveCanvasController
{
    BOOL mEndingFormulaEditing;
    BOOL editingToken;
}

@property(nonatomic, getter=isEditingToken) BOOL editingToken; // @synthesize editingToken;
- (id)filteredMainCanvasRestoredSelectionPath:(id)arg1;
- (id)p_formulaEditingTextRep;
- (void)deselectAll:(id)arg1;
- (BOOL)canPerformInteractiveAction:(SEL)arg1 withSender:(id)arg2;
- (void)endEditing;
- (id)hitRep:(struct CGPoint)arg1;
- (void)scrollToSelectionPath:(id)arg1 scrollOptions:(unsigned long long)arg2;
- (BOOL)allowAutoscroll;
- (BOOL)spellCheckingSupported;

@end

