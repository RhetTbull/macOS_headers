//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class ABPeoplePickerView, ABPerson, IMServiceImpl, NSArray, NSString, NSView;

@interface PeoplePicker : NSViewController
{
    BOOL _alwaysPostsNotifications;
    IMServiceImpl *_service;
    NSView *_titleView;
}

@property(retain) NSView *titleView; // @synthesize titleView=_titleView;
@property(retain) IMServiceImpl *service; // @synthesize service=_service;
@property BOOL alwaysPostsNotifications; // @synthesize alwaysPostsNotifications=_alwaysPostsNotifications;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)selectABPerson:(id)arg1 andValue:(id)arg2;
- (void)selectABPerson:(id)arg1;
- (void)selectABPerson:(id)arg1 andIMHandle:(id)arg2;
@property(readonly) ABPerson *selectedPerson;
@property(readonly) NSArray *selectedValues;
@property(readonly) NSArray *selectedRecords;
@property(readonly) NSString *displayedProperty;
- (void)propertyDidChange:(id)arg1;
- (void)valueDidChange:(id)arg1;
- (void)nameDidChange:(id)arg1;
- (void)groupDidChange:(id)arg1;
- (void)_postChangedNotification;
- (void)_postChangedNotificationNamed:(id)arg1;
- (void)setAllowsAccountSelection:(BOOL)arg1;
- (void)setAllowedServices:(id)arg1;
@property(readonly) ABPeoplePickerView *peoplePickerView;

@end

