//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTTableCommand.h"

#import "GSSPAutoEncodable-Protocol.h"

@class NSString, TSSPropertyMap, TSWPParagraphStyle, TSWPShapeStyle;

@interface TSTCommandSetTableName : TSTTableCommand <GSSPAutoEncodable>
{
    NSString *_oldName;
    TSSPropertyMap *_newStylePropertyMap;
    TSWPParagraphStyle *_oldStyle;
    TSWPShapeStyle *_oldShapeStyle;
    BOOL _oldTableNameBorderEnabled;
    NSString *_tableName;
    BOOL _borderEnabled;
    TSWPParagraphStyle *_newStyle;
    TSWPShapeStyle *_newShapeStyle;
    BOOL _definedBorderEnabled;
    BOOL _definedNewStyle;
    BOOL _definedNewShapeStyle;
}

- (void)rollback;
- (id)makeInverse;
- (BOOL)supportsCollaboration;
- (void)redoWork;
- (void)undoWork;
- (void)commitWork;
- (BOOL)isValidForCommit;
- (id)actionString;
- (void)dealloc;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithTableInfo:(id)arg1 tableName:(id)arg2 paragraphStyle:(id)arg3 shapeStyle:(id)arg4;
- (id)initWithTableInfo:(id)arg1 tableName:(id)arg2 stylePropertyMap:(id)arg3 paragraphStyle:(id)arg4 borderEnabled:(BOOL)arg5;
- (id)initWithTableInfo:(id)arg1 tableName:(id)arg2 paragraphStyle:(id)arg3 shapeStyle:(id)arg4 borderEnabled:(BOOL)arg5;
- (id)initWithTableInfo:(id)arg1 tableName:(id)arg2 stylePropertyMap:(id)arg3 borderEnabled:(BOOL)arg4;
- (id)initWithTableInfo:(id)arg1 tableName:(id)arg2 stylePropertyMap:(id)arg3;
- (id)initWithTableInfo:(id)arg1 borderEnabled:(BOOL)arg2;
- (void)populateGSSPCmdTableSetTableName:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

