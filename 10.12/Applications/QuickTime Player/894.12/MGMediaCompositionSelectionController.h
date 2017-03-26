//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MGMediaComposition, MGMediaTrack, NSArray, NSMutableArray;

@interface MGMediaCompositionSelectionController : NSObject
{
    MGMediaComposition *_mediaComposition;
    NSMutableArray *_mediaClipSelection;
    MGMediaTrack *_mediaTrackSelection;
}

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unbind:(id)arg1;
- (id)audioMediaClips;
- (id)videoMediaClips;
- (id)audioMediaTrack;
- (id)videoMediaTrack;
- (void)deselectAllMediaClips;
- (void)selectAllMediaClipsInMediaTrack:(id)arg1;
- (void)selectMediaClip:(id)arg1 optionKeyDown:(BOOL)arg2 shiftKeyDown:(BOOL)arg3;
- (BOOL)isMediaClipSelected:(id)arg1;
- (unsigned long long)numberOfSelectedMediaClips;
@property(readonly, nonatomic) MGMediaTrack *mediaTrackSelection;
@property(readonly, nonatomic) NSArray *mediaClipSelection;
@property(retain, nonatomic) MGMediaComposition *mediaComposition;
- (id)init;

@end

