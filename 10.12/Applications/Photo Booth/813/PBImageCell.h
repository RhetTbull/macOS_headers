//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ImageKit/IKImageBrowserCell.h>

@interface PBImageCell : IKImageBrowserCell
{
    BOOL deleteButtonClicked;
    BOOL hidden;
}

@property BOOL hidden; // @synthesize hidden;
- (id)window;
- (BOOL)selected;
- (id)asset;
- (void)drawPlaceHolder;
- (void)drawOverlays;
- (void)drawSelection;
- (struct CGRect)deleteButtonFrame;
- (void)mouseEntered:(id)arg1;
- (BOOL)wantsRollover;
- (struct CGRect)imageFrame;
- (double)opacity;
@property BOOL deleteButtonClicked;

@end

