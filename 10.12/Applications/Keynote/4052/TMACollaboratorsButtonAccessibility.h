//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "__TMACollaboratorsButtonAccessibility_super.h"

#import "TSNSToolbarItemViewerAccessibilityAttributeProvider-Protocol.h"

@class NSString, TMADocumentWindowControllerAccessibility, TSKCollaborationStateAccessibility;

@interface TMACollaboratorsButtonAccessibility : __TMACollaboratorsButtonAccessibility_super <TSNSToolbarItemViewerAccessibilityAttributeProvider>
{
}

+ (Class)tsaxBaseSafeCategoryClass;
+ (id)tsaxTargetClassName;
@property(readonly, nonatomic) NSString *tsaxHelpForParentItemViewer;
@property(readonly, nonatomic) NSString *tsaxTitleForParentItemViewer;
- (id)_tsaxHintFromToolTip;
@property(readonly, nonatomic) TSKCollaborationStateAccessibility *_tsaxCollaborationState;
@property(readonly, nonatomic) unsigned long long tsaxCollaboratorCount;
@property(nonatomic, setter=tsaxSetParentDocumentWindowController:) TMADocumentWindowControllerAccessibility *tsaxParentDocumentWindowController;

@end

