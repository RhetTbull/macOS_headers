//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSButton;

@interface KNMacEffectButtonAttributeView : NSView
{
    NSButton *mButtonView;
    double mPreferredHeight;
}

+ (id)customButtonAttributeViewWithButton:(id)arg1;
+ (id)standardButtonAttributeView;
@property(nonatomic) double preferredHeight; // @synthesize preferredHeight=mPreferredHeight;
@property(readonly, nonatomic) NSButton *buttonView; // @synthesize buttonView=mButtonView;
- (double)tma_inspectorPaneHeight;
- (id)initWithButton:(id)arg1;
- (void)dealloc;

@end

