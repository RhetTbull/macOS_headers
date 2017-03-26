//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSLayoutConstraint, NSTextField, NSView;

@interface IPXMusicPickerAlbumCellView : NSTableCellView
{
    BOOL _useVisualEffects;
    NSLayoutConstraint *_leftConstraint;
    NSLayoutConstraint *_rightConstraint;
    NSTextField *_subTitleTextField;
    NSView *_topLine;
    NSView *_bottomLine;
}

+ (id)mediumTextAttributesOfSize:(double)arg1 color:(id)arg2;
+ (id)lightTextAttributesOfSize:(double)arg1 color:(id)arg2;
@property __weak NSView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property __weak NSView *topLine; // @synthesize topLine=_topLine;
@property __weak NSTextField *subTitleTextField; // @synthesize subTitleTextField=_subTitleTextField;
@property __weak NSLayoutConstraint *rightConstraint; // @synthesize rightConstraint=_rightConstraint;
@property __weak NSLayoutConstraint *leftConstraint; // @synthesize leftConstraint=_leftConstraint;
- (void).cxx_destruct;
- (id)audioAlbum;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)allowsVibrancy;
- (BOOL)isOpaque;
@property BOOL useVisualEffects;
- (void)dealloc;
- (void)awakeFromNib;

@end

