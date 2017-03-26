//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GRMustacheFilter-Protocol.h"
#import "GRMustacheRendering-Protocol.h"
#import "GRMustacheTagDelegate-Protocol.h"

@class NSString;

@interface GRMustacheURLEscapeFilter : NSObject <GRMustacheFilter, GRMustacheRendering, GRMustacheTagDelegate>
{
}

- (id)escape:(id)arg1;
- (id)mustacheTag:(id)arg1 willRenderObject:(id)arg2;
- (id)renderForMustacheTag:(id)arg1 context:(id)arg2 HTMLSafe:(char *)arg3 error:(id *)arg4;
- (id)transformedValue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL mustacheBoolValue;
@property(readonly) Class superclass;

@end

