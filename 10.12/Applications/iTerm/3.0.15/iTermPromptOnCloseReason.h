//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface iTermPromptOnCloseReason : NSObject
{
    NSNumber *_priority;
}

+ (id)groupFooter;
+ (id)closingMultipleSessionsPreferenceEnabled;
+ (id)alwaysConfirmQuitPreferenceEnabled;
+ (id)profile:(id)arg1 blockedByJobs:(id)arg2;
+ (id)profileAlwaysPrompts:(id)arg1;
+ (id)noReason;
@property(readonly, nonatomic) NSNumber *priority; // @synthesize priority=_priority;
- (void)addReason:(id)arg1;
@property(readonly, nonatomic) NSString *message;
@property(readonly, nonatomic) BOOL hasReason;

@end

