//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/_MKTableViewController.h>

@class VKTrafficIncident;

__attribute__((visibility("hidden")))
@interface TrafficIncidentsViewController : _MKTableViewController
{
    VKTrafficIncident *_incident;
}

@property(retain, nonatomic) VKTrafficIncident *incident; // @synthesize incident=_incident;
- (void).cxx_destruct;
- (BOOL)selectionShouldChangeInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)_cellForRow:(long long)arg1 inSection:(long long)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (id)init;

@end

