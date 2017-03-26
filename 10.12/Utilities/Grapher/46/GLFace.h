//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GLObject.h"

@class NSMutableArray;

@interface GLFace : GLObject
{
    NSMutableArray *mVertices;
    long long mCount;
    struct _GPoint3D mNormal;
}

- (struct _GRect3D)bounds3D;
- (struct _GPoint3D)normal;
- (void)updateNormal;
- (id)vertices;
- (struct _GPoint3D)center;
- (void)glDraw;
- (void)render;
- (void)addVertex:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

