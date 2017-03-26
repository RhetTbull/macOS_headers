//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CALUserAction : NSObject
{
    NSMutableDictionary *_userData;
    BOOL _activated;
    int _ID;
    BOOL _cantStartOtherActionUntilFinished;
}

+ (id)syncOnlyBlockingUserAction;
+ (id)userAction;
- (void).cxx_destruct;
- (void)setCantStartOtherActionUntilFinished:(BOOL)arg1;
- (BOOL)cantStartOtherActionUntilFinished;
- (id)userData;
- (BOOL)mayBreakEventsStream;
- (void)interruptAction;
- (void)endAction;
- (void)startAction;
- (void)setID:(int)arg1;
- (int)ID;
- (id)initWithUserActionID:(int)arg1;

@end

