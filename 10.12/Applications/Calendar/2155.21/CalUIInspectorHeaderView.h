//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSButton, NSTextField;

@interface CalUIInspectorHeaderView : NSView
{
    NSButton *_closeButton;
    NSTextField *_infoLabel;
}

@property(retain) NSTextField *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain) NSButton *closeButton; // @synthesize closeButton=_closeButton;
- (void).cxx_destruct;
@property(readonly) double neededBottomInset;
@property(readonly) double neededTopInset;
- (void)close:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

