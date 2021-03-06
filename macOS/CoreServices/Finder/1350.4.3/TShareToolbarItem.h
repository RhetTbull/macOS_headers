//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TToolbarItem.h"

#import "NSMenuDelegate-Protocol.h"

@class NSSharingServicePicker, NSString;

@interface TShareToolbarItem : TToolbarItem <NSMenuDelegate>
{
    NSSharingServicePicker *_sharingServicePicker;
}

- (void).cxx_destruct;
- (void)validate;
- (void)setEnabled:(BOOL)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)dealloc;
- (id)initWithItemIdentifier:(id)arg1 entry:(const struct ToolbarItemInfo *)arg2 controller:(id)arg3 propertyList:(id)arg4 willBeInsertedIntoToolbar:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

