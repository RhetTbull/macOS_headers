//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC7Keynote26KNMacThemeChangeController.h"

#import "TSATemplateChooserCoordinatorDelegate-Protocol.h"

@protocol TSATemplateChooserAppDelegate;

@interface _TtC7Keynote26KNMacThemeChangeController (Keynote) <TSATemplateChooserCoordinatorDelegate>
@property(nonatomic, readonly) id <TSATemplateChooserAppDelegate> templateChooserAppDelegate;
- (void)templateChooserCoordinatorDidCancel:(id)arg1;
- (void)templateChooserCoordinatorWillClose:(id)arg1;
- (BOOL)templateChooserCoordinator:(id)arg1 willHandleError:(id)arg2;
- (void)templateChooserCoordinator:(id)arg1 didChooseTemplateDocument:(id)arg2 locale:(id)arg3 templateAccessCompletionHandler:(CDUnknownBlockType)arg4;
@end

