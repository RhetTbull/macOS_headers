//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAFirstLaunchBaseViewController.h"

@class NSBox, NSImageView, NSTextField, TSKMacURLLinkedTextField;

@interface TMAFirstLaunchWelcomeViewController : TMAFirstLaunchBaseViewController
{
    NSImageView *_backgroundImageView;
    NSTextField *_subtitleTextField;
    NSBox *_horizontalLine;
    TSKMacURLLinkedTextField *_licenseTextField;
}

@property(nonatomic) TSKMacURLLinkedTextField *licenseTextField; // @synthesize licenseTextField=_licenseTextField;
@property(nonatomic) NSBox *horizontalLine; // @synthesize horizontalLine=_horizontalLine;
@property(nonatomic) NSTextField *subtitleTextField; // @synthesize subtitleTextField=_subtitleTextField;
@property(nonatomic) NSImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void)setLicenseTextHidden:(BOOL)arg1;
- (id)licenseAttributedString;
- (void)loadView;
- (id)init;

@end

