//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSDCommandInducedForPropagation-Protocol.h"

@class KNSlide, NSArray, NSUUID;

@interface KNCommandSlideUpdateMasterDrawables : TSKCommand <GSSPAutoEncodable, TSDCommandInducedForPropagation>
{
    NSUUID *_slideId;
    NSArray *_argsList;
    NSArray *_oldChildInfosForUndo;
    NSArray *_tempDrawablesToInsert;
    NSArray *_tempDrawablesToRemove;
}

@property(copy, nonatomic) NSArray *drawablesToRemove; // @synthesize drawablesToRemove=_tempDrawablesToRemove;
@property(copy, nonatomic) NSArray *drawablesToInsert; // @synthesize drawablesToInsert=_tempDrawablesToInsert;
@property(copy, nonatomic) NSArray *oldChildInfosForUndo; // @synthesize oldChildInfosForUndo=_oldChildInfosForUndo;
@property(copy, nonatomic) NSArray *argsList; // @synthesize argsList=_argsList;
- (id)makeInverse;
- (void)transformWithOperationTransformer:(id)arg1;
- (id)operations;
- (void)rollback;
- (BOOL)supportsCollaboration;
@property(readonly, nonatomic) NSArray *objectsBeingModified;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)p_buildArgsListIfNecessary;
- (void)p_do;
- (void)p_insertDrawables:(id)arg1 atIndexes:(id)arg2 removeDrawables:(id)arg3 isInsertFirst:(BOOL)arg4;
- (BOOL)process;
@property(readonly, nonatomic) KNSlide *slide;
- (void)dealloc;
- (id)initWithSlide:(id)arg1 drawablesToInsert:(id)arg2 drawablesToRemove:(id)arg3;
- (void)populateGSSPCmdSlideUpdateMasterDrawables:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

// Remaining properties
@property(readonly, nonatomic) NSArray *otherSerializationClasses;

@end

