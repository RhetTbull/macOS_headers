//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImage, NSImageView, NSString, NSTextField;

@interface TMANullInspectorView : NSView
{
    NSImageView *_imageView;
    NSTextField *_headingField;
    NSTextField *_descriptionField;
}

- (void)p_configureConstraints;
- (void)p_configureSubviews;
- (void)p_configureTextField:(id)arg1 makeBold:(BOOL)arg2;
- (BOOL)tma_inspectorPaneHeightIsFlexible;
@property(retain, nonatomic) NSImage *iconImage;
@property(copy, nonatomic) NSString *descriptionText;
@property(copy, nonatomic) NSString *headingText;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)p_commonInit;
- (void)dealloc;

@end

