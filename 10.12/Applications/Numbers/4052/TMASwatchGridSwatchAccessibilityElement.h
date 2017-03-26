//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSAccessibilityElement.h>

#import "NSAccessibilityButton-Protocol.h"

@class NSString, TMASwatchGridSwatchLayerAccessibility, TMASwatchGridViewAccessibility;

@interface TMASwatchGridSwatchAccessibilityElement : NSAccessibilityElement <NSAccessibilityButton>
{
    TMASwatchGridSwatchLayerAccessibility *_swatchLayer;
    id _parentElement;
}

@property(readonly, nonatomic) id parentElement; // @synthesize parentElement=_parentElement;
@property(retain, nonatomic) TMASwatchGridSwatchLayerAccessibility *swatchLayer; // @synthesize swatchLayer=_swatchLayer;
- (void)dealloc;
@property(readonly, nonatomic) TMASwatchGridViewAccessibility *_parentGrid;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityLabel;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityParent;
- (BOOL)isAccessibilityEnabled;
@property(readonly, nonatomic) BOOL isSelected;
- (id)initWithAccessibilityParent:(id)arg1 swatchLayer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

