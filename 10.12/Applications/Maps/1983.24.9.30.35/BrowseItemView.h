//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class BrowseCategory, MKImageView, NSLayoutConstraint, NSString, _MKUILabel;
@protocol BrowseItemViewDelegate;

__attribute__((visibility("hidden")))
@interface BrowseItemView : NSView
{
    NSString *_name;
    NSString *_alternativeName;
    BOOL _startEvent;
    MKImageView *_overlay;
    BOOL _directionMode;
    id <BrowseItemViewDelegate> _delegate;
    _MKUILabel *_titleLabel;
    MKImageView *_imageView;
    BrowseCategory *_item;
    NSLayoutConstraint *_leftConstraint;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_leftImageConstraint;
    NSLayoutConstraint *_topImageConstraint;
    NSLayoutConstraint *_widthConstraint;
    double _leftDeltaForAnimation;
    double _topDeltaForAnimation;
    MKImageView *_imageViewAnimated;
}

@property(retain, nonatomic) MKImageView *imageViewAnimated; // @synthesize imageViewAnimated=_imageViewAnimated;
@property(nonatomic) double topDeltaForAnimation; // @synthesize topDeltaForAnimation=_topDeltaForAnimation;
@property(nonatomic) double leftDeltaForAnimation; // @synthesize leftDeltaForAnimation=_leftDeltaForAnimation;
@property(retain, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topImageConstraint; // @synthesize topImageConstraint=_topImageConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leftImageConstraint; // @synthesize leftImageConstraint=_leftImageConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leftConstraint; // @synthesize leftConstraint=_leftConstraint;
@property(retain, nonatomic) BrowseCategory *item; // @synthesize item=_item;
@property(retain, nonatomic) MKImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) _MKUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <BrowseItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BOOL directionMode; // @synthesize directionMode=_directionMode;
- (void).cxx_destruct;
- (void)createSubviews;
- (id)initWithDirectionMode:(BOOL)arg1;
- (void)pushImage:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateTheme;
- (void)mouseUp:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;

@end

