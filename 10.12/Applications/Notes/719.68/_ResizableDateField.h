//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

@class NSArray;

@interface _ResizableDateField : NSTextField
{
    NSArray *_formattedDateStrings;
}

@property(copy, nonatomic) NSArray *formattedDateStrings; // @synthesize formattedDateStrings=_formattedDateStrings;
- (void).cxx_destruct;
- (void)setDate:(id)arg1;
- (void)updateStringValue;
- (void)setFrameSize:(struct CGSize)arg1;

@end

