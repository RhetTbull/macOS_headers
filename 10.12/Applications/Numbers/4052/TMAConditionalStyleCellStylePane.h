//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class TMAInspectorValueIndicatingButton;

@interface TMAConditionalStyleCellStylePane : NSView
{
    BOOL _disclosed;
    TMAInspectorValueIndicatingButton *_styleButton;
    NSView *_customStyleView;
}

@property(nonatomic, getter=isDisclosed) BOOL disclosed; // @synthesize disclosed=_disclosed;
@property(nonatomic) NSView *customStyleView; // @synthesize customStyleView=_customStyleView;
@property(nonatomic) TMAInspectorValueIndicatingButton *styleButton; // @synthesize styleButton=_styleButton;
- (double)tma_inspectorPaneHeight;

@end

