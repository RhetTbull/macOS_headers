//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "__TNMacDocumentWindowControllerAccessibility_super.h"

#import "TMADocumentWindowControllerAccessibilityLayoutDescriptor-Protocol.h"

@class NSString;

@interface TNMacDocumentWindowControllerAccessibility : __TNMacDocumentWindowControllerAccessibility_super <TMADocumentWindowControllerAccessibilityLayoutDescriptor>
{
}

+ (Class)tsaxBaseSafeCategoryClass;
+ (id)tsaxTargetClassName;
- (void)tsaxLoadAccessibilityInformation;
- (id)tsaxPressActionExecutionDescriptionForToolbarItemWithIdentifier:(id)arg1;
@property(readonly, nonatomic) BOOL tsaxIsFormatInspectorVisible;
- (BOOL)_tsaxInspectorPaneViewWithModeIsVisible:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

