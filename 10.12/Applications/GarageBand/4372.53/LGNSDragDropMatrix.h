//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MAToolKit/MAKitMatrix.h>

@interface LGNSDragDropMatrix : MAKitMatrix
{
}

- (struct CGSize)cellSize;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (id)imageForCell:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)extendSelectionCellAtRow:(long long)arg1 column:(long long)arg2;
- (void)swipeWithEvent:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;

@end

