//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSTextField;

@interface SetupCodeWindowController : NSWindowController
{
    BOOL _isRetry;
    CDUnknownBlockType _okBlock;
    CDUnknownBlockType _cancelBlock;
    NSTextField *_promptLabel;
    NSTextField *_segmentOneTextField;
    NSTextField *_segmentTwoTextField;
    NSTextField *_segmentThreeTextField;
    NSButton *_OKButton;
    NSButton *_cancelButton;
}

@property NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property NSButton *OKButton; // @synthesize OKButton=_OKButton;
@property NSTextField *segmentThreeTextField; // @synthesize segmentThreeTextField=_segmentThreeTextField;
@property NSTextField *segmentTwoTextField; // @synthesize segmentTwoTextField=_segmentTwoTextField;
@property NSTextField *segmentOneTextField; // @synthesize segmentOneTextField=_segmentOneTextField;
@property NSTextField *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(copy) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy) CDUnknownBlockType okBlock; // @synthesize okBlock=_okBlock;
@property BOOL isRetry; // @synthesize isRetry=_isRetry;
- (void)updateOKButton;
- (id)formatString:(id)arg1 thatShouldHaveMaxLength:(long long)arg2;
- (void)segmentThreeDidChange;
- (void)segmentTwoDidChange;
- (void)segmentOneDidChange;
- (void)dealloc;
- (void)cancelButtonWasPressed:(id)arg1;
- (void)okButtonWasPressed:(id)arg1;
- (void)windowDidLoad;
- (id)initWithWindow:(id)arg1;

@end

