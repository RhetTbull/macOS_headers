//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXSelectedItemsSnapshot.h"

@interface _PXBrowserSummarySelectedItemsSnapshot : NSObject <PXSelectedItemsSnapshot>
{
    id <PXBrowserSelectionSnapshot> _browserSelectionSnapshot;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <PXBrowserSelectionSnapshot> browserSelectionSnapshot; // @synthesize browserSelectionSnapshot=_browserSelectionSnapshot;
- (id)itemForItemReference:(id)arg1;
- (id)containsItemReference:(id)arg1;
- (id)itemReferenceAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long count;
- (id)initWithBrowserSelectionSnapshot:(id)arg1;
- (id)init;

@end

