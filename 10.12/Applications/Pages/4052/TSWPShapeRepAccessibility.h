//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "__TSWPShapeRepAccessibility_super.h"

@class NSString, TSWPRepAccessibility, TSWPShapeInfoAccessibility;

@interface TSWPShapeRepAccessibility : __TSWPShapeRepAccessibility_super
{
}

+ (Class)tsaxBaseSafeCategoryClass;
+ (id)tsaxTargetClassName;
- (id)tsaxSummaryDescription;
- (void)willBeginEditingContainedRep;
- (BOOL)tsaxCanBeginEditingChildRepOnDoubleTap:(id)arg1;
@property(readonly, nonatomic) BOOL tsaxIsEditingChildRep;
@property(readonly, nonatomic) TSWPRepAccessibility *tsaxContainedRep;
@property(readonly, nonatomic) TSWPShapeInfoAccessibility *tsaxInfo;
@property(readonly, nonatomic) NSString *tsaxLabel;
@property(readonly, nonatomic) BOOL tsaxIsTextboxRep;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;

@end

