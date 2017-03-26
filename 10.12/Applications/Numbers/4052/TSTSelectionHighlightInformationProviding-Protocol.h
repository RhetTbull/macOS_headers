//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, TSKLobbySession, TSTCellRegion, TSUColor;

@protocol TSTSelectionHighlightInformationProviding <NSObject>
@property(readonly, nonatomic) BOOL selectionIsCollaborative;
@property(readonly, nonatomic) unsigned int selectionStrokeVisibilityMask;
@property(readonly, nonatomic) TSUColor *selectionStrokeGlowColor;
@property(readonly, nonatomic) NSArray *selectionStrokeOuterColors;
@property(readonly, nonatomic) NSArray *selectionStrokeInnerColors;
@property(readonly, nonatomic) TSUColor *selectionStrokeInnerColor;
@property(readonly, nonatomic) double selectionStrokeInnerColorWidth;
@property(readonly, nonatomic) double selectionInset;
@property(readonly, nonatomic) BOOL selectionIsMultipleHighlightLines;
@property(readonly, nonatomic) unsigned long long selectionHighlightType;
@property(readonly, nonatomic) TSTCellRegion *selectionCellRegion;

@optional
@property(readonly, nonatomic) TSKLobbySession *lobbySession;
@end

