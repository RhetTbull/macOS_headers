//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface TSDGLStateSnapshot : NSObject <NSCopying>
{
    unsigned int _currentGL_ACTIVE_TEXTURE;
    CDStruct_bf95b13b _currentGL_VIEWPORT;
}

@property(nonatomic) CDStruct_bf95b13b currentGL_VIEWPORT; // @synthesize currentGL_VIEWPORT=_currentGL_VIEWPORT;
@property(nonatomic) unsigned int currentGL_ACTIVE_TEXTURE; // @synthesize currentGL_ACTIVE_TEXTURE=_currentGL_ACTIVE_TEXTURE;
- (void)validateCurrentStateInGetter;
- (void)validateCurrentState;
- (void)validateGL_VIEWPORT;
- (void)validateGL_ACTIVE_TEXTURE;
- (void)updateWithGLStateSnapshot:(id)arg1;
- (void)updateWithCurrentGLState;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCurrentGLState;

@end

