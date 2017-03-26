//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "__BKIMCollectionViewAccessibility_super.h"

#import "BKBookshelfCollectionViewCellAccessibilityDelegate-Protocol.h"

@class NSString;
@protocol BKIMCollectionViewAccessibilityDelegate;

@interface BKIMCollectionViewAccessibility : __BKIMCollectionViewAccessibility_super <BKBookshelfCollectionViewCellAccessibilityDelegate>
{
}

+ (Class)bkaxBaseSafeCategoryClass;
+ (id)bkaxTargetClassName;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)bkaxScrollCellToVisible:(id)arg1;
- (BOOL)bkaxDrawerIsOpenForCell:(id)arg1;
- (void)bkaxSelectCell:(id)arg1;
- (BOOL)bkaxCellIsSelected:(id)arg1;
- (void)bkaxPressActionForCell:(id)arg1;
- (id)bkaxSelectedCell;
- (id)bkaxCellForItemAtIndexPath:(id)arg1;
- (void)bkaxLoadAccessibilityInformation;
- (id)dequeueResuableCellWithIdentifier:(id)arg1 owner:(id)arg2;
@property(readonly, nonatomic) id <BKIMCollectionViewAccessibilityDelegate> bkaxDelegate;
@property(nonatomic, setter=bkaxSetIsInDrawer:) BOOL bkaxIsInDrawer;
@property(copy, nonatomic, setter=bkaxSetOverrideDescription:) NSString *bkaxOverrideDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

