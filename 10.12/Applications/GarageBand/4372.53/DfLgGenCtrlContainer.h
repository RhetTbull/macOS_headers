//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface DfLgGenCtrlContainer : NSObject
{
    NSMutableArray *m_itemsArray;
}

- (void)removeAllItems;
- (void)getGenCtrl:(CDStruct_5115be14 *)arg1 atIndex:(unsigned int)arg2;
- (void)addItem:(CDStruct_5115be14)arg1;
- (unsigned int)count;
- (void)dealloc;
- (id)init;

@end

