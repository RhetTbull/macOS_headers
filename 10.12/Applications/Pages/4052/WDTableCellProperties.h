//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WDDocument;

@interface WDTableCellProperties : NSObject
{
    short mWidth;
    short mPosition;
    unsigned int mOriginal:1;
    unsigned int mTracked:1;
    unsigned int mResolved:1;
    CDStruct_dbdf0818 mOriginalProperties;
    CDStruct_dbdf0818 mTrackedProperties;
    WDDocument *mDocument;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isFormattingChangeDateOverridden;
- (void)setFormattingChangeDate:(id)arg1;
- (id)formattingChangeDate;
- (BOOL)isEditDateOverridden;
- (void)setEditDate:(id)arg1;
- (id)editDate;
- (BOOL)isDeletionDateOverridden;
- (void)setDeletionDate:(id)arg1;
- (id)deletionDate;
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (BOOL)isIndexToAuthorIDOfEditOverridden;
- (void)setIndexToAuthorIDOfEdit:(unsigned short)arg1;
- (unsigned short)indexToAuthorIDOfEdit;
- (BOOL)isIndexToAuthorIDOfDeletionOverridden;
- (void)setIndexToAuthorIDOfDeletion:(unsigned short)arg1;
- (unsigned short)indexToAuthorIDOfDeletion;
- (BOOL)isFormattingChangedOverridden;
- (void)setFormattingChanged:(int)arg1;
- (int)formattingChanged;
- (BOOL)isEditedOverridden;
- (void)setEdited:(int)arg1;
- (int)edited;
- (BOOL)isDeletedOverridden;
- (void)setDeleted:(int)arg1;
- (int)deleted;
- (BOOL)isNoWrapOverridden;
- (void)setNoWrap:(BOOL)arg1;
- (BOOL)noWrap;
- (BOOL)isFirstInSetOfVerticallyMergedCellsOverridden;
- (void)setFirstInSetOfVerticallyMergedCells:(BOOL)arg1;
- (BOOL)firstInSetOfVerticallyMergedCells;
- (BOOL)isVerticallyMergedCellOverridden;
- (void)setVerticallyMergedCell:(BOOL)arg1;
- (BOOL)verticallyMergedCell;
- (BOOL)isTextDirectionOverridden;
- (void)setTextDirection:(int)arg1;
- (int)textDirection;
- (BOOL)isVerticalAlignmentOverridden;
- (void)setVerticalAlignment:(int)arg1;
- (int)verticalAlignment;
- (BOOL)isRightMarginTypeOverridden;
- (void)setRightMarginType:(int)arg1;
- (int)rightMarginType;
- (BOOL)isRightMarginOverridden;
- (void)setRightMargin:(short)arg1;
- (short)rightMargin;
- (BOOL)isLeftMarginTypeOverridden;
- (void)setLeftMarginType:(int)arg1;
- (int)leftMarginType;
- (BOOL)isLeftMarginOverridden;
- (void)setLeftMargin:(short)arg1;
- (short)leftMargin;
- (BOOL)isBottomMarginTypeOverridden;
- (void)setBottomMarginType:(int)arg1;
- (int)bottomMarginType;
- (BOOL)isBottomMarginOverridden;
- (void)setBottomMargin:(short)arg1;
- (short)bottomMargin;
- (BOOL)isTopMarginTypeOverridden;
- (void)setTopMarginType:(int)arg1;
- (int)topMarginType;
- (BOOL)isTopMarginOverridden;
- (void)setTopMargin:(short)arg1;
- (short)topMargin;
- (BOOL)isWidthTypeOverridden;
- (void)setWidthType:(int)arg1;
- (int)widthType;
- (BOOL)isInsideVerticalBorderOverridden;
- (id)mutableInsideVerticalBorder;
- (id)insideVerticalBorder;
- (BOOL)isInsideHorizontalBorderOverridden;
- (id)mutableInsideHorizontalBorder;
- (id)insideHorizontalBorder;
- (BOOL)isDiagonalDownBorderOverridden;
- (id)mutableDiagonalDownBorder;
- (id)diagonalDownBorder;
- (BOOL)isDiagonalUpBorderOverridden;
- (id)mutableDiagonalUpBorder;
- (id)diagonalUpBorder;
- (BOOL)isRightBorderOverridden;
- (id)mutableRightBorder;
- (id)rightBorder;
- (BOOL)isBottomBorderOverridden;
- (id)mutableBottomBorder;
- (id)bottomBorder;
- (BOOL)isLeftBorderOverridden;
- (id)mutableLeftBorder;
- (id)leftBorder;
- (BOOL)isTopBorderOverridden;
- (id)mutableTopBorder;
- (id)topBorder;
- (void)clearShading;
- (BOOL)isShadingOverridden;
- (id)mutableShading;
- (id)shading;
- (void)originalToTracked;
- (void)addProperties:(id)arg1;
- (void)setResolveMode:(int)arg1;
- (int)resolveMode;
- (void)setPosition:(short)arg1;
- (short)position;
- (void)setWidth:(short)arg1;
- (short)width;
- (id)document;
- (id)initWithDocument:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)description;
- (void)addPropertiesValues:(CDStruct_dbdf0818 *)arg1 to:(CDStruct_dbdf0818 *)arg2;

@end

