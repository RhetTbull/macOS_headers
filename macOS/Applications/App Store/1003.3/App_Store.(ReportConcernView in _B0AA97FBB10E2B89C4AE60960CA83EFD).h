//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSTextViewDelegate-Protocol.h"

@interface App_Store.(ReportConcernView in _B0AA97FBB10E2B89C4AE60960CA83EFD) : NSView <NSTextViewDelegate>
{
    // Error parsing type: , name: action
    // Error parsing type: , name: reasonPopUpButton
    // Error parsing type: , name: explanationTextView
    // Error parsing type: , name: explanationScrollView
    // Error parsing type: , name: privacyLabel
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)jet_traitCollectionDidChange:(id)arg1;
- (struct JEMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;
- (void)layout;
- (BOOL)isFlipped;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(nonatomic, readonly) BOOL flipped;

@end

