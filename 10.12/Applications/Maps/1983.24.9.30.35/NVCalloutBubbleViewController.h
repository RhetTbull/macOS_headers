//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class MKMapItem, _MKUILabel;

__attribute__((visibility("hidden")))
@interface NVCalloutBubbleViewController : NSViewController
{
    MKMapItem *_mapItem;
    _MKUILabel *_starRating;
}

@property(nonatomic) __weak _MKUILabel *starRating; // @synthesize starRating=_starRating;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

