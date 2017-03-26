//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

#import "GSSPAutoEncodable-Protocol.h"

@class NSArray;

@interface TSAInducedVerifyDrawableZOrdersWithServerCommand : TSKCommand <GSSPAutoEncodable>
{
    NSArray *_serverDrawableZOrderLists;
}

@property(readonly, nonatomic) NSArray *serverDrawableZOrderLists; // @synthesize serverDrawableZOrderLists=_serverDrawableZOrderLists;
- (id)makeInverse;
- (void)rollback;
- (void)redo;
- (void)undo;
- (BOOL)isUndoable;
- (BOOL)supportsCollaboration;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)commit;
- (BOOL)process;
- (id)drawableZOrderListForContainerId:(id)arg1;
- (BOOL)isContainer:(id)arg1;
- (id)initWithContext:(id)arg1 objectIdList:(id)arg2;
- (void)deallocSOS;
- (void)populateGSSPCmdInducedVerifyDrawableZOrdersWithServer:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (void)loadFromArchive:(const struct InducedVerifyDrawableZOrdersWithServerCommandArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct InducedVerifyDrawableZOrdersWithServerCommandArchive *)arg1 archiver:(id)arg2;

@end

