//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "__TMAGraphicInspectorPaneControllerAccessibility_super.h"

@class NSButton, NSString, TMAGraphicInspectorPaneViewAccessibility;

@interface TMAGraphicInspectorPaneControllerAccessibility : __TMAGraphicInspectorPaneControllerAccessibility_super
{
}

+ (Class)tsaxBaseSafeCategoryClass;
+ (id)tsaxTargetClassName;
@property(readonly, nonatomic) NSString *_tsaxPresetButtonDescription;
@property(readonly, nonatomic) TMAGraphicInspectorPaneViewAccessibility *_tsaxView;
@property(readonly, nonatomic) NSButton *_tsaxPresetButton;
@property(readonly, nonatomic) NSString *_tsaxModelValueKeyPath;
@property(readonly, nonatomic) id _tsaxCurrentModelValue;
- (void)_tsaxSetupPresetButton;
- (void)tsaxLoadAccessibilityInformation;
- (void)p_modelValueDidChange:(id)arg1;
- (void)loadView;

@end

