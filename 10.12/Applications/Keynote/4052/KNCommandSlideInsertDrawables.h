//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSDCommandInducedForPropagation-Protocol.h"
#import "TSDPropagatableCommand-Protocol.h"

@class KNAbstractSlide, KNSlideNode, KNUndoObject, NSArray, NSMutableArray, NSString, NSUUID, TSADrawablePositioner, TSAStyleMapper, TSDInfoGeometry;

@interface KNCommandSlideInsertDrawables : TSKCommand <GSSPAutoEncodable, TSDPropagatableCommand, TSDCommandInducedForPropagation>
{
    KNUndoObject *_undoObject;
    NSMutableArray *_removeBuildDescriptions;
    BOOL _removeSlideSpecificHyperlinks;
    TSAStyleMapper *_styleMapper;
    TSADrawablePositioner *_positioner;
    NSArray *_addedCustomFormatKeys;
    unsigned int _savedNextUntitledResolverIndex;
    BOOL _wasInitializedOverTheWire;
    BOOL _isPasting;
    NSUUID *_slideId;
    NSArray *_drawableInfoList;
    NSArray *_argsList;
    NSArray *_sagePlaceholderTagList;
    BOOL _updateGeometryToMatchObjectPlaceholder;
    NSArray *_idsOfDrawableInfosUsingObjectPlaceholderGeometry;
    NSArray *_insertBuildDescriptions;
    TSDInfoGeometry *_geometryOfObjectPlaceholderForComparisonToRestoreLink;
    BOOL _shouldTriggerRtuAnimation;
    BOOL _definedGeometryOfObjectPlaceholderForComparisonToRestoreLink;
    BOOL _definedShouldTriggerRtuAnimation;
    NSArray *_workingDrawablesBeingInserted;
    NSArray *_workingInsertBuildDescriptions;
}

+ (id)p_argsListForDrawables:(id)arg1 toInsertAtIndexes:(id)arg2 onAbstractSlide:(id)arg3;
@property(retain, nonatomic) TSDInfoGeometry *geometryOfObjectPlaceholderForComparisonToRestoreLink; // @synthesize geometryOfObjectPlaceholderForComparisonToRestoreLink=_geometryOfObjectPlaceholderForComparisonToRestoreLink;
@property(nonatomic) unsigned int savedNextUntitledResolverIndex; // @synthesize savedNextUntitledResolverIndex=_savedNextUntitledResolverIndex;
@property(readonly, nonatomic) BOOL forPaste; // @synthesize forPaste=_isPasting;
@property(retain, nonatomic) KNUndoObject *undoObject; // @synthesize undoObject=_undoObject;
@property(copy, nonatomic) NSArray *sagePlaceholderTagList; // @synthesize sagePlaceholderTagList=_sagePlaceholderTagList;
@property(copy, nonatomic) NSArray *argsList; // @synthesize argsList=_argsList;
- (void)mapDrawableForUndo:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) NSArray *objectsBeingModified;
- (void)populateChangePropagationMapAfterCommit:(id)arg1;
- (void)populateChangePropagationMapBeforeCommit:(id)arg1;
- (BOOL)modifiesAnyObjectPassingTest:(CDUnknownBlockType)arg1;
- (void)transformWithOperationTransformer:(id)arg1;
- (id)operations;
- (id)makeInverse;
- (void)rollback;
- (BOOL)supportsCollaboration;
- (id)actionString;
- (void)redo;
- (void)undo;
- (void)p_cleanUpPastedDrawable:(id)arg1;
- (void)commit;
- (void)p_prepareForFirstCommitIfNecessary;
- (void)p_applyPlaceholderTags:(id)arg1 toDrawables:(id)arg2 onSlide:(id)arg3;
- (void)p_setNodeSlideNumberVisibility:(BOOL)arg1 fromDrawables:(id)arg2;
- (void)p_addDrawablesToSlide:(id)arg1 argsList:(id)arg2;
- (int)p_indexFromIdArgs:(id)arg1;
- (BOOL)process;
- (void)p_migrateDrawables;
@property(copy, nonatomic) NSArray *idsOfDrawablesUsingObjectPlaceholderGeometry;
- (id)p_insertBuildDescriptions;
@property(readonly, nonatomic) NSArray *drawables;
- (id)p_cleanupPlaceholdersInDrawables:(id)arg1;
- (id)p_cleanupPlaceholderForConnectionLineEndpointDrawable:(id)arg1 onSlide:(id)arg2;
@property(readonly, nonatomic) KNAbstractSlide *abstractSlide;
@property(readonly, nonatomic) KNSlideNode *slideNode;
@property(copy, nonatomic) NSArray *workingInsertBuildDescriptions;
@property(copy, nonatomic) NSArray *workingDrawablesBeingInserted;
@property(readonly, copy) NSString *description;
- (void)bootstrapCommandForTesting;
- (void)dealloc;
- (void)didInitFromSOS;
- (id)initWithSlideNode:(id)arg1 drawable:(id)arg2;
- (id)initWithSlideNode:(id)arg1 drawables:(id)arg2 insertBuildDescriptions:(id)arg3 atIndex:(long long)arg4;
- (id)initWithSlideNode:(id)arg1 drawables:(id)arg2 atIndex:(long long)arg3;
- (id)initWithAbstractSlide:(id)arg1 drawables:(id)arg2 atIndexes:(id)arg3 placeholderTagList:(id)arg4;
- (id)initWithAbstractSlide:(id)arg1 drawablesForInsert:(id)arg2 insertBuildDescriptions:(id)arg3 undoObject:(id)arg4 argsList:(id)arg5 placeholderTagList:(id)arg6;
- (id)p_generatePlaceholderTagListForDrawables:(id)arg1 abstractSlide:(id)arg2;
- (id)initWithSlide:(id)arg1 drawables:(id)arg2 insertBuildDescriptions:(id)arg3 styleMapper:(id)arg4 positioner:(id)arg5 removeSlideSpecificHyperlinks:(BOOL)arg6 forPaste:(BOOL)arg7;
- (id)initWithSlide:(id)arg1 drawables:(id)arg2 styleMapper:(id)arg3 positioner:(id)arg4 forPaste:(BOOL)arg5;
- (id)initWithAbstractSlide:(id)arg1 drawablesForInsert:(id)arg2 insertBuildDescriptions:(id)arg3 undoObject:(id)arg4 atIndexes:(id)arg5 placeholderTagList:(id)arg6 forPaste:(BOOL)arg7 styleMapper:(id)arg8 positioner:(id)arg9 removeSlideSpecificHyperlinks:(BOOL)arg10;
- (id)initWithAbstractSlide:(id)arg1 drawablesForInsert:(id)arg2 insertBuildDescriptions:(id)arg3 undoObject:(id)arg4 argsList:(id)arg5 placeholderTagList:(id)arg6 forPaste:(BOOL)arg7 styleMapper:(id)arg8 positioner:(id)arg9 removeSlideSpecificHyperlinks:(BOOL)arg10;
@property(nonatomic) BOOL updateGeometryToMatchObjectPlaceholder;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)populateGSSPCmdSlideInsertDrawables:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *otherSerializationClasses;
@property(readonly) Class superclass;

@end

