//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "__TNPageRepAccessibility_super.h"

@class NSString, TNPageContentRepAccessibility, TNPageControllerAccessibility;

@interface TNPageRepAccessibility : __TNPageRepAccessibility_super
{
}

+ (Class)tsaxBaseSafeCategoryClass;
+ (id)tsaxTargetClassName;
- (id)_tsaxMarginDescriptionWithFormatter:(id)arg1 value:(double)arg2;
- (void)tsaxUpdatePartitionedPartialReps;
- (BOOL)tsaxSpeakPageContentsSummary;
@property(readonly, nonatomic) BOOL tsaxContainsClippedElements;
@property(readonly, nonatomic) NSString *tsaxPageOrientationDescription;
@property(readonly, nonatomic) NSString *tsaxPageSizeDescription;
@property(readonly, nonatomic) NSString *tsaxMarginsDescription;
@property(readonly, nonatomic) TNPageControllerAccessibility *tsaxPageController;
@property(readonly, nonatomic) unsigned long long tsaxNumPages;
@property(readonly, nonatomic) unsigned long long tsaxPageNumber;
@property(readonly, nonatomic) TNPageContentRepAccessibility *tsaxPageContentRep;
@property(retain, nonatomic, setter=_tsaxSetCachedPageContentRep:) TNPageContentRepAccessibility *_tsaxCachedPageContentRep;

@end

