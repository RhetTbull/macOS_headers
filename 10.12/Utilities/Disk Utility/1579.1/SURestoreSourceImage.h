//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SURestoreSourceItem.h"

@class NSURL;

@interface SURestoreSourceImage : SURestoreSourceItem
{
    NSURL *_imageURL;
}

@property(retain) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
- (id)representedImageURL;
- (id)initWithImageFileURL:(id)arg1;

@end

