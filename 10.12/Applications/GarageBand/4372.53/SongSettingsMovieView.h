//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ModuleController.h"

@class MAKitSegmentedScrubber, NSButton, NSSlider;

@interface SongSettingsMovieView : ModuleController
{
    MAKitSegmentedScrubber *videoAbsolutePosition;
    MAKitSegmentedScrubber *videoClipPosition;
    MAKitSegmentedScrubber *videoClipStart;
    MAKitSegmentedScrubber *videoClipEnd;
    MAKitSegmentedScrubber *videoClipLength;
    NSSlider *videoVolume;
    NSButton *videoMuteButton;
    BOOL _didPrepareForMovieFileTimeChange;
}

@property(nonatomic) BOOL didPrepareForMovieFileTimeChange; // @synthesize didPrepareForMovieFileTimeChange=_didPrepareForMovieFileTimeChange;
- (void)click_videoPrefs:(id)arg1;
- (void)change_videoFollowTempo:(id)arg1;
- (void)change_videoBasisTempo:(id)arg1;
- (void)click_videoMuteButton:(id)arg1;
- (void)change_videoVolume:(id)arg1;
- (void)change_videoClipEnd:(id)arg1;
- (void)change_videoClipStart:(id)arg1;
- (void)change_videoClipPosition:(id)arg1;
- (void)change_videoAbsolutePosition:(id)arg1;
- (void)updateUI;
- (void)finalizeChangeForScrubber:(id)arg1;
- (void)prepareChangeForScrubber:(id)arg1;
- (void)didEndEditing:(id)arg1;
- (void)videoSettingsChanged:(id)arg1;
- (void)handleUM_FORMAT:(id)arg1;
- (void)willDisappear;
- (void)willAppear;
- (void)awakeFromNib;

@end

