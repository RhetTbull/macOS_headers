//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButton.h>

#import "ICSupplementalView-Protocol.h"

@class ICTrackedParagraph, NSImageView, NSTrackingArea;

@interface ICTodoButton : NSButton <ICSupplementalView>
{
    BOOL _done;
    ICTrackedParagraph *_trackedParagraph;
    double _zoomFactor;
    struct NSImageView *_undoneImageView;
    struct NSImageView *_doneImageView;
    NSTrackingArea *_cursorTrackingArea;
    struct CGSize _defaultSize;
    struct CGSize _defaultImageSize;
}

@property(retain) NSTrackingArea *cursorTrackingArea; // @synthesize cursorTrackingArea=_cursorTrackingArea;
@property(retain) NSImageView *doneImageView; // @synthesize doneImageView=_doneImageView;
@property(retain) NSImageView *undoneImageView; // @synthesize undoneImageView=_undoneImageView;
@property(nonatomic) struct CGSize defaultImageSize; // @synthesize defaultImageSize=_defaultImageSize;
@property(nonatomic) struct CGSize defaultSize; // @synthesize defaultSize=_defaultSize;
@property(nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;
@property(nonatomic) __weak ICTrackedParagraph *trackedParagraph; // @synthesize trackedParagraph=_trackedParagraph;
@property(nonatomic, getter=isDone) BOOL done; // @synthesize done=_done;
- (void).cxx_destruct;
- (void)setDone:(BOOL)arg1 animated:(BOOL)arg2;
- (id)init;
- (id)viewIdentifier;
- (void)mouseMoved:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)updateTrackingAreas;
- (void)setFrame:(struct CGRect)arg1 leftToRight:(BOOL)arg2;
- (void)updateImagesAnimated:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)applyImageNamed:(id)arg1 withTint:(struct NSColor *)arg2 forImageView:(struct NSImageView *)arg3;
- (struct CGSize)sizeForLetterpressedImage;
- (id)initWithFrame:(struct CGRect)arg1;

@end

