//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface IPXPlaybackButton : NSView
{
    id _target;
    SEL _action;
    BOOL _isPlaying;
}

@property(nonatomic) BOOL isPlaying; // @synthesize isPlaying=_isPlaying;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseDown:(id)arg1;
- (void)setIsPlaying:(BOOL)arg1 notify:(BOOL)arg2;
- (void)setTarget:(id)arg1 action:(SEL)arg2;

@end

