//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXCropViewAccessibilityElement.h"

@class IPXCropViewLayoutAreaAccessibility, NSArray;

@interface IPXCropViewLayoutItemAccessibility : IPXCropViewAccessibilityElement
{
    NSArray *_accessibilityHandles;
}

- (void)setAccessibilityHandles:(id)arg1;
- (void).cxx_destruct;
- (id)accessibilityHandles;
- (id)accessibilityChildren;
- (id)accessibilityLabel;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
@property(readonly, nonatomic) __weak IPXCropViewLayoutAreaAccessibility *accessibilityContainerLayoutArea;

@end

