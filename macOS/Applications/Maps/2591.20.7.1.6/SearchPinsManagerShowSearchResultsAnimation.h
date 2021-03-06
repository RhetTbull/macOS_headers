//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOMapRegion, MapCameraController, NSArray, NSNumber, SearchResult;

__attribute__((visibility("hidden")))
@interface SearchPinsManagerShowSearchResultsAnimation : NSObject
{
    NSArray *_searchResults;
    GEOMapRegion *_suggestedMapRegion;
    MapCameraController *_mapCameraController;
    NSNumber *_minZoom;
    NSNumber *_maxZoom;
    BOOL _started;
    BOOL _viewportAllowsDroppingPins;
    BOOL _hasDroppedPins;
    BOOL _cancelled;
    SearchResult *_searchResultToSelect;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (void)proceedWithDroppingPins:(BOOL)arg1;
- (void)_proceedWithDroppingPins;
- (void)cancel;
- (void)start;
- (void)dealloc;
- (id)initWithSearchResults:(id)arg1 selectedSearchResult:(id)arg2 suggestedMapRegion:(id)arg3 mapCameraController:(id)arg4 minZoom:(id)arg5 maxZoom:(id)arg6 completion:(CDUnknownBlockType)arg7;

@end

