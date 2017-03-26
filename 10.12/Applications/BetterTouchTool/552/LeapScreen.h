//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LeapVector;

__attribute__((visibility("hidden")))
@interface LeapScreen : NSObject
{
    struct Screen *_interfaceScreen;
}

+ (id)invalid;
- (void)dealloc;
- (BOOL)equals:(id)arg1;
@property(readonly, nonatomic, getter=isValid) BOOL isValid;
- (float)distanceToPoint:(id)arg1;
@property(readonly, nonatomic, getter=heightPixels) int heightPixels;
@property(readonly, nonatomic, getter=widthPixels) int widthPixels;
@property(readonly, nonatomic, getter=normal) LeapVector *normal;
@property(readonly, nonatomic, getter=bottomLeftCorner) LeapVector *bottomLeftCorner;
@property(readonly, nonatomic, getter=verticalAxis) LeapVector *verticalAxis;
@property(readonly, nonatomic, getter=horizontalAxis) LeapVector *horizontalAxis;
- (id)project:(id)arg1 normalize:(BOOL)arg2 clampRatio:(float)arg3;
- (id)intersect:(id)arg1 direction:(id)arg2 normalize:(BOOL)arg3 clampRatio:(float)arg4;
- (id)intersect:(id)arg1 normalize:(BOOL)arg2 clampRatio:(float)arg3;
@property(readonly, nonatomic, getter=id) int id;
- (void *)interfaceScreen;
- (id)description;
- (id)initWithScreen:(void *)arg1;

@end

