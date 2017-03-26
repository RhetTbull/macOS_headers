//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "NSFastEnumeration-Protocol.h"

@class TSTCellStyle, TSTTableStyle, TSWPParagraphStyle, TSWPShapeStyle;

@interface TSTTableStyleNetwork : TSPObject <GSSPAutoEncodable, NSFastEnumeration>
{
    int mPresetIndex;
    TSTTableStyle *mTableStyle;
    TSTCellStyle *mBodyCellStyle;
    TSTCellStyle *mHeaderRowCellStyle;
    TSTCellStyle *mHeaderColumnCellStyle;
    TSTCellStyle *mFooterRowCellStyle;
    TSWPParagraphStyle *mBodyTextStyle;
    TSWPParagraphStyle *mHeaderRowTextStyle;
    TSWPParagraphStyle *mHeaderColumnTextStyle;
    TSWPParagraphStyle *mFooterRowTextStyle;
    TSWPParagraphStyle *mTableNameStyle;
    TSWPShapeStyle *mTableNameShapeStyle;
}

+ (id)identifiersForPresetID:(unsigned long long)arg1;
+ (id)curatedTextStylePropertySetForCrossDocumentPasteMasterComparison;
+ (id)curatedTableStylePropertySetForCrossDocumentPasteMasterComparison;
+ (id)defaultTableNameShapeStyleWithContext:(id)arg1;
+ (id)tableNameShapeStyleIDForPreset:(unsigned long long)arg1;
+ (id)tableNameStyleIDForPreset:(unsigned long long)arg1;
+ (id)networkFromTheme:(id)arg1 presetIndex:(unsigned long long)arg2;
+ (id)networkFromTheme:(id)arg1 presetID:(unsigned long long)arg2;
+ (id)networkFromStylesheet:(id)arg1 presetID:(unsigned long long)arg2;
+ (id)createStylesInStylesheet:(id)arg1 presetID:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (id)networkWithContext:(id)arg1 presetID:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (id)networkCapturedFromMasterLayout:(id)arg1 imageAnalyzer:(id)arg2;
+ (id)networkCapturedFromMasterLayout:(id)arg1;
+ (id)defaultNetworkFromTheme:(id)arg1 withMapper:(id)arg2;
+ (id)networkFromTableModel:(id)arg1;
- (void)p_flattenStrokesIntoPropertyMap:(id)arg1 masterLayout:(id)arg2;
- (void)p_updateAccumulationDict:(id)arg1 cellID:(struct TSUCellCoord)arg2 key:(id)arg3 currentMax:(unsigned long long *)arg4 cellIDWithCurrentMax:(struct TSUCellCoord *)arg5;
- (id)p_getCleanTextStyleAtCellID:(struct TSUCellCoord)arg1 tableModel:(id)arg2 imageAnalyzer:(id)arg3 tableArea:(unsigned long long)arg4;
- (id)p_getCleanCellStyleForCellID:(struct TSUCellCoord)arg1 tableModel:(id)arg2 imageAnalyzer:(id)arg3 tableArea:(unsigned long long)arg4;
- (struct TSUCellCoord)p_representativeStyleCellInRange:(struct TSUCellRect)arg1 tableModel:(id)arg2;
- (void)p_captureAndFlattenStyles:(id)arg1 imageAnalyzer:(id)arg2;
- (void)upgradeIfNecessary;
- (void)saveToArchive:(struct TableStyleNetworkArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct TableStyleNetworkArchive *)arg1 withUnarchiver:(id)arg2;
- (id)initWithArchive:(const struct TableStyleNetworkArchive *)arg1 unarchiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 fromDictionary:(id)arg2 withPreset:(unsigned long long)arg3;
- (BOOL)valid;
- (id)dictionaryWithPreset:(unsigned long long)arg1;
- (id)styleArray;
- (void)setTextStyle:(id)arg1 forTableArea:(unsigned long long)arg2;
- (void)setCellStyle:(id)arg1 forTableArea:(unsigned long long)arg2;
- (id)textStyleForTableArea:(unsigned long long)arg1;
- (id)cellStyleForTableArea:(unsigned long long)arg1;
- (BOOL)stylesInStylesheet:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1 styleComparisonBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)copy;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 context:(id)arg2;
- (id)initWithContext:(id)arg1 fromTableModel:(id)arg2;
- (id)initWithContext:(id)arg1 fromArray:(id)arg2 presetID:(unsigned long long)arg3;
- (id)initWithContext:(id)arg1;
@property(nonatomic) unsigned long long presetID;
@property(retain, nonatomic) TSWPShapeStyle *tableNameShapeStyle;
@property(retain, nonatomic) TSWPParagraphStyle *tableNameStyle;
- (void)setHeaderRowTextStyle:(id)arg1;
@property(readonly, nonatomic) TSWPParagraphStyle *headerRowTextStyle;
- (void)setFooterRowTextStyle:(id)arg1;
@property(readonly, nonatomic) TSWPParagraphStyle *footerRowTextStyle;
- (void)setHeaderColumnTextStyle:(id)arg1;
@property(readonly, nonatomic) TSWPParagraphStyle *headerColumnTextStyle;
- (void)setBodyTextStyle:(id)arg1;
@property(readonly, nonatomic) TSWPParagraphStyle *bodyTextStyle;
- (void)setHeaderRowCellStyle:(id)arg1;
@property(readonly, nonatomic) TSTCellStyle *headerRowCellStyle;
- (void)setFooterRowCellStyle:(id)arg1;
@property(readonly, nonatomic) TSTCellStyle *footerRowCellStyle;
- (void)setHeaderColumnCellStyle:(id)arg1;
@property(readonly, nonatomic) TSTCellStyle *headerColumnCellStyle;
- (void)setBodyCellStyle:(id)arg1;
@property(readonly, nonatomic) TSTCellStyle *bodyCellStyle;
@property(retain, nonatomic) TSTTableStyle *tableStyle;
- (void)populateGSSPTableStyleNetwork:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

