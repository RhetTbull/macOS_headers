//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "RoutePickingCell.h"

@class NSString, _MKUILabel;

__attribute__((visibility("hidden")))
@interface NVVerticallyAlignedTextViewCell : RoutePickingCell
{
    _MKUILabel *_textField;
    NSString *_text;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)_updateLabelsFont;
- (void)setBackgroundStyle:(long long)arg1;
- (id)_autolayoutConstraints;
- (void)_createSubviews;
- (id)init;

@end

