//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSWPCommandTextStyleChangeProperty_G.h"

#import "GSSPAutoEncodable-Protocol.h"

@class NSArray;

@interface TSWPParagraphStyleChangePropertyCommand_G : GSWPCommandTextStyleChangeProperty_G <GSSPAutoEncodable>
{
    NSArray *_rangeList;
    NSArray *_changeList;
}

@property(retain, nonatomic) NSArray *changeList; // @synthesize changeList=_changeList;
@property(retain, nonatomic) NSArray *rangeList; // @synthesize rangeList=_rangeList;
- (id)initFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)p_operationPropertyNamePrefix;
- (void)updateTransformedRangeList:(id)arg1 andChangeList:(id)arg2;
- (void)commit;
- (BOOL)process;
- (BOOL)supportsCollaboration;
- (void)dealloc;
- (void)populateGSSPCmdTextParagraphStyleChangeProperty:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (void)loadFromArchive:(const struct ParagraphStyleChangePropertyCommand_GArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct ParagraphStyleChangePropertyCommand_GArchive *)arg1 archiver:(id)arg2;

@end

