//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUViewModelChange.h>

@interface PUToolbarViewModelChange : PUViewModelChange
{
    BOOL _toolbarItemsChanged;
    BOOL _accessoryViewChanged;
    BOOL _accessoryViewTopOutsetChanged;
    BOOL _accessoryViewMaximumHeightChanged;
    BOOL _maximumHeightChanged;
}

@property(nonatomic, setter=_setMaximumHeightChanged:) BOOL maximumHeightChanged; // @synthesize maximumHeightChanged=_maximumHeightChanged;
@property(nonatomic, setter=_setAccessoryViewMaximumHeightChanged:) BOOL accessoryViewMaximumHeightChanged; // @synthesize accessoryViewMaximumHeightChanged=_accessoryViewMaximumHeightChanged;
@property(nonatomic, setter=_setAccessoryViewTopOutsetChanged:) BOOL accessoryViewTopOutsetChanged; // @synthesize accessoryViewTopOutsetChanged=_accessoryViewTopOutsetChanged;
@property(nonatomic, setter=_setAccessoryViewChanged:) BOOL accessoryViewChanged; // @synthesize accessoryViewChanged=_accessoryViewChanged;
@property(nonatomic, setter=_setToolbarItemsChanged:) BOOL toolbarItemsChanged; // @synthesize toolbarItemsChanged=_toolbarItemsChanged;
- (BOOL)hasChanges;

@end

