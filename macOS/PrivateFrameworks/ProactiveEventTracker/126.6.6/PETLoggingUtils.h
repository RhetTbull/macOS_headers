//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PETLoggingUtils : NSObject
{
}

+ (id)messageKeyStringForKey:(id)arg1;
+ (id)domainStringForEvent:(id)arg1 featureId:(id)arg2;
+ (void)_pushToBuffer:(id)arg1 keyStringForStringifiedPairs:(id)arg2;
+ (id)keyStringForStringifiedPairs:(id)arg1;
+ (id)keyStringForEvent:(id)arg1 featureId:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4;

@end

