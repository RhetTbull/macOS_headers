//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@class NSMutableArray;

@interface DictionaryRecordArray : NSArray
{
    struct __CFArray *_originalArray;
    NSMutableArray *_objShadowOwner;
}

- (id)_shadowArray;
- (struct __CFArray *)_originalArray;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (void)addRecordsFromRecordArray:(id)arg1;
- (id)initWithNSArray:(id)arg1;
- (id)initWithCFArray:(struct __CFArray *)arg1;

@end

