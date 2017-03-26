//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

@class NSObject, TSSStylesheet, TSUMutableRetainedPointerSet;
@protocol OS_dispatch_queue;

@interface TSSStylesheetPasteboardProxy : TSPObject
{
    TSSStylesheet *mStylesheet;
    TSUMutableRetainedPointerSet *mReferencedStyles;
    NSObject<OS_dispatch_queue> *mReferencedStylesQueue;
    BOOL mSelfArchiving;
}

- (void)saveToArchiver:(id)arg1;
- (void)addStyleReference:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 stylesheet:(id)arg2;

@end

