//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface TSTMacTableChromeArrowLayer : CALayer
{
    CALayer *pressed;
    CALayer *unpressed;
}

@property(retain, nonatomic) CALayer *unpressed; // @synthesize unpressed;
@property(retain, nonatomic) CALayer *pressed; // @synthesize pressed;
- (id)hitTest:(struct CGPoint)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setPressedState:(BOOL)arg1;
- (void)dealloc;
- (id)initWithPressed:(id)arg1 unpressed:(id)arg2;

@end

