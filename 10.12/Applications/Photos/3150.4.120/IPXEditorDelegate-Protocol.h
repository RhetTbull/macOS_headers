//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IPXEditorController, NSArray;

@protocol IPXEditorDelegate <NSObject>
- (void)editor:(IPXEditorController *)arg1 didChangeSelection:(NSArray *)arg2;
- (void)editor:(IPXEditorController *)arg1 didChangeEditMode:(BOOL)arg2;
@end

