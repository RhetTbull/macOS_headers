//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSString, NSTextField, _TtC14coconutBattery29ExistingLicenseViewController;

@interface coconutBattery.LicenseWindowController : NSWindowController
{
    // Error parsing type: , name: trialLabelText
    // Error parsing type: , name: existingLicenseViewController
    // Error parsing type: , name: buyButton
    // Error parsing type: , name: trialDaysLeftTextField
    // Error parsing type: , name: trialUpTextField
    // Error parsing type: , name: purchasingEventHandler
}

+ (id)NibName;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (void)displayBought;
- (void)displayTrialUp;
- (void)displayWithTrialDaysLeft:(long long)arg1;
- (void)buy:(id)arg1;
@property(nonatomic, retain) NSTextField *trialUpTextField; // @synthesize trialUpTextField;
@property(nonatomic, retain) NSTextField *trialDaysLeftTextField; // @synthesize trialDaysLeftTextField;
@property(nonatomic, retain) NSButton *buyButton; // @synthesize buyButton;
@property(nonatomic, retain) _TtC14coconutBattery29ExistingLicenseViewController *existingLicenseViewController; // @synthesize existingLicenseViewController;
- (void)awakeFromNib;
@property(nonatomic, copy) NSString *trialLabelText; // @synthesize trialLabelText;
- (id)init;

@end

