//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSKeyedUnarchiver, NSString;

@protocol iTermRestorableStateRecord <NSObject>
- (id <iTermRestorableStateRecord>)recordWithPayload:(id)arg1;
- (long long)windowNumber;
- (NSString *)identifier;
- (NSKeyedUnarchiver *)unarchiver;
- (void)didFinishRestoring;
@end

