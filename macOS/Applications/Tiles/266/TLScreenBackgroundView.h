//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSImage;

@interface TLScreenBackgroundView : NSView
{
    NSImage *_backgroundImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
- (void)drawRect:(struct CGRect)arg1;
- (id)resizeImage:(id)arg1;
- (id)desktopWallpaper;
- (void)setDefaultBackgroundImage;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

