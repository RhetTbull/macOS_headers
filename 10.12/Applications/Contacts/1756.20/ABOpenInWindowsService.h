//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABMainWindowViewModel, NSWindow;

@interface ABOpenInWindowsService : NSObject
{
    ABMainWindowViewModel *_mainWindowViewModel;
    NSWindow *_window;
}

- (void)showConfirmationSheetForEntries:(id)arg1;
- (id)entriesToPeople:(id)arg1;
- (void)openEntriesInWindows:(id)arg1;
- (void)openEntriesInWindows:(id)arg1 silent:(BOOL)arg2;
- (void)dealloc;
- (id)initWithMainWindowViewModel:(id)arg1 window:(id)arg2;

@end

