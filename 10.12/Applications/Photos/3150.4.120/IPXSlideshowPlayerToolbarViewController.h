//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

@class IPXSlideshowEditorController, IPXSlideshowPlayerToolbarView;

@interface IPXSlideshowPlayerToolbarViewController : IPXViewController
{
    IPXSlideshowPlayerToolbarView *_playerToolbarView;
    IPXSlideshowEditorController *_editorController;
}

@property __weak IPXSlideshowEditorController *editorController; // @synthesize editorController=_editorController;
- (void).cxx_destruct;
- (void)setLoopButtonState:(BOOL)arg1;
- (void)setPreviewAndPlayButtonsEnabled:(BOOL)arg1;
- (void)setPreviewButtonState:(BOOL)arg1;
- (void)a_previewSlideshow:(id)arg1;
- (void)a_togglePlaySlideshow:(id)arg1;
- (void)a_toggleLoopSlideshow:(id)arg1;
- (void)viewWillAppear;
- (void)loadView;

@end

