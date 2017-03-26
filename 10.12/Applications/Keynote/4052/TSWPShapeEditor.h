//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDShapeEditor.h"

#import "TSDKeyValueProxyVendingEditor-Protocol.h"
#import "TSWPCompleteTextInspecting-Protocol.h"

@class NSDictionary, NSSet, NSString, TSDEditorController, TSKDocumentRoot, TSUNoCopyDictionary;

@interface TSWPShapeEditor : TSDShapeEditor <TSDKeyValueProxyVendingEditor, TSWPCompleteTextInspecting>
{
    TSUNoCopyDictionary *_textEditors;
}

+ (Class)touchBarProviderClass;
+ (BOOL)p_supportsTextContainerForShape:(id)arg1;
+ (void)initialize;
+ (id)keysResolvedByKeyValueProxy;
- (void)p_withTextEditorsPerformUndoableAction:(CDUnknownBlockType)arg1;
- (void)p_performRequalifiedUndoableCommand:(SEL)arg1 fromSender:(id)arg2;
- (id)p_firstTextEditor;
- (void)redefineTextBoxPresetFromSelection:(id)arg1;
- (void)addPresetFromSender:(id)arg1 withImage:(id)arg2;
- (BOOL)canAddPresetFromImage;
- (void)inspector:(id)arg1 applyVerticalTextLayout:(BOOL)arg2;
- (BOOL)verticalTextLayoutForInspector:(id)arg1;
- (BOOL)supportsVerticalTextLayout;
- (id)p_firstEditorToSupportVerticalTextLayout;
- (void)setRightIndent:(id)arg1;
- (id)rightIndent;
- (void)setLeftIndent:(id)arg1;
- (id)leftIndent;
- (void)setFirstLineIndent:(id)arg1;
- (id)firstLineIndent;
- (void)setRelativeLineSpacing:(id)arg1;
- (id)relativeLineSpacing;
- (void)setLineSpacing:(id)arg1;
- (id)lineSpacing;
- (void)setTracking:(id)arg1;
- (void)increaseCharacterSpacing:(id)arg1;
- (void)decreaseCharacterSpacing:(id)arg1;
- (void)removeCharacterSpacing:(id)arg1;
- (id)tracking;
- (void)setSpaceAfter:(id)arg1;
- (id)spaceAfter;
- (void)setSpaceBefore:(id)arg1;
- (id)spaceBefore;
- (void)revertStyles:(id)arg1;
- (void)useAllLigatures:(id)arg1;
- (void)useStandardLigatures:(id)arg1;
- (void)turnOffLigatures:(id)arg1;
- (void)outline:(id)arg1;
- (void)strikethrough:(id)arg1;
- (void)underline:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (BOOL)inspectingShapeForInspector:(id)arg1;
- (BOOL)inspectableForInspector:(id)arg1;
- (id)documentRootForInspector:(id)arg1;
- (id)interactiveCanvasControllerForInspector:(id)arg1;
- (int)valueForVerticalAlignmentPropertyForInspector:(id)arg1;
- (int)valueForWritingDirectionPropertyForInspector:(id)arg1;
- (void)reverseDirection:(id)arg1;
- (void)alignNatural:(id)arg1;
- (void)alignRight:(id)arg1;
- (void)alignJustified:(id)arg1;
- (void)alignCenter:(id)arg1;
- (void)alignLeft:(id)arg1;
- (int)valueForParagraphAlignmentPropertyForInspector:(id)arg1;
- (id)valueForBIUProperties:(id)arg1 forInspector:(id)arg2;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)inspector:(id)arg1 applyWritingDirection:(long long)arg2;
- (void)inspector:(id)arg1 applyTextStylePreset:(id)arg2 stripCharacterStyles:(BOOL)arg3;
- (void)inspector:(id)arg1 applyShapeValue:(id)arg2 forProperty:(int)arg3;
- (void)inspector:(id)arg1 applyFormatValue:(id)arg2 forProperty:(int)arg3 coalesceable:(BOOL)arg4;
- (void)inspector:(id)arg1 applyListStyle:(id)arg2 createVariationUsingPropertyMap:(id)arg3;
- (void)inspector:(id)arg1 applyListStyleOverrideForCurrentSelectionWithValue:(id)arg2 forProperty:(int)arg3;
- (void)inspector:(id)arg1 applyParagraphStyle:(id)arg2 stripCharacterStyles:(BOOL)arg3;
- (void)inspector:(id)arg1 toggleIntProperty:(int)arg2 onValue:(int)arg3 offValue:(int)arg4;
- (void)inspector:(id)arg1 toggleBoolProperty:(int)arg2;
- (id)currentParagraphStyleForInspector:(id)arg1;
- (BOOL)canProvideTextStylePresets;
- (void)setDecimalTab:(id)arg1;
- (id)decimalTab;
- (void)setTabs:(id)arg1;
- (id)tabs;
- (void)setDefaultTabStops:(id)arg1;
- (id)defaultTabStops;
- (void)setCurrentLevelValueForListStyleArrayProperty:(int)arg1 toObject:(id)arg2;
- (id)currentLevelValueForListStyleArrayProperty:(int)arg1;
- (void)setCurrentValueForListStyleProperty:(int)arg1 toObject:(id)arg2;
- (id)currentValueForListStyleProperty:(int)arg1;
- (void)setFirstTopicNumber:(unsigned long long)arg1;
- (unsigned long long)firstTopicNumber;
- (id)additionalCommandForIndenting:(id)arg1;
- (void)indentParagraphLevel:(id)arg1;
- (void)outdentParagraphLevel:(id)arg1;
- (void)indentParagraphLevelWithFlowByDelta:(long long)arg1;
- (void)indentParagraphLevelByDelta:(long long)arg1;
- (BOOL)canIndentParagraphLevelWithFlowByDelta:(long long)arg1;
- (BOOL)canIndentParagraphLevelByDelta:(long long)arg1;
- (BOOL)currentModelSupportsIndenting;
- (void)removeHighlightAndComment:(id)arg1;
- (void)addHighlight:(id)arg1;
- (void)toggleHighlightText:(id)arg1;
- (BOOL)canRemoveHighlightForCurrentSelection;
- (BOOL)canHighlightCurrentSelection;
- (void)setFontColor:(id)arg1;
- (id)currentFontColor;
- (void)fontSizeController:(id)arg1 choseFontSize:(double)arg2;
- (double)currentFontSizeForFontSizeController:(id)arg1;
- (void)fontPicker:(id)arg1 choseFont:(id)arg2 preserveFace:(BOOL)arg3;
- (id)currentFontForFontPicker:(id)arg1;
- (void)reverseColumnOrderInspector:(id)arg1;
- (void)inspector:(id)arg1 applyColumns:(id)arg2;
- (id)columnsForInspector:(id)arg1;
- (BOOL)columnsAreMixed;
- (BOOL)supportsColumns;
- (id)p_firstEditorToSupportColumns;
- (void)applyCaps:(id)arg1;
- (void)setBaselineShift:(id)arg1;
- (id)baselineShift;
- (void)lowerBaseline:(id)arg1;
- (void)raiseBaseline:(id)arg1;
- (void)superscript:(id)arg1;
- (void)subscript:(id)arg1;
- (void)unscript:(id)arg1;
- (void)setParagraphFill:(id)arg1;
- (id)paragraphFill;
- (void)setTextBackground:(id)arg1;
- (id)textBackground;
- (BOOL)canAddPresetFromSelection;
- (id)newApplyPresetCommandFromShape:(id)arg1 preset:(id)arg2 applyTextStyle:(BOOL)arg3;
@property(readonly) NSDictionary *textEditors;
- (id)p_textEditorForShapeInfo:(id)arg1;
- (void)inspector:(id)arg1 setInsetMargin:(long long)arg2;
- (long long)currentInsetMarginForInspector:(id)arg1;
- (id)stylePresetHint;
- (id)imageForPreset:(id)arg1 size:(struct CGSize)arg2;
- (BOOL)p_shapeInfoHasText:(id)arg1;
- (BOOL)allShapeInfosHaveText;
- (id)styleClassesToCheckForPasteStyle;
- (void)didBecomeTextInputEditor;
- (id)nextEditorForSelection:(id)arg1 withNewEditorStack:(id)arg2 selectionPath:(id)arg3;
- (void)willResignCurrentEditor;
- (id)p_shapeRep;
- (void)setInfos:(id)arg1;
- (id)shapeInfoStorages;
- (id)firstShapeInfoStorage;
- (id)displayedObjectsForInspector;
- (id)firstShapeInfo;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (void)p_tearDownEditors;
- (void)dealloc;
- (id)tma_formatInspectorPaneSelectedPaneIdentifierForIdentifiers:(id)arg1 previousIdentifier:(id)arg2 editorsDidChange:(BOOL)arg3 newCanvasObject:(BOOL)arg4;
- (id)tma_formatInspectorPaneIdentifiers;
- (id)paginatedTextSelectionProxies;
- (id)textContainerProxies;
- (id)paragraphSelectionProxies;
- (id)characterSelectionProxies;

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
@property(readonly) Class superclass;

@end

