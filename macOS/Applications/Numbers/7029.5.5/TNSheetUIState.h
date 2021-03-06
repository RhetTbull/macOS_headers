//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class TSKSelectionPath, TSKSelectionPathTransformer;

@interface TNSheetUIState : NSObject <NSCopying>
{
    BOOL _hasVisibleRect;
    BOOL _hasPreviousVisibleRect;
    float _viewScale;
    float _previousViewScale;
    long long _archivedDeviceIdiom;
    TSKSelectionPath *_selectionPath;
    TSKSelectionPathTransformer *_selectionPathTransformer;
    struct CGRect _visibleRect;
    struct CGRect _previousVisibleRect;
}

+ (long long)currentDeviceIdiom;
- (void).cxx_destruct;
@property(retain, nonatomic) TSKSelectionPathTransformer *selectionPathTransformer; // @synthesize selectionPathTransformer=_selectionPathTransformer;
@property(nonatomic) float previousViewScale; // @synthesize previousViewScale=_previousViewScale;
@property(nonatomic) float viewScale; // @synthesize viewScale=_viewScale;
@property(retain, nonatomic) TSKSelectionPath *selectionPath; // @synthesize selectionPath=_selectionPath;
@property(nonatomic) long long archivedDeviceIdiom; // @synthesize archivedDeviceIdiom=_archivedDeviceIdiom;
@property(nonatomic) BOOL hasPreviousVisibleRect; // @synthesize hasPreviousVisibleRect=_hasPreviousVisibleRect;
@property(nonatomic) BOOL hasVisibleRect; // @synthesize hasVisibleRect=_hasVisibleRect;
@property(nonatomic) struct CGRect previousVisibleRect; // @synthesize previousVisibleRect=_previousVisibleRect;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
- (id)p_persistableSelectionPathFromSelectionPath:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
-     // Error parsing type: v48@0:8^{SheetUIStateArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{Point}^{Point}^{Size}^{Size}^{SelectionPathArchive}^{Reference}ffBBBI}16@24@32Q40, name: saveToArchive:archiver:context:targetVersion:
-     // Error parsing type: v40@0:8^{SheetUIStateArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{Point}^{Point}^{Size}^{Size}^{SelectionPathArchive}^{Reference}ffBBBI}16@24@32, name: saveToArchive:archiver:context:
-     // Error parsing type: @32@0:8r^{SheetUIStateArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{Point}^{Point}^{Size}^{Size}^{SelectionPathArchive}^{Reference}ffBBBI}16@24, name: initWithArchive:unarchiver:
- (id)description;
- (void)transformSelectionPathFromDocumentRevision:(id)arg1;
- (void)updateForCurrentDeviceIdiomIfNecessaryWithDefaultViewScale:(float)arg1;
@property(readonly, nonatomic) struct CGPoint previousScrollPosition;
@property(readonly, nonatomic) struct CGPoint scrollPosition;
- (void)clearPreviousVisibleRect;
- (void)clearVisibleRect;
- (id)init;

@end

