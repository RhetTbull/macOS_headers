//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class MANinePartImageSet;

@interface ScFocusDrawView : NSView
{
    struct CGRect m_rect4;
    MANinePartImageSet *m_set4;
}

@property(nonatomic) MANinePartImageSet *m_set4; // @synthesize m_set4;
@property(nonatomic) struct CGRect m_rect4; // @synthesize m_rect4;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)focusDrawBounds:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initDefaults;

@end

