//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSSortDescriptor, NSString, PVMediaContainerBase;

@interface PVSearchResultGroup : NSObject
{
    PVMediaContainerBase *_container;
    NSMutableArray *_items;
    unsigned long long _sortOrder;
    NSSortDescriptor *_itemsSortDesc;
    double _maxRelevanceScore;
    NSArray *_pdfOutlineNodes;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain) NSArray *pdfOutlineNodes; // @synthesize pdfOutlineNodes=_pdfOutlineNodes;
@property double maxRelevanceScore; // @synthesize maxRelevanceScore=_maxRelevanceScore;
@property(retain, nonatomic) NSSortDescriptor *itemsSortDescriptor; // @synthesize itemsSortDescriptor=_itemsSortDesc;
@property(readonly) NSArray *items; // @synthesize items=_items;
@property(retain) PVMediaContainerBase *container; // @synthesize container=_container;
@property unsigned long long sortOrder; // @synthesize sortOrder=_sortOrder;
- (void).cxx_destruct;
- (void)removeItemsAtIndexes:(id)arg1;
- (unsigned long long)indexOfItem:(id)arg1 useSortOrder:(BOOL)arg2;
- (unsigned long long)addItem:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithContainer:(id)arg1;

@end

