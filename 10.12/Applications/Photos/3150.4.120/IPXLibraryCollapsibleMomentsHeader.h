//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXPhotosBrowserMomentsHeader.h"

@class NSButton;

@interface IPXLibraryCollapsibleMomentsHeader : IPXPhotosBrowserMomentsHeader
{
    NSButton *_momentDisclosureButton;
    BOOL _isMomentExpanded;
    BOOL _isMomentDisclosureButtonVisible;
}

@property BOOL isMomentDisclosureButtonVisible; // @synthesize isMomentDisclosureButtonVisible=_isMomentDisclosureButtonVisible;
@property BOOL isMomentExpanded; // @synthesize isMomentExpanded=_isMomentExpanded;
- (void).cxx_destruct;
- (BOOL)isAccessibilityAlternateUIVisible;
- (BOOL)accessibilityPerformShowDefaultUI;
- (BOOL)accessibilityPerformShowAlternateUI;
- (void)sendTransientUIChangedNotification:(BOOL)arg1;
- (void)_configureButtonForShow:(id)arg1 expand:(BOOL)arg2 count:(unsigned long long)arg3;
- (void)didAssignMediaSection:(id)arg1 expandedCount:(unsigned long long)arg2 collapsedCount:(unsigned long long)arg3;
- (void)momentDisclosureToggleAction:(id)arg1;
- (id)firstTrailingView;
- (void)layout;
- (void)hideHiddenViews;
- (void)showHiddenViews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

