//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSColor;

__attribute__((visibility("hidden")))
@interface BSTColorButton : NSButton
{
    NSColor *innerBackgroundColor;
}

@property(retain, nonatomic) NSColor *innerBackgroundColor; // @synthesize innerBackgroundColor;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

