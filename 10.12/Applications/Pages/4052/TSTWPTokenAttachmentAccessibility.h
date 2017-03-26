//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "__TSTWPTokenAttachmentAccessibility_super.h"

@class NSArray, NSString, TSTTableRepAccessibility;

@interface TSTWPTokenAttachmentAccessibility : __TSTWPTokenAttachmentAccessibility_super
{
}

+ (Class)tsaxBaseSafeCategoryClass;
+ (id)tsaxTargetClassName;
@property(readonly, nonatomic) struct CGRect tsaxMenuFrame;
@property(readonly, nonatomic) BOOL tsaxHasMenu;
@property(readonly, nonatomic) NSArray *tsaxReferencedCells;
@property(readonly, nonatomic) NSString *tsaxLabel;
@property(readonly, nonatomic) NSString *tsaxRoleDescription;
@property(readonly, nonatomic) NSString *tsaxFormulaPlainText;
@property(readonly, nonatomic) TSTTableRepAccessibility *_tsaxTableRep;
@property(readonly, nonatomic) id _tsaxReferenceNode;
@property(readonly, nonatomic) id _tsaxExpressionNode;
@property(nonatomic, setter=tsaxSetMovingReferenceToken:) BOOL tsaxIsMovingReferenceToken;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;

@end

