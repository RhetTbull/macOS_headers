//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertController.h>

@class SKStarRatingControl, UIAlertAction;

@interface SKStarRatingAlertController : UIAlertController
{
    SKStarRatingControl *_ratingControl;
    UIAlertAction *_submitAction;
    CDUnknownBlockType _completion;
}

+ (id)starRatingAlertController;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)_updateButtonState;
- (void)_ratingControlChanged:(id)arg1;
@property(nonatomic) float rating;
- (void)dealloc;
- (void)setupActionsWithBundle:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

