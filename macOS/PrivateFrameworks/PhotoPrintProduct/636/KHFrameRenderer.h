//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KHFrame;

@interface KHFrameRenderer : NSObject
{
    KHFrame *_frame;
    BOOL _isResizing;
}

- (void)dealloc;
- (void)clearCache;
- (void)loadAttributes;
- (void)fillContext:(struct CGContext *)arg1 environment:(id)arg2 scale:(double)arg3;
- (void)setIsResizing:(BOOL)arg1;
- (BOOL)isResizing;
- (void)setFrame:(id)arg1;
- (id)frame;
- (id)initForFrame:(id)arg1;

@end

