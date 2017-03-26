//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTTableCommand.h"

#import "GSSPAutoEncodable-Protocol.h"

@interface TSTCommandJustForNotifying : TSTTableCommand <GSSPAutoEncodable>
{
    int _changeDescriptorTypeAsInteger;
}

- (id)makeInverse;
- (void)rollback;
- (BOOL)supportsCollaboration;
- (BOOL)isValidForCommit;
- (void)redoWork;
- (void)undoWork;
- (void)commitWork;
- (void)p_notify;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
@property(nonatomic) int changeDescriptorType;
- (id)initWithTableInfo:(id)arg1 andChangeDescriptorType:(int)arg2;
- (void)populateGSSPCmdTableJustForNotifying:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

