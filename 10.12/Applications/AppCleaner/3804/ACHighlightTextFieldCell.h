//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSColor;

@interface ACHighlightTextFieldCell : NSTextFieldCell
{
    NSColor *_originalTextColor;
}

@property(retain, nonatomic) NSColor *originalTextColor; // @synthesize originalTextColor=_originalTextColor;
- (void).cxx_destruct;
- (void)updateTextColor;
- (void)setEnabled:(BOOL)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (id)initWithCoder:(id)arg1;

@end

