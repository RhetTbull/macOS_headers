//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class FFBackgroundTask, LKProgressIndicator, LKTextField;

@interface PEBackgroundTaskProgress : NSWindowController
{
    LKTextField *_taskDescriptionField;
    LKProgressIndicator *_taskProgressIndicator;
    FFBackgroundTask *_backgroundTask;
}

@property(retain) FFBackgroundTask *backgroundTask; // @synthesize backgroundTask=_backgroundTask;
- (void)cancelManualRender:(id)arg1;
- (void)runModal;
- (void)close;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initWithTask:(id)arg1;

@end

