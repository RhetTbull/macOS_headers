//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDPathPainter-Protocol.h"

@class NSString, TSDShadow;

@interface TSDShadowSwatch : NSObject <TSDPathPainter>
{
    TSDShadow *mShadow;
    struct CGImage *mShadowSwatchImage;
}

@property(readonly, nonatomic) TSDShadow *shadow; // @synthesize shadow=mShadow;
- (void)p_drawCurvedShadowInContext:(struct CGContext *)arg1 inRect:(struct CGRect)arg2 forShadow:(id)arg3 forImage:(struct CGImage *)arg4 forSwatchRect:(struct CGRect)arg5;
- (void)p_drawContactShadowInContext:(struct CGContext *)arg1 inRect:(struct CGRect)arg2 forShadow:(id)arg3 forImage:(struct CGImage *)arg4 forSwatchRect:(struct CGRect)arg5;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 forImage:(struct CGImage *)arg3 swatchRect:(struct CGRect)arg4 wantsStroke:(BOOL)arg5;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithShadow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

