//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OAITDrawableContainer.h"

@class NSObject;
@protocol TSDMutableContainerInfo;

@interface OAITNativeDrawableContainer : OAITDrawableContainer
{
    NSObject<TSDMutableContainerInfo> *mNativeContainer;
}

- (void).cxx_destruct;
- (void)replaceDrawables:(id)arg1 withDrawableArrays:(id)arg2;
- (id)drawableAtIndex:(unsigned long long)arg1;
- (unsigned long long)drawableCount;
- (void)addDrawable:(id)arg1;
- (id)nativeContainer;
- (id)initWithParentContainer:(id)arg1 nativeContainer:(id)arg2;

@end

