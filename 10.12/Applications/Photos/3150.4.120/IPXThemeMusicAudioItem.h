//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXAudioItem.h"

@class OMSlideshowTheme;

@interface IPXThemeMusicAudioItem : IPXAudioItem
{
    OMSlideshowTheme *_theme;
    double _duration;
}

- (void).cxx_destruct;
- (long long)trackNumber;
- (id)identifier;
- (id)url;
- (double)duration;
- (id)album;
- (id)artist;
- (id)name;
- (id)initWithTheme:(id)arg1;

@end

