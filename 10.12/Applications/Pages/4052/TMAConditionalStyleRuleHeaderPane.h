//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAGradientView.h"

@class NSButton, NSImageView;

@interface TMAConditionalStyleRuleHeaderPane : TMAGradientView
{
    BOOL mButtonsVisible;
    NSButton *_deleteButton;
    NSImageView *_reorderImage;
}

@property(nonatomic) NSImageView *reorderImage; // @synthesize reorderImage=_reorderImage;
@property(nonatomic) NSButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(nonatomic) BOOL buttonsVisible; // @synthesize buttonsVisible=mButtonsVisible;
- (void)viewDidMoveToSuperview;

@end

