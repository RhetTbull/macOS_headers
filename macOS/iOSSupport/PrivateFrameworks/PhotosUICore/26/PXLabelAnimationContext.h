//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UILabel;

@interface PXLabelAnimationContext : NSObject
{
    UILabel *_label;
    struct CGRect _destinationRect;
}

- (void).cxx_destruct;
@property struct CGRect destinationRect; // @synthesize destinationRect=_destinationRect;
@property(retain) UILabel *label; // @synthesize label=_label;
- (id)initWithLabel:(id)arg1 andDestinationRect:(struct CGRect)arg2;

@end

