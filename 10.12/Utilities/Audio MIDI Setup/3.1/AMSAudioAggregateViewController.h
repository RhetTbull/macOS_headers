//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "AMSAudioStackViewController.h"

@class AMSAggregateDeviceView;

@interface AMSAudioAggregateViewController : AMSAudioStackViewController
{
    AMSAggregateDeviceView *aggregateView;
}

- (void).cxx_destruct;
- (void)getHelpAction:(id)arg1;
- (void)updateTableSelection:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)setDeviceListForDevice:(id)arg1;
- (void)setDevice:(id)arg1;
- (id)init;
- (void)viewDidLoad;

@end

