//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "EInputView.h"

@class EQCaption;

@interface ESingleInput : EInputView
{
    EQCaption *mCaption;
    id mValue;
    id mValueStepper;
}

- (void)evaluate:(id)arg1;
- (id)value:(unsigned long long)arg1;
- (id)caption:(unsigned long long)arg1;

@end

