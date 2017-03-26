//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "GHRasterizable-Protocol.h"

@class GHLabel, GHStretchableImage, NSColor, NSImage, NSImageView, NSShadow, NSString;

@interface GHCustomButton : NSView <GHRasterizable>
{
    BOOL selected;
    BOOL tracking;
    BOOL on;
    int imagePlacement;
    int behavior;
    id target;
    SEL action;
    GHStretchableImage *backgroundImage;
    GHStretchableImage *selectedBackgroundImage;
    GHLabel *label;
    NSImage *image;
    NSImage *selectedImage;
    CDUnknownBlockType actionBlock;
    NSImageView *imageView;
    GHStretchableImage *onBackgroundImage;
    NSImage *onImage;
    NSString *title;
    NSString *selectedTitle;
    NSString *onTitle;
    NSColor *titleColor;
    NSColor *selectedTitleColor;
    NSColor *onTitleColor;
    NSShadow *titleShadow;
    NSShadow *selectedTitleShadow;
    NSShadow *onTitleShadow;
    struct CGPoint imagePadding;
}

@property(retain, nonatomic) NSShadow *onTitleShadow; // @synthesize onTitleShadow;
@property(retain, nonatomic) NSShadow *selectedTitleShadow; // @synthesize selectedTitleShadow;
@property(retain, nonatomic) NSShadow *titleShadow; // @synthesize titleShadow;
@property(retain, nonatomic) NSColor *onTitleColor; // @synthesize onTitleColor;
@property(retain, nonatomic) NSColor *selectedTitleColor; // @synthesize selectedTitleColor;
@property(retain, nonatomic) NSColor *titleColor; // @synthesize titleColor;
@property(copy, nonatomic) NSString *onTitle; // @synthesize onTitle;
@property(copy, nonatomic) NSString *selectedTitle; // @synthesize selectedTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSImage *onImage; // @synthesize onImage;
@property(retain, nonatomic) GHStretchableImage *onBackgroundImage; // @synthesize onBackgroundImage;
@property(nonatomic, getter=isOn) BOOL on; // @synthesize on;
@property(nonatomic) BOOL tracking; // @synthesize tracking;
@property(nonatomic) int behavior; // @synthesize behavior;
@property(retain, nonatomic) NSImageView *imageView; // @synthesize imageView;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock;
@property(nonatomic) struct CGPoint imagePadding; // @synthesize imagePadding;
@property(nonatomic) int imagePlacement; // @synthesize imagePlacement;
@property(retain, nonatomic) NSImage *selectedImage; // @synthesize selectedImage;
@property(retain, nonatomic) NSImage *image; // @synthesize image;
@property(retain, nonatomic) GHLabel *label; // @synthesize label;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected;
@property(retain, nonatomic) GHStretchableImage *selectedBackgroundImage; // @synthesize selectedBackgroundImage;
@property(retain, nonatomic) GHStretchableImage *backgroundImage; // @synthesize backgroundImage;
@property(nonatomic) SEL action; // @synthesize action;
@property(nonatomic) __weak id target; // @synthesize target;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *name;
- (id)titleShadowForState:(int)arg1;
- (id)titleColorForState:(int)arg1;
- (id)titleForState:(int)arg1;
- (id)imageForState:(int)arg1;
- (id)backgroundImageForState:(int)arg1;
- (void)setTitleShadow:(id)arg1 forState:(int)arg2;
- (void)setTitleColor:(id)arg1 forState:(int)arg2;
- (void)setTitle:(id)arg1 forState:(int)arg2;
- (void)setImage:(id)arg1 forState:(int)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(int)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)currentTitleShadow;
- (id)currentTitleColor;
- (id)currentTitle;
- (id)currentImage;
- (id)currentBackgroundImage;
- (int)currentState;
- (void)setupState;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

