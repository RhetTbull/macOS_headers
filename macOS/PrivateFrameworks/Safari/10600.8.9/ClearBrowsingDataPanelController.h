//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class ClearBrowsingDataController, NSPopUpButton, NSTextField;

__attribute__((visibility("hidden")))
@interface ClearBrowsingDataPanelController : NSWindowController
{
    ClearBrowsingDataController *_clearBrowsingDataController;
    NSPopUpButton *_timePeriodPopUp;
    NSTextField *_informativeTextField;
}

+ (void)runModalPanelFromTrigger:(id)arg1;
@property(nonatomic) __weak NSTextField *informativeTextField; // @synthesize informativeTextField=_informativeTextField;
@property(nonatomic) __weak NSPopUpButton *timePeriodPopUp; // @synthesize timePeriodPopUp=_timePeriodPopUp;
- (void).cxx_destruct;
- (void)_clearBrowsingData;
- (void)_setUpPanel;
- (void)helpButtonClicked:(id)arg1;
- (void)clearBrowsingDataClicked:(id)arg1;
- (id)init;
- (void)awakeFromNib;
- (void)close:(id)arg1;
- (id)windowNibName;

@end

