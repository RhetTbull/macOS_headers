//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSScrubberDataSource-Protocol.h"
#import "NSScrubberDelegate-Protocol.h"

@class NSCustomTouchBarItem, NSScrubber, NSString;
@protocol PVDFRActionTarget;

@interface PVDFRHighlightsController : NSObject <NSScrubberDataSource, NSScrubberDelegate>
{
    NSCustomTouchBarItem *_touchBarItem;
    NSScrubber *_scrubber;
    id <PVDFRActionTarget> _delegate;
}

@property __weak id <PVDFRActionTarget> delegate; // @synthesize delegate=_delegate;
@property(retain) NSScrubber *scrubber; // @synthesize scrubber=_scrubber;
@property(retain) NSCustomTouchBarItem *touchBarItem; // @synthesize touchBarItem=_touchBarItem;
- (void).cxx_destruct;
- (void)scrubber:(id)arg1 didPressSelectedItemAtIndex:(long long)arg2;
- (void)scrubber:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (id)scrubber:(id)arg1 viewForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsForScrubber:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

