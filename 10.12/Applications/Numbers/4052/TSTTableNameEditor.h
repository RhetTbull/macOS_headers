//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDEditor-Protocol.h"
#import "TSWPBaselineInspecting-Protocol.h"
#import "TSWPCapsInspecting-Protocol.h"
#import "TSWPFontInspecting-Protocol.h"
#import "TSWPTextInspecting-Protocol.h"

@class NSSet, NSString, TSDEditorController, TSDInteractiveCanvasController, TSDShadow, TSKDocumentRoot, TSTTableEditor, TSTTableInfo, TSTTableModel;

@interface TSTTableNameEditor : NSObject <TSDEditor, TSWPTextInspecting, TSWPFontInspecting, TSWPBaselineInspecting, TSWPCapsInspecting>
{
    TSDInteractiveCanvasController *mICC;
    TSDEditorController *mEditorController;
}

+ (id)editorFromEditorController:(id)arg1;
@property(retain, nonatomic) TSDEditorController *editorController; // @synthesize editorController=mEditorController;
@property(readonly, nonatomic) TSDInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=mICC;
- (id)p_selectionBehavior;
- (void)setTableName:(id)arg1 withTextProperties:(id)arg2 shouldSetSelection:(BOOL)arg3;
- (void)setTableName:(id)arg1 withTextStyle:(id)arg2 shapeStyle:(id)arg3 shouldSetSelection:(BOOL)arg4;
- (void)copy:(id)arg1;
- (BOOL)p_canPasteTableName:(id *)arg1 optionalOutSelectionBehavior:(id *)arg2;
- (void)paste:(id)arg1;
- (BOOL)p_canPaste;
- (void)inspector:(id)arg1 applyWritingDirection:(long long)arg2;
- (void)p_applyPropertiesToTableName:(id)arg1;
- (void)toggleTextStyleProperty:(int)arg1;
- (BOOL)p_hasBIUProperty:(int)arg1;
- (BOOL)isSuperscript;
- (BOOL)isSubscript;
- (BOOL)isOutline;
- (BOOL)isStrike;
- (BOOL)isUnderline;
- (BOOL)isItalic;
- (BOOL)isBold;
- (void)inspector:(id)arg1 applyFormatValue:(id)arg2 forProperty:(int)arg3 coalesceable:(BOOL)arg4;
- (double)currentFontSizeForFontSizeController:(id)arg1;
- (void)fontSizeController:(id)arg1 choseFontSize:(double)arg2;
- (void)fontPicker:(id)arg1 choseFont:(id)arg2 preserveFace:(BOOL)arg3;
- (id)currentFontForFontPicker:(id)arg1;
- (id)valueForBIUPropertiesOfTableName:(id)arg1 forInspector:(id)arg2;
- (id)valueForBIUProperties:(id)arg1 forInspector:(id)arg2;
- (double)p_CGFloatValueForPropertyInTableName:(int)arg1;
- (id)p_valueForPropertyInTableName:(int)arg1;
- (int)p_intValueForPropertyInTableName:(int)arg1;
@property(readonly, nonatomic) int strikethru;
@property(readonly, nonatomic) int writingDirection;
@property(readonly, nonatomic) int ligatures;
@property(readonly, nonatomic) int capitalization;
@property(nonatomic) int paragraphAlignment;
@property(nonatomic) int verticalAlignment;
@property(retain, nonatomic) TSDShadow *textShadow;
- (void)setFontColor:(id)arg1;
- (id)currentFontColor;
- (void)setTextStyle:(id)arg1;
- (void)inspector:(id)arg1 toggleIntProperty:(int)arg2 onValue:(int)arg3 offValue:(int)arg4;
- (id)currentParagraphStyleForInspector:(id)arg1;
- (BOOL)canProvideTextStylePresets;
- (void)inspector:(id)arg1 toggleBoolProperty:(int)arg2;
- (void)inspector:(id)arg1 applyShapeValue:(id)arg2 forProperty:(int)arg3;
- (void)inspector:(id)arg1 applyListStyle:(id)arg2 createVariationUsingPropertyMap:(id)arg3;
- (void)inspector:(id)arg1 applyListStyleOverrideForCurrentSelectionWithValue:(id)arg2 forProperty:(int)arg3;
- (void)inspector:(id)arg1 applyTextStylePreset:(id)arg2 stripCharacterStyles:(BOOL)arg3;
- (void)inspector:(id)arg1 applyListStyle:(id)arg2 createVariationUsingPropertyMap:(id)arg3 withName:(id)arg4;
- (void)inspector:(id)arg1 applyParagraphStyle:(id)arg2 stripCharacterStyles:(BOOL)arg3;
- (void)useAllLigatures:(id)arg1;
- (void)useStandardLigatures:(id)arg1;
- (void)turnOffLigatures:(id)arg1;
- (void)applyCaps:(id)arg1;
- (void)removeCharacterSpacing:(id)arg1;
- (void)decreaseCharacterSpacing:(id)arg1;
- (void)increaseCharacterSpacing:(id)arg1;
- (void)setBaselineShift:(id)arg1;
- (id)baselineShift;
- (void)lowerBaseline:(id)arg1;
- (void)raiseBaseline:(id)arg1;
- (void)unscript:(id)arg1;
- (void)subscript:(id)arg1;
- (void)superscript:(id)arg1;
- (void)outline:(id)arg1;
- (void)strikethrough:(id)arg1;
- (void)underline:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (BOOL)inspectingShapeForInspector:(id)arg1;
- (BOOL)inspectableForInspector:(id)arg1;
- (id)documentRootForInspector:(id)arg1;
- (id)interactiveCanvasControllerForInspector:(id)arg1;
- (int)valueForVerticalAlignmentPropertyForInspector:(id)arg1;
- (int)valueForWritingDirectionPropertyForInspector:(id)arg1;
- (void)alignNatural:(id)arg1;
- (void)alignRight:(id)arg1;
- (void)alignJustified:(id)arg1;
- (void)alignCenter:(id)arg1;
- (void)alignLeft:(id)arg1;
- (int)valueForParagraphAlignmentPropertyForInspector:(id)arg1;
@property(readonly, nonatomic) TSTTableModel *tableModel;
@property(readonly, nonatomic) TSTTableInfo *tableInfo;
@property(readonly, nonatomic) TSTTableEditor *tableEditor;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (id)permittedSharedReadOnlyActions;
- (void)willEnterTableNameTextEditing;
- (BOOL)shouldDiscardAllSubselectionsStartingWithSelection:(id)arg1 withNewEditorStack:(id)arg2 selectionPath:(id)arg3;
- (void)selectionDidChangeFromSelection:(id)arg1 toSelection:(id)arg2 withFlags:(unsigned long long)arg3;
- (id)selectionWillChangeFromSelection:(id)arg1 toSelection:(id)arg2 withFlags:(unsigned long long)arg3 inSelectionPath:(id)arg4 withNewEditors:(id)arg5;
- (BOOL)shouldRemainOnEditorStackForSelection:(id)arg1 inSelectionPath:(id)arg2 withNewEditors:(id)arg3;
- (id)nextEditorForSelection:(id)arg1 withNewEditorStack:(id)arg2 selectionPath:(id)arg3;
- (id)p_repForTableNameTextEditingInTableInfo:(id)arg1;
@property(readonly, nonatomic) TSKDocumentRoot *documentRoot;
- (void)dealloc;
- (id)initWithInteractiveCanvasController:(id)arg1;
- (BOOL)numbersReorganizeInspectorPanesShouldContinueEditorStackTraversal;
- (id)numbersReorganizeInspectorPaneIdentifiers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
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
@property(readonly) Class superclass;

@end

