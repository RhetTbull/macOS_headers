//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSApplication/TMAColorView.h>

@interface KNMacPresenterDisplayReadyIndicator : TMAColorView
{
    BOOL _indicatingNotReady;
}

@property(nonatomic, getter=isIndicatingNotReady) BOOL indicatingNotReady; // @synthesize indicatingNotReady=_indicatingNotReady;
- (void)p_updateIndicatorColor;
- (struct CGSize)intrinsicContentSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

