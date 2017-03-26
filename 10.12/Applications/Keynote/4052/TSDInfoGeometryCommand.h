//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDInfoCommand.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSDCommandInducedForPropagation-Protocol.h"
#import "TSDPropagatableCommand-Protocol.h"

@class NSArray, NSString, TSDInfoGeometry;

@interface TSDInfoGeometryCommand : TSDInfoCommand <GSSPAutoEncodable, TSDPropagatableCommand, TSDCommandInducedForPropagation>
{
    TSDInfoGeometry *_drawableInfoGeometry;
    BOOL _shouldTriggerRtuAnimation;
    BOOL _matchObjectPlaceholderGeometry;
    BOOL _initiatedOnWeb;
    BOOL _definedShouldTriggerRtuAnimation;
    BOOL _definedMatchObjectPlaceholderGeometry;
    BOOL _definedInitiatedOnWeb;
    TSDInfoGeometry *_oldGeometry;
    BOOL _oldMatchObjectPlaceholderGeometry;
}

@property(readonly, nonatomic) BOOL initiatedOnWeb; // @synthesize initiatedOnWeb=_initiatedOnWeb;
@property(readonly, nonatomic) NSArray *objectsBeingModified;
- (void)populateChangePropagationMapAfterCommit:(id)arg1;
- (BOOL)modifiesAnyObjectPassingTest:(CDUnknownBlockType)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct InfoGeometryCommandArchive *)arg1 archiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct InfoGeometryCommandArchive *)arg1 unarchiver:(id)arg2;
- (id)subclassInitFromUnarchiver:(id)arg1;
- (BOOL)oldMatchObjectPlaceholderGeometry;
- (id)oldGeometry;
- (void)redo;
- (id)propertyNameForTransform;
- (id)makeInverse;
- (BOOL)supportsCollaboration;
- (void)rollback;
- (void)undo;
- (void)commit;
- (void)applyGeometryToInfoForCommit:(id)arg1;
- (void)p_do;
- (BOOL)process;
- (void)dealloc;
- (id)i_initWithInfo:(id)arg1 newGeometry:(id)arg2 matchObjectPlaceholderGeometry:(BOOL)arg3 shouldTriggerRtuAnimation:(BOOL)arg4 context:(id)arg5;
- (id)p_initWithInfo:(id)arg1 newGeometry:(id)arg2 matchObjectPlaceholderGeometry:(BOOL)arg3 shouldTriggerRtuAnimation:(BOOL)arg4 context:(id)arg5;
- (id)initWithInfo:(id)arg1 newGeometry:(id)arg2 shouldTriggerRtuAnimation:(BOOL)arg3 context:(id)arg4;
- (id)initWithInfo:(id)arg1 newGeometry:(id)arg2 matchObjectPlaceholderGeometry:(BOOL)arg3 context:(id)arg4;
- (id)initWithInfo:(id)arg1 newGeometry:(id)arg2 context:(id)arg3;
- (void)setNewGeometry:(id)arg1;
@property(readonly, nonatomic) TSDInfoGeometry *newGeometry;
- (void)deallocSOS;
- (void)populateGSSPCmdDrawableSetGeometry:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *otherSerializationClasses;
@property(readonly) Class superclass;

@end

