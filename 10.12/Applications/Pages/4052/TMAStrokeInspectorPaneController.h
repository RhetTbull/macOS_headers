//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAGraphicDetailInspectorPaneController.h"

#import "NSMenuDelegate-Protocol.h"

@class NSPopUpButton, NSString;

@interface TMAStrokeInspectorPaneController : TMAGraphicDetailInspectorPaneController <NSMenuDelegate>
{
    NSPopUpButton *_strokeMenu;
    BOOL _shouldHideFrameOptions;
    BOOL _shouldLabelStrokesAsBorders;
    BOOL _limitedToPlainStrokes;
}

+ (id)nibName;
@property(nonatomic) BOOL limitedToPlainStrokes; // @synthesize limitedToPlainStrokes=_limitedToPlainStrokes;
@property(nonatomic) BOOL shouldLabelStrokesAsBorders; // @synthesize shouldLabelStrokesAsBorders=_shouldLabelStrokesAsBorders;
@property(nonatomic) BOOL shouldHideFrameOptions; // @synthesize shouldHideFrameOptions=_shouldHideFrameOptions;
@property NSPopUpButton *strokeMenu; // @synthesize strokeMenu=_strokeMenu;
- (id)localizedMultipleSelectionPlaceholderString;
- (void)updateStrokeOptions;
- (long long)disclosureStateForValue:(id)arg1;
- (id)transformedValue:(id)arg1 forDisclosureState:(long long)arg2;
- (id)defaultValueForDisclosureState:(long long)arg1;
- (id)inspectorPropertyKeyForDisclosureState:(long long)arg1;
- (id)newContentViewControllerOfClass:(Class)arg1 forDisclosureState:(long long)arg2;
- (Class)contentViewControllerClassForDisclosureState:(long long)arg1;
- (void)p_updateDisclosureMenu;
- (void)menuWillOpen:(id)arg1;
- (void)loadView;
- (void)setDynamicToolTip:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

