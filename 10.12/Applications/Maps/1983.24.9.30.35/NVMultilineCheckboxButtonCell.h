//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButtonCell.h>

@class NVMultilineCheckboxLabel;

__attribute__((visibility("hidden")))
@interface NVMultilineCheckboxButtonCell : NSButtonCell
{
    NVMultilineCheckboxLabel *_labelView;
}

@property(nonatomic) __weak NVMultilineCheckboxLabel *labelView; // @synthesize labelView=_labelView;
- (void).cxx_destruct;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;

@end

