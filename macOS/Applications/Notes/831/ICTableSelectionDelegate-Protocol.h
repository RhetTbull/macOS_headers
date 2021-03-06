//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ICTableSelectionView, NSResponder;
@protocol ICAuxiliaryStyling;

@protocol ICTableSelectionDelegate <NSObject>
@property(readonly, nonatomic) __weak id <ICAuxiliaryStyling> auxiliaryStylingController;
- (BOOL)acceptsKeystrokes;
- (void)pasteIntoSelection:(id)arg1;
- (void)copySelection:(id)arg1;
- (void)cutSelection:(id)arg1;
- (void)deleteSelection:(id)arg1;
- (void)selectionDidResignFirstResponder:(struct NSResponder *)arg1;
- (void)selectionWillBecomeFirstResponder:(struct NSResponder *)arg1;

@optional
- (void)addRowBelow:(id)arg1;
- (void)addRowAbove:(id)arg1;
- (void)addColumnToRight:(id)arg1;
- (void)addColumnToLeft:(id)arg1;
- (NSResponder *)beginEditingForSelectionView:(ICTableSelectionView *)arg1;
@end

