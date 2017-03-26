//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSImageView, NSTextField, _MKUILabel;
@protocol NVSideViewSearchResultCellViewDelegate;

__attribute__((visibility("hidden")))
@interface NVSideViewSearchResultCellView : NSTableCellView
{
    _MKUILabel *_starsRating;
    NSTextField *_reviewDetailText;
    id <NVSideViewSearchResultCellViewDelegate> _delegate;
    NSImageView *_pinImage;
    NSImageView *_altPinImage;
}

@property(nonatomic) __weak NSImageView *altPinImage; // @synthesize altPinImage=_altPinImage;
@property(nonatomic) __weak NSImageView *pinImage; // @synthesize pinImage=_pinImage;
@property(nonatomic) __weak id <NVSideViewSearchResultCellViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NSTextField *reviewDetailText; // @synthesize reviewDetailText=_reviewDetailText;
@property(nonatomic) __weak _MKUILabel *starsRating; // @synthesize starsRating=_starsRating;
- (void).cxx_destruct;
- (void)dealloc;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)viewDidMoveToWindow;
@property(readonly, nonatomic) BOOL hollow;
- (void)setBackgroundStyle:(long long)arg1;

@end

