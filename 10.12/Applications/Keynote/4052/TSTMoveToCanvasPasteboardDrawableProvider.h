//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDPasteboardDrawableProvider-Protocol.h"

@class NSDictionary, TSDPasteboardDrawable, TSSStyleMapper;

@interface TSTMoveToCanvasPasteboardDrawableProvider : NSObject <TSDPasteboardDrawableProvider>
{
    TSDPasteboardDrawable *mPasteboardDrawable;
    TSSStyleMapper *mStyleMapper;
}

- (struct CGPoint)unscaledShiftToCenter:(id)arg1;
@property(readonly, nonatomic) NSDictionary *pasteboardDescription;
- (id)newDrawableWithObjectContext:(id)arg1 forceMatchStyle:(BOOL)arg2 bakeSize:(BOOL)arg3;
- (void)dealloc;
- (id)initWithPasteboardDrawable:(id)arg1 styleMapper:(id)arg2;

@end

