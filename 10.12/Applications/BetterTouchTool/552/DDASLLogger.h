//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "DDAbstractLogger.h"

#import "DDLogger-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface DDASLLogger : DDAbstractLogger <DDLogger>
{
    struct __asl_object_s *client;
}

+ (id)sharedInstance;
+ (void)initialize;
- (id)loggerName;
- (void)logMessage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

