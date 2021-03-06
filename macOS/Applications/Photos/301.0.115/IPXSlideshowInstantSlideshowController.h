//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPXFullscreenSlideshowViewDelegate-Protocol.h"
#import "IPXSlideshowBasicAuthorViewControllerDelegate-Protocol.h"
#import "NSPopoverDelegate-Protocol.h"

@class IPXSelectionContainer, IPXSlideshow, IPXSlideshowBasicAuthorViewController, IPXSlideshowController, IPXSlideshowInstantSlideshowPopover, NSArray, NSResponder, NSString, NSView, NSWindow, PHCollection;

__attribute__((visibility("hidden")))
@interface IPXSlideshowInstantSlideshowController : NSObject <IPXFullscreenSlideshowViewDelegate, NSPopoverDelegate, IPXSlideshowBasicAuthorViewControllerDelegate>
{
    IPXSlideshowInstantSlideshowPopover *_popover;
    NSResponder *_initialFirstResponder;
    IPXSlideshowBasicAuthorViewController *_basicAuthorViewController;
    NSArray *_slideshowAssets;
    BOOL _wasShowingInfoPanelBeforeFullscreenPlayback;
    PHCollection *_containerCollection;
    NSWindow *_hostWindow;
    NSView *_sourceView;
    IPXSelectionContainer *_selectionContainer;
    IPXSlideshowController *_slideshowController;
    IPXSlideshow *_slideshow;
    struct CGRect _popoverSourceRect;
}

+ (id)showBasicAuthoringPopoverWithSlideshowController:(id)arg1 selectionContainer:(id)arg2 anchorView:(id)arg3;
+ (id)showBasicAuthoringPopoverWithSlideshowController:(id)arg1 selectionContainer:(id)arg2 anchorView:(id)arg3 subrect:(struct CGRect)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) IPXSlideshow *slideshow; // @synthesize slideshow=_slideshow;
@property(readonly, nonatomic) IPXSlideshowController *slideshowController; // @synthesize slideshowController=_slideshowController;
@property(retain, nonatomic) IPXSelectionContainer *selectionContainer; // @synthesize selectionContainer=_selectionContainer;
@property(retain, nonatomic) NSView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) struct CGRect popoverSourceRect; // @synthesize popoverSourceRect=_popoverSourceRect;
@property(retain, nonatomic) NSWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
- (void)fullscreenSlideshowViewDidTogglePlayback:(id)arg1;
- (void)fullscreenSlideshowView:(id)arg1 finishedPlaybackReachingEnd:(BOOL)arg2;
- (void)playPressedInBasicAuthorViewController:(id)arg1;
- (BOOL)popoverShouldClose:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)hidePopover;
- (void)_willHidePopover;
- (void)_setupAssetResourceDownloadSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)updateSlideshowTitle:(id)arg1;
- (void)showPopover;
- (id)popover;
- (void)dealloc;
- (id)init;
- (id)initWithSlideshowController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

