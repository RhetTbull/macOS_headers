//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MSACLogger : NSObject
{
}

+ (void)setIsUserDefinedLogLevel:(BOOL)arg1;
+ (BOOL)isUserDefinedLogLevel;
+ (void)logMessage:(CDUnknownBlockType)arg1 level:(unsigned long long)arg2 tag:(id)arg3 file:(const char *)arg4 function:(const char *)arg5 line:(unsigned int)arg6;
+ (void)setLogHandler:(CDUnknownBlockType)arg1;
+ (void)setCurrentLogLevel:(unsigned long long)arg1;
+ (CDUnknownBlockType)logHandler;
+ (unsigned long long)currentLogLevel;
+ (void)initialize;

@end

