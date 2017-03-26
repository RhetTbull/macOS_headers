//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CustomAlertController.h"

@class NSButton, NSPopUpButton, NSTextField;

@interface OpenInLoopUtilityController : CustomAlertController
{
    NSTextField *numBeats;
    NSPopUpButton *beatsOrBars;
    NSButton *okButton;
    int m_numBeats;
    int m_beatsPerBar;
    BOOL m_beats;
}

+ (id)show;
+ (int)showWithNumBeats:(int)arg1 beatsPerBar:(int)arg2 asBeats:(BOOL)arg3;
+ (id)nibName;
- (void)click_Cancel:(id)arg1;
- (void)click_shorten:(id)arg1;
- (void)click_OK:(id)arg1;
- (void)change_beatsOrBars:(id)arg1;
- (void)change_beats:(id)arg1;
- (void)updateUI;

@end

