//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol ABPrintingDelegate;

@interface ABLabelModel : NSObject
{
    NSMutableArray *_addressList;
    NSMutableArray *_peopleList;
    NSMutableArray *_distributionIdentifierList;
    NSMutableArray *_mergedLabels;
    BOOL _isEmpty;
    BOOL _recordCustomLabels;
    NSMutableArray *_customLabelNames;
    BOOL _disableMergedLabels;
    id <ABPrintingDelegate> _printingDelegate;
}

+ (id)relatedNamesConfig;
+ (id)relatableLabels;
- (id)distributionIdentifierForAddressPropertyInGroup:(id)arg1 person:(id)arg2;
- (id)customLabelNames;
- (long long)maxPagesWithDescription:(id)arg1;
- (long long)numberOfLabels;
- (id)labelsForPage:(long long)arg1 withDescription:(id)arg2;
- (void)removeAllLabels;
- (id)allLabels;
- (void)resortBy:(int)arg1;
- (BOOL)isEmpty;
- (void)loadWithLabels:(id)arg1 sorting:(int)arg2 mergeRelated:(BOOL)arg3;
- (void)loadUsingDistributionsGroupsSorting:(int)arg1 mergeRelated:(BOOL)arg2;
- (id)addressesFromPeople:(id)arg1 distributionGroup:(id)arg2;
- (id)newLabelInfoFromPostalAddress:(id)arg1;
- (id)addressesForPerson:(id)arg1 withLabels:(id)arg2 mergeRelated:(BOOL)arg3;
- (BOOL)shouldFindRelationsForAddress:(id)arg1;
- (id)addressNameFromPerson:(id)arg1 specificAddress:(id)arg2;
- (id)relatedNameStringWithPerson:(id)arg1 address:(id)arg2;
- (BOOL)addressessMostlyMatch:(id)arg1 with:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)init;
- (void)finalize;
- (void)dealloc;

@end

