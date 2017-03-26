//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDictionary, NSTimer;

__attribute__((visibility("hidden")))
@interface MATrackingArea : NSObject <NSCopying, NSCoding>
{
    struct CGRect _rect;
    long long _options;
    id _owner;
    NSDictionary *_userInfo;
    struct CGPoint _lastMovedPoint;
    BOOL _inside;
    NSTimer *_pollingTimer;
}

+ (id)trackingAreasForView:(id)arg1;
+ (void)removeTrackingArea:(id)arg1 fromView:(id)arg2;
+ (void)removeAllTrackingAreas;
+ (void)addTrackingArea:(id)arg1 toView:(id)arg2;
+ (void)checkMouseLocation:(id)arg1;
+ (void)stopPolling;
+ (void)startPolling;
+ (void)initialize;
@property(retain, nonatomic) NSTimer *pollingTimer; // @synthesize pollingTimer=_pollingTimer;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setNotInside;
- (void)_setInside:(BOOL)arg1;
- (BOOL)_inside;
- (void)_setLastMovedPoint:(struct CGPoint)arg1;
- (struct CGPoint)_lastMovedPoint;
- (id)userInfo;
- (id)owner;
- (long long)options;
- (void)setRect:(struct CGRect)arg1;
- (struct CGRect)rect;
- (void)dealloc;
- (id)initWithRect:(struct CGRect)arg1 options:(long long)arg2 owner:(id)arg3 userInfo:(id)arg4;

@end

