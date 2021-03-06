//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TMAInspectorPaneProvider-Protocol.h"
#import "TMAMediaBrowserInspectorPaneControllerDelegate-Protocol.h"

@class NSString, TMAMediaBrowserViewController;

@interface TMAMediaBrowserFloatingInspectorPaneProvider : NSObject <TMAMediaBrowserInspectorPaneControllerDelegate, TMAInspectorPaneProvider>
{
    TMAMediaBrowserViewController *_mediaBrowserViewController;
    unsigned long long _selectedMediaType;
}

+ (id)sharedProvider;
@property(nonatomic) unsigned long long selectedMediaType; // @synthesize selectedMediaType=_selectedMediaType;
- (void).cxx_destruct;
- (void)mediaBrowserInspectorPaneControllerDidDisappear:(id)arg1;
- (void)mediaBrowserInspectorPaneControllerWillAppear:(id)arg1;
- (id)mediaBrowserViewControllerForMediaBrowserInspectorPaneController:(id)arg1;
@property(readonly) BOOL isRestorable;
- (BOOL)shouldAddScrollViewForIdentifier:(id)arg1;
- (BOOL)shouldHideTabsForEditors:(id)arg1;
- (id)inspectorControllerForIdentifier:(id)arg1;
- (id)paneIdentifiersForEditors:(id)arg1;
- (id)newMediaBrowserViewControllerWithSelectedMediaType:(unsigned long long)arg1;
- (void)reloadData;
@property(readonly, nonatomic) struct CGSize defaultPanelSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *localizedProviderName;
@property(readonly) Class superclass;

@end

