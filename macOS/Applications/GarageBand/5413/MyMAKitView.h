//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MAToolKit/MAKitView.h>

@class MANinePartImageSet, NSView;

@interface MyMAKitView : MAKitView
{
    MANinePartImageSet *_backgroundImage;
    id _delegate;
    NSView *_currentSubResponder;
}

- (void).cxx_destruct;
@property(nonatomic) NSView *currentSubResponder; // @synthesize currentSubResponder=_currentSubResponder;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)wantsUpdateLayer;
- (void)resetCursorRects;
- (void)keyDown:(id)arg1;
- (void)subResponderWasChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

