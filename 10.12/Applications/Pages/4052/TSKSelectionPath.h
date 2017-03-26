//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TSKSelectionPath : NSObject
{
    NSArray *mCurrentSelection;
}

+ (id)selectionPathWithSelectionArray:(id)arg1;
- (void)saveToArchive:(struct SelectionPathArchive *)arg1 archiver:(id)arg2 context:(id)arg3;
- (id)initWithArchive:(const struct SelectionPathArchive *)arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) NSString *UUIDDescription;
- (id)description;
- (void)enumerateSelectionsLeastToMostSpecificInPathUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSelectionsMostToLeastSpecificInPathUsingBlock:(CDUnknownBlockType)arg1;
- (id)leastSpecificSelectionOfClass:(Class)arg1;
- (id)mostSpecificSelectionConformingToProtocol:(id)arg1;
- (id)mostSpecificSelectionOfClass:(Class)arg1;
- (id)selectionPathByAppendingOrReplacingMostSpecificSelectionWithSelection:(id)arg1;
- (id)selectionPathReplacingMostSpecificLocationOfSelection:(id)arg1 withSelection:(id)arg2;
- (id)selectionPathPoppingToSelection:(id)arg1;
- (id)selectionPathPoppingOffSelection:(id)arg1;
- (id)selectionPathWithAppendedSelections:(id)arg1;
- (id)selectionPathWithAppendedSelection:(id)arg1;
- (unsigned long long)indexForSelection:(id)arg1;
- (id)selectionAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *orderedSelections;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithSelectionArray:(id)arg1;
- (id)tableNameTextEditingSelection;
- (id)containedCellTextEditingSelection;
- (id)singleSelectedTableInfo;
- (id)tableNameSelection;
- (id)formulaSelection;
- (id)strokeSelection;
- (id)controlCellSelection;
- (id)cellSelection;
- (id)autofillSelection;
@property(readonly, nonatomic) BOOL isInAutofillMode;
@property(readonly, nonatomic) BOOL isEditingTableName;
@property(readonly, nonatomic) BOOL isEditingTableCell;
@property(readonly, nonatomic) BOOL selectsMultipleTables;
- (id)selectionPathByFixingUpRowColumnSelection;
- (id)selectionPathWithModalSelectionsRemoved;
- (id)selectionPathWithTableTextEditingSelectionRemoved;
- (id)selectionPathWithControlCellSelectionRemovedForConfiguration;
- (id)selectionPathByFixingUpControlCellSelection;

@end

