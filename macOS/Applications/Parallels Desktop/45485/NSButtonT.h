//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@interface NSButtonT : NSButton
{
    SEL _downAction;
    SEL _upAction;
}

@property SEL upAction; // @synthesize upAction=_upAction;
@property SEL downAction; // @synthesize downAction=_downAction;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)touchesCancelledWithEvent:(id)arg1;
- (void)touchesBeganWithEvent:(id)arg1;

@end

