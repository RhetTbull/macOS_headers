//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSTextField;

@interface TMAAboutPanelController : NSWindowController
{
    NSTextField *_appVersionField;
    NSTextField *_copyrightField;
    NSTextField *_applicationNameField;
}

+ (id)sharedController;
@property(nonatomic) NSTextField *applicationNameField; // @synthesize applicationNameField=_applicationNameField;
@property(nonatomic) NSTextField *copyrightField; // @synthesize copyrightField=_copyrightField;
@property(nonatomic) NSTextField *appVersionField; // @synthesize appVersionField=_appVersionField;
- (void)openFileWithName:(id)arg1;
- (void)showLicenseAgreement:(id)arg1;
- (void)showAcknowledgements:(id)arg1;
- (void)show;
- (void)windowDidLoad;
- (id)windowNibName;

@end

