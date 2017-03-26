//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

@interface TMARoundedCornerView : NSView
{
    NSColor *_backgroundColor;
    double _cornerRadius;
    double _borderWidth;
    NSColor *_borderColor;
}

@property(copy, nonatomic) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property(copy, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

