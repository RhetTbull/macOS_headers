//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSMenuItem.h>

@class NSImage, NSString;

@interface JRNSMenuItem : NSMenuItem
{
    NSImage *_selectedImage;
    NSImage *_unselectedImage;
}

@property(retain, nonatomic) NSImage *unselectedImage; // @synthesize unselectedImage=_unselectedImage;
@property(retain, nonatomic) NSImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(readonly, nonatomic) NSString *humanReadableTitle;
- (void)dealloc;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;

@end

