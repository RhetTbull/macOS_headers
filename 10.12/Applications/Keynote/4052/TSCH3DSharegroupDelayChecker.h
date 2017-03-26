//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSCHUnretainedParent-Protocol.h"

@protocol TSCH3DSharegroupDelayCheckerParent;

@interface TSCH3DSharegroupDelayChecker : NSObject <TSCHUnretainedParent>
{
    BOOL mCondition;
    id <TSCH3DSharegroupDelayCheckerParent> mParent;
}

@property(nonatomic) BOOL condition; // @synthesize condition=mCondition;
- (void)p_checkCondition;
- (void)invalidateCondition;
- (void)p_cancelCheckCondition;
- (void)scheduleCheckCondition;
- (void)p_scheduleCheckConditionOnMainThread;
- (void)clearParent;
- (void)dealloc;
- (id)initWithParent:(id)arg1;

@end

