//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDLayoutManipulatingTracker-Protocol.h"
#import "TSDRepTracker-Protocol.h"

@class NSString, TSDImageRep;
@protocol TSDRepTrackerDelegate;

@interface TSDMaskResizeTracker : NSObject <TSDRepTracker, TSDLayoutManipulatingTracker>
{
    TSDImageRep *mImageRep;
    double mSliderValue;
    struct CGPoint mCenterInParentSpace;
    id <TSDRepTrackerDelegate> mDelegate;
}

@property(nonatomic) double sliderValue; // @synthesize sliderValue=mSliderValue;
- (BOOL)traceIfDesiredForEndOperation;
- (BOOL)traceIfDesiredForBeginOperation;
- (BOOL)supportsAlignmentGuides;
- (void)commitChangesForReps:(id)arg1;
- (void)changeDynamicLayoutsForReps:(id)arg1;
- (BOOL)shouldOpenCommandGroupToCommitChangesForReps:(id)arg1;
- (BOOL)operationShouldBeDynamic;
- (void)willBeginDynamicOperationForReps:(id)arg1;
@property(nonatomic) BOOL isInspectorDrivenTracking;
- (struct CGAffineTransform)transformForImageKnobPosition;
- (struct CGAffineTransform)p_currentResizeTransform;
- (void)dealloc;
- (id)initWithImageRep:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

