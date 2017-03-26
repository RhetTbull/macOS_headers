//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "KNMacPlaybackViewController-Protocol.h"

@class KNPlaybackController, KNPlaybackThumbnailGenerator, KNSlideNode, NSString;

@interface KNMacPlaybackThumbnailViewController : NSViewController <KNMacPlaybackViewController>
{
    KNPlaybackController *mPlaybackController;
    KNPlaybackThumbnailGenerator *mPlaybackThumbnailGenerator;
    KNSlideNode *mThumbnailSlideNode;
    unsigned long long mThumbnailEventIndex;
    struct CGSize mThumbnailSize;
    unsigned long long mThumbnailResolutionUpdateDisableCount;
    unsigned int mShowsNextEvent:1;
    unsigned int mIsViewLoaded:1;
    unsigned int mIsVisible:1;
    unsigned int mThumbnailNeedsUpdate:1;
    unsigned int mIsObservingBoundsChanges:1;
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)p_currentEventDidChange:(id)arg1;
- (void)p_eventAnimationsDidBecomeActive:(id)arg1;
- (void)p_eventDidStart:(id)arg1;
- (void)p_updateViewWithThumbnail:(struct CGImage *)arg1;
- (void)p_updateThumbnailIfNeeded;
- (void)p_setThumbnailNeedsUpdate;
- (void)p_updateThumbnail;
- (void)enableResolutionUpdates;
- (void)disableResolutionUpdates;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPlaybackController:(id)arg1 thumbnailGenerator:(id)arg2 showsNextEvent:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

