//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SectionController.h"

#import "GenericLayoutContrainerDelegate.h"

@class ExtraLayoutContainerActive, ExtraLayoutContainerAvailable, ExtraLayoutItem, ISMCheckbox, ISMPopUpButton, NSView;

@interface MemoryController : SectionController <GenericLayoutContrainerDelegate>
{
    ExtraLayoutContainerAvailable *layoutAvailable;
    ExtraLayoutContainerActive *layoutActive;
    NSView *generalContainer;
    NSView *displayFormatContainer;
    ISMCheckbox *showInactiveAsFree;
    ISMPopUpButton *displayFormat;
    ISMPopUpButton *appUsageFormat;
    ISMPopUpButton *_processCount;
    ExtraLayoutItem *_editingItem;
}

@property(retain, nonatomic) ExtraLayoutItem *editingItem; // @synthesize editingItem=_editingItem;
@property(retain, nonatomic) ISMPopUpButton *processCount; // @synthesize processCount=_processCount;
- (void).cxx_destruct;
- (void)updateOptions;
- (void)setupLayoutItems;
- (void)updateLayoutItems;
- (void)updateAvailableItems;
- (void)importedPreferences;
- (void)addPrefKey:(id)arg1 notificationKey:(id)arg2 toObject:(id)arg3 text:(BOOL)arg4 layout:(BOOL)arg5 selector:(SEL)arg6;
- (void)updateLayoutSelectors;
- (void)resetTextAttributes;
- (void)updateState;
- (void)layoutContainerUpdated:(id)arg1;
- (void)_highlightLayoutItem:(id)arg1 container:(id)arg2 override:(BOOL)arg3;
- (void)setMenubarSpacerWidth:(id)arg1;
- (void)toggleGraphType;
- (void)updateHistoryWidth;
- (void)setup;
- (void)setupIcon;
- (void)postNotificationWithKey:(id)arg1;
- (void)prepareDropdownOrderView;
- (id)hotkeyPreferenceKey;
- (id)stateNotificationKey;
- (id)sectionName;
- (id)bundleFile;
- (id)bundleName;

@end

