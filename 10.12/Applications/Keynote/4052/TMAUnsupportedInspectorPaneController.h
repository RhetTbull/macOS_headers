//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAInspectorPaneController.h"

@class NSImageView, NSString, NSTextField, TMAPointingHandCursorButton;

@interface TMAUnsupportedInspectorPaneController : TMAInspectorPaneController
{
    NSString *_learnMoreURLString;
    NSImageView *_image;
    NSTextField *_text;
    TMAPointingHandCursorButton *_learnMoreButton;
}

+ (id)nibName;
@property(nonatomic) TMAPointingHandCursorButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(nonatomic) NSTextField *text; // @synthesize text=_text;
@property(nonatomic) NSImageView *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *learnMoreURLString; // @synthesize learnMoreURLString=_learnMoreURLString;
- (void)learnMore:(id)arg1;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)dealloc;

@end

