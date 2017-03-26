//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol FFTransportDelegate <NSObject>
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)setRate:(double)arg1;

@optional
- (void)doReject;
- (void)doFavorite;
- (void)exitFullScreen;
- (void)enterFullScreen;
- (BOOL)isVoiceOverActive;
- (void)toggleVoiceOver;
- (void)playSelected;
- (void)playNext;
- (void)playPrevious;
- (BOOL)canPlaySelected;
- (BOOL)canPlayNext;
- (BOOL)canPlayPrevious;
- (BOOL)canShowControls;
@end

