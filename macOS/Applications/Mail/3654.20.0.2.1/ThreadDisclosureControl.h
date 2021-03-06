//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSControl.h>

@class NSImage, NSImageView, NSStackView, NSTextField;

@interface ThreadDisclosureControl : NSControl
{
    BOOL _open;
    BOOL _countHidden;
    long long _count;
    NSTextField *_countLabel;
    NSImageView *_disclosureImageView;
    NSStackView *_stackView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) NSImageView *disclosureImageView; // @synthesize disclosureImageView=_disclosureImageView;
@property(retain, nonatomic) NSTextField *countLabel; // @synthesize countLabel=_countLabel;
@property(nonatomic, getter=isCountHidden) BOOL countHidden; // @synthesize countHidden=_countHidden;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic, getter=isOpen) BOOL open; // @synthesize open=_open;
@property(readonly, nonatomic) NSImage *openThreadImage;
@property(readonly, nonatomic) NSImage *closedThreadImage;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (id)accessibilityValue;
- (BOOL)isAccessibilitySelectorAllowed:(SEL)arg1;
- (BOOL)isAccessibilityElement;
- (id)hitTest:(struct CGPoint)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (void)_commonInit;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

