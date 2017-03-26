//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPXTouchBarProvider-Protocol.h"

@class IPXOneupScrubberTouchBarViewController, IPXScrubberViewController, NSCustomTouchBarItem, NSString;
@protocol IPXOneupTouchBarDelegate;

@interface IPXOneupTouchBarController : NSObject <IPXTouchBarProvider>
{
    id <IPXOneupTouchBarDelegate> _delegate;
    IPXScrubberViewController *_scrubberViewController;
    IPXOneupScrubberTouchBarViewController *_oneupScrubberTouchBarViewController;
    NSCustomTouchBarItem *_scrubberRowItem;
}

@property(retain) NSCustomTouchBarItem *scrubberRowItem; // @synthesize scrubberRowItem=_scrubberRowItem;
@property(retain) IPXOneupScrubberTouchBarViewController *oneupScrubberTouchBarViewController; // @synthesize oneupScrubberTouchBarViewController=_oneupScrubberTouchBarViewController;
@property(nonatomic) __weak IPXScrubberViewController *scrubberViewController; // @synthesize scrubberViewController=_scrubberViewController;
@property(nonatomic) __weak id <IPXOneupTouchBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dumpView;
- (void)willLeaveOneupView;
- (void)scrubberSelectItemIdentifier:(id)arg1 animate:(BOOL)arg2;
- (void)scrubberSelectVersion:(id)arg1 animate:(BOOL)arg2;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)touchBarIdentifiers;
- (id)scrubberContainer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

