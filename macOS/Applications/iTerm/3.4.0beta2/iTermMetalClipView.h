//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSClipView.h"

@class MTKView;

@interface iTermMetalClipView : NSClipView
{
    BOOL _useMetal;
    MTKView *_metalView;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL useMetal; // @synthesize useMetal=_useMetal;
@property(nonatomic) __weak MTKView *metalView; // @synthesize metalView=_metalView;
- (void)scrollToPoint:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

