//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Mondrian/MOMediaViewDefaultCell.h>

@class CAShapeLayer, NSTextField;

@interface IPXEditorialPeopleItemCell : MOMediaViewDefaultCell
{
    BOOL _userInteractionEnabled;
    double _cornerRadius;
    CAShapeLayer *_maskLayer;
    NSTextField *_textLabel;
}

+ (id)newLabel;
@property(readonly, nonatomic) NSTextField *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) BOOL userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
- (void).cxx_destruct;
- (BOOL)_canFitToHeight:(double)arg1 width:(double)arg2 textLabel:(id)arg3;
- (id)nameStringForPeople:(id)arg1 width:(double)arg2;
- (BOOL)acceptsFirstResponder;
- (id)hitTest:(struct CGPoint)arg1;
- (void)updateWithMediaItem:(id)arg1;
- (void)layoutSubviews;
- (struct CGRect)thumbnailViewFrame;
- (double)defaultSelectedIndicationCornerRadius;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

