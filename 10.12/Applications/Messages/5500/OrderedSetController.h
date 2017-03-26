//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet, NSOrderedSet, NSSet, _NotificationObserver;
@protocol OrderedSetControllerDelegate;

@interface OrderedSetController : NSObject
{
    BOOL _avoidsEmptySelection;
    BOOL _loopsSelection;
    BOOL _userEditable;
    int _delegateFlags;
    id <OrderedSetControllerDelegate> _delegate;
    CDUnknownBlockType _comparatorBlock;
    CDUnknownBlockType _filterBlock;
    id _selectedObject;
    NSMutableOrderedSet *_mutableContents;
    _NotificationObserver *_resortNotificationObserver;
    NSMutableOrderedSet *_mutableFilteredContents;
    _NotificationObserver *_refilterNotificationObserver;
}

@property(readonly, retain, nonatomic) _NotificationObserver *refilterNotificationObserver; // @synthesize refilterNotificationObserver=_refilterNotificationObserver;
@property(retain, nonatomic) NSMutableOrderedSet *mutableFilteredContents; // @synthesize mutableFilteredContents=_mutableFilteredContents;
@property(readonly, retain, nonatomic) _NotificationObserver *resortNotificationObserver; // @synthesize resortNotificationObserver=_resortNotificationObserver;
@property(retain, nonatomic) NSMutableOrderedSet *mutableContents; // @synthesize mutableContents=_mutableContents;
@property(nonatomic) int delegateFlags; // @synthesize delegateFlags=_delegateFlags;
@property(readonly, nonatomic, getter=isUserEditable) BOOL userEditable; // @synthesize userEditable=_userEditable;
@property(nonatomic) BOOL loopsSelection; // @synthesize loopsSelection=_loopsSelection;
@property(nonatomic) BOOL avoidsEmptySelection; // @synthesize avoidsEmptySelection=_avoidsEmptySelection;
@property(retain, nonatomic) id selectedObject; // @synthesize selectedObject=_selectedObject;
@property(copy, nonatomic) CDUnknownBlockType filterBlock; // @synthesize filterBlock=_filterBlock;
@property(copy, nonatomic) CDUnknownBlockType comparatorBlock; // @synthesize comparatorBlock=_comparatorBlock;
@property(nonatomic) __weak id <OrderedSetControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)_unregisterObjectForNotifications:(id)arg1;
- (void)_registerObjectForNotifications:(id)arg1;
- (void)selectPrevious;
- (void)selectNext;
@property(readonly, nonatomic) BOOL canSelectPrevious;
@property(readonly, nonatomic) BOOL canSelectNext;
@property(nonatomic) unsigned long long selectionIndex; // @dynamic selectionIndex;
- (unsigned long long)_filteredIndexForContentIndex:(unsigned long long)arg1;
- (void)noteObjectsMayNeedRefiltering:(id)arg1;
- (void)noteObjectMayNeedRefiltering:(id)arg1;
@property(retain, nonatomic) NSSet *refilterNotifications; // @dynamic refilterNotifications;
- (void)_replaceObjectFromFilteredContentsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)_moveObjectFromFilteredContentsAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)_removeMutableFilteredContentsAtIndexes:(id)arg1;
- (void)_removeObjectFromMutableFilteredContentsAtIndex:(unsigned long long)arg1;
- (void)_insertMutableFilteredContents:(id)arg1 atIndexes:(id)arg2;
- (void)_insertObject:(id)arg1 inMutableFilteredContentsAtIndex:(unsigned long long)arg2;
- (void)_transformFilteredContentsInto:(id)arg1;
- (id)objectInFilteredContentsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long countOfFilteredContents;
@property(readonly, copy, nonatomic) NSOrderedSet *filteredContents;
- (unsigned long long)_adjustedSortedContentsIndex:(unsigned long long)arg1 forObject:(id)arg2;
- (struct _NSRange)sortedContentsIndexRangeForObject:(id)arg1;
- (void)noteObjectMayNeedResorting:(id)arg1;
- (void)sortContentsWithComparatorBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSSet *resortNotifications; // @dynamic resortNotifications;
- (void)replaceContentsObject:(id)arg1 withObject:(id)arg2;
- (void)removeSelectedObjects;
- (void)removeContentsObject:(id)arg1;
- (void)addContentsObject:(id)arg1;
- (void)replaceObjectFromContentsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)moveObjectFromContentsAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeObjectFromContentsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inContentsAtIndex:(unsigned long long)arg2;
- (id)objectInContentsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long countOfContents;
@property(copy, nonatomic) NSOrderedSet *contents; // @dynamic contents;
- (void)_notifyDelegateOfReplacementOfFilteredContents:(id)arg1 atIndexes:(id)arg2;
- (void)_notifyDelegateOfMoveOfFilteredContents:(id)arg1 atIndexes:(id)arg2 toFilteredContents:(id)arg3 atIndexes:(id)arg4;
- (void)_notifyDelegateOfRemovalOfFilteredContents:(id)arg1 atIndexes:(id)arg2;
- (void)_notifyDelegateOfInsertionOfFilteredContentsAtIndexes:(id)arg1;
- (void)_notifyDelegateOfSelectionChange;

@end

