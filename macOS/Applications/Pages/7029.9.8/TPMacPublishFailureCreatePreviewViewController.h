//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TPMacPublishPageWithBookPreviewViewController.h"

@class NSString, TSUImage;

@interface TPMacPublishFailureCreatePreviewViewController : TPMacPublishPageWithBookPreviewViewController
{
    TSUImage *_bookImage;
    NSString *_bookTitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *bookTitle; // @synthesize bookTitle=_bookTitle;
@property(retain, nonatomic) TSUImage *bookImage; // @synthesize bookImage=_bookImage;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithBookImage:(id)arg1 bookTitle:(id)arg2;

@end

