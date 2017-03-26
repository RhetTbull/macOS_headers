//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FFOrganizerDelegatePassthrough-Protocol.h"

@class FFAnchoredStack, FFEditAction, FFEventMediaSidebarModule, FFMediaEventProject, FFMediaSidebarModule, FFSettingsModule, LKViewModule, NSArray, NSSet;
@protocol FFEditActionSourceProtocol;

@protocol FFOrganizerDelegate <FFOrganizerDelegatePassthrough>
- (id)selectionOwner;
- (void)organizerModule:(LKViewModule *)arg1 didSelectItems:(NSArray *)arg2;

@optional
- (FFMediaSidebarModule *)mediaSidebarModule;
- (void)showInspectorForSidebarModule:(FFEventMediaSidebarModule *)arg1;
- (void)sidebarModuleDidChangeSelection:(FFEventMediaSidebarModule *)arg1;
- (void)ensureSidebarVisible;
- (void)showImportPanelWithKeywords:(NSSet *)arg1 forEvent:(FFMediaEventProject *)arg2;
- (BOOL)isOverlayEditActionAllowed;
- (FFMediaEventProject *)defaultEventForNewProject;
- (void)openSettingsWithModule:(FFSettingsModule *)arg1;
- (BOOL)canPerformEditAction:(FFEditAction *)arg1 withSource:(id <FFEditActionSourceProtocol>)arg2;
- (void)openStack:(FFAnchoredStack *)arg1;
- (double)defaultEditDuration;
@end

