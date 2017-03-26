//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TMASwatchGridView;

@protocol TMASwatchGridViewDelegate <NSObject>

@optional
- (void)gridView:(TMASwatchGridView *)arg1 didBeginDrag:(id)arg2;
- (void)gridView:(TMASwatchGridView *)arg1 didEndDrag:(id)arg2;
- (BOOL)gridView:(TMASwatchGridView *)arg1 didReplaceSwatchAtIndex:(unsigned long long)arg2 withSwatchAtIndex:(unsigned long long)arg3 operation:(unsigned long long)arg4;
- (void)gridView:(TMASwatchGridView *)arg1 dragSwatchAcrossPage:(int)arg2;
- (void)gridView:(TMASwatchGridView *)arg1 didDeleteSwatch:(id)arg2;
- (void)gridView:(TMASwatchGridView *)arg1 didDragSwatch:(id)arg2 atIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4 operation:(unsigned long long)arg5;
- (BOOL)gridView:(TMASwatchGridView *)arg1 canDragSwatch:(id)arg2;
- (void)gridView:(TMASwatchGridView *)arg1 mouseExitedSwatch:(id)arg2;
- (void)gridView:(TMASwatchGridView *)arg1 mouseEnteredSwatch:(id)arg2;
@end

