//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "HSTracker.CardBar.h"

@class NSColor, NSString;

@interface HSTracker.ClassicBar : HSTracker.CardBar
{
    // Error parsing type: , name: _fadeRect
    // Error parsing type: , name: _imageRect
    // Error parsing type: , name: _costRect
}

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)addCost;
- (void)addCardImage;
- (void)addFadeOverlay;
- (void)addCardName;
- (void)initVars;
@property(nonatomic, readonly) NSString *themeDir;
@property(nonatomic, readonly) NSColor *flashColor;
@property(nonatomic, readonly) NSString *textFont;

@end

