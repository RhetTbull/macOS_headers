//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class TSCH3DSceneObject;

@interface TSCH3DPickedPoint : NSObject <NSCopying>
{
    tvec2_3b141483 mElement;
    TSCH3DSceneObject *mSceneObject;
    tvec3_17f03ce0 mObjectSpacePoint;
    tvec2_84d5962d mCenterProjectionPoint;
    tmat4x4_3074befe mProjection;
    tmat4x4_3074befe mTransform;
}

+ (id)pickedPointWithSceneObject:(id)arg1 element:(const tvec2_3b141483 *)arg2 projection:(const tmat4x4_3074befe *)arg3 transform:(const tmat4x4_3074befe *)arg4 objectSpacePoint:(const tvec3_17f03ce0 *)arg5 centerProjectionPoint:(const tvec2_84d5962d *)arg6;
@property(readonly, retain, nonatomic) TSCH3DSceneObject *sceneObject; // @synthesize sceneObject=mSceneObject;
@property(readonly, nonatomic) tmat4x4_3074befe transform; // @synthesize transform=mTransform;
@property(readonly, nonatomic) tmat4x4_3074befe projection; // @synthesize projection=mProjection;
@property(readonly, nonatomic) tvec2_84d5962d centerProjectionPoint; // @synthesize centerProjectionPoint=mCenterProjectionPoint;
@property(readonly, nonatomic) tvec3_17f03ce0 objectSpacePoint; // @synthesize objectSpacePoint=mObjectSpacePoint;
@property(readonly, nonatomic) tvec2_3b141483 element; // @synthesize element=mElement;
- (id).cxx_construct;
@property(readonly, nonatomic) tvec3_17f03ce0 cameraSpacePoint;
- (void)clearParent;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithSceneObject:(id)arg1 element:(const tvec2_3b141483 *)arg2 projection:(const tmat4x4_3074befe *)arg3 transform:(const tmat4x4_3074befe *)arg4 objectSpacePoint:(const tvec3_17f03ce0 *)arg5 centerProjectionPoint:(const tvec2_84d5962d *)arg6;

@end

