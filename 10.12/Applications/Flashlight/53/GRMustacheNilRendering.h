//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GRMustacheRenderingWithIterationSupport-Protocol.h"

@class NSString;

@interface GRMustacheNilRendering : NSObject <GRMustacheRenderingWithIterationSupport>
{
}

- (id)renderForMustacheTag:(id)arg1 asEnumerationItem:(BOOL)arg2 context:(id)arg3 HTMLSafe:(char *)arg4 error:(id *)arg5;
- (id)renderForMustacheTag:(id)arg1 context:(id)arg2 HTMLSafe:(char *)arg3 error:(id *)arg4;
@property(readonly, nonatomic) BOOL mustacheBoolValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

