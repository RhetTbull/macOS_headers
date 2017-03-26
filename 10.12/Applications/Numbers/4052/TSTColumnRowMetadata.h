//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKSosBase.h"

#import "GSSPAutoEncodable-Protocol.h"

@class TSTCellStyle, TSWPParagraphStyle;

@interface TSTColumnRowMetadata : TSKSosBase <GSSPAutoEncodable>
{
    UUIDData_5fbc143e _headerUID;
    double _size;
    unsigned char _hidingAction;
    TSTCellStyle *_cellStyle;
    TSWPParagraphStyle *_textStyle;
    BOOL _definedCellStyle;
    BOOL _definedTextStyle;
}

+ (id)metadata;
@property(readonly, nonatomic) unsigned char hidingAction; // @synthesize hidingAction=_hidingAction;
@property(readonly, nonatomic) double size; // @synthesize size=_size;
@property(readonly, nonatomic) TSWPParagraphStyle *textStyle; // @synthesize textStyle=_textStyle;
@property(readonly, nonatomic) TSTCellStyle *cellStyle; // @synthesize cellStyle=_cellStyle;
@property(readonly, nonatomic) UUIDData_5fbc143e headerUID; // @synthesize headerUID=_headerUID;
- (id).cxx_construct;
- (BOOL)migrateStylesToDocument:(id)arg1;
- (void)saveToMessage:(struct ColumnRowMetadataArchive *)arg1 archiver:(id)arg2;
- (id)initFromMessage:(const struct ColumnRowMetadataArchive *)arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) BOOL isValid;
- (void)dealloc;
- (id)init;
- (id)initWithSize:(double)arg1 hidingAction:(unsigned char)arg2 cellStyle:(id)arg3 textStyle:(id)arg4 headerUID:(UUIDData_5fbc143e)arg5;
- (void)populateGSSPTableHeaderInfo:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

