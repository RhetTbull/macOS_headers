//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXBackgroundView.h"

@class NSButton;

@interface IPXSlideshowPlayerToolbarView : IPXBackgroundView
{
    NSButton *_loopButton;
    NSButton *_playButton;
    NSButton *_previewButton;
}

@property(readonly) NSButton *previewButton; // @synthesize previewButton=_previewButton;
@property(readonly) NSButton *playButton; // @synthesize playButton=_playButton;
@property(readonly) NSButton *loopButton; // @synthesize loopButton=_loopButton;
- (void).cxx_destruct;
- (void)_setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

