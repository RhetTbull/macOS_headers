//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GRMustacheContext, GRMustacheTag, NSString;

@protocol GRMustacheRendering <NSObject>
- (NSString *)renderForMustacheTag:(GRMustacheTag *)arg1 context:(GRMustacheContext *)arg2 HTMLSafe:(char *)arg3 error:(id *)arg4;

@optional
@property(readonly, nonatomic) BOOL mustacheBoolValue;
@end

