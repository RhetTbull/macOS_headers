//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MAToolKit/MAKitView.h>

@class NSView;

@interface BinView : MAKitView
{
    id _delegate;
}

- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
@property id delegate;
- (void)subResponderWasChanged:(id)arg1;
@property(readonly, retain) NSView *currentSubResponder;

@end

