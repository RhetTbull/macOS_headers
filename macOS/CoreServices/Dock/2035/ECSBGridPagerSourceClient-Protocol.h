//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol ECSBGridPagerSourceClient <NSObject>
- (void)setGridValue:(id)arg1 forKey:(NSString *)arg2 atIndex:(unsigned long long)arg3 forPageAtIndex:(unsigned long long)arg4;
- (void)gridDataSourceInvalidatedAtRange:(struct _NSRange)arg1 forPageAtIndex:(unsigned long long)arg2;
- (void)gridDataSourceInvalidatedForPageAtIndex:(unsigned long long)arg1;
@end

