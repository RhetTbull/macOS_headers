//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXView.h"

@class NSImage, NSLayoutConstraint, NSMutableArray, NSString, NSView, UXImageView, UXLabel;

@interface KHUXProductFamilyView : UXView
{
    UXView *_masterContainer;
    UXView *_detailContainer;
    BOOL _selected;
    BOOL _compactMode;
    NSString *_prompt;
    NSImage *_image;
    NSString *_detailText;
    NSView *_buttonContainer;
    UXLabel *_textLabel;
    UXLabel *_detailTextLabel;
    UXLabel *_promptTextLabel;
    UXImageView *_imageView;
    NSMutableArray *_addedConstraints;
    NSMutableArray *_masterConstraints;
    NSLayoutConstraint *_detailHeightConstraint;
    struct CGSize _lastSize;
}

+ (BOOL)requiresConstraintBasedLayout;
+ (id)whiteGradientColors;
+ (id)defaultGradientColors;
@property(nonatomic) struct CGSize lastSize; // @synthesize lastSize=_lastSize;
@property(readonly, nonatomic) NSLayoutConstraint *detailHeightConstraint; // @synthesize detailHeightConstraint=_detailHeightConstraint;
@property(readonly, nonatomic) NSMutableArray *masterConstraints; // @synthesize masterConstraints=_masterConstraints;
@property(readonly, nonatomic) NSMutableArray *addedConstraints; // @synthesize addedConstraints=_addedConstraints;
@property(readonly, nonatomic) UXImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UXLabel *promptTextLabel; // @synthesize promptTextLabel=_promptTextLabel;
@property(readonly, nonatomic) UXLabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(readonly, nonatomic) UXLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) BOOL compactMode; // @synthesize compactMode=_compactMode;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSView *buttonContainer; // @synthesize buttonContainer=_buttonContainer;
@property(retain, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
- (void).cxx_destruct;
- (void)updateConstraints;
- (BOOL)isFlipped;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) BOOL rightToLeft;
- (void)_adjustTitleFontSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

