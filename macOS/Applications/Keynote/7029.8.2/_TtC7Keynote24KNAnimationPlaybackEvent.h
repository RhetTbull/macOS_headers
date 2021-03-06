//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KNSlideNode, NSString;

@interface _TtC7Keynote24KNAnimationPlaybackEvent : NSObject
{
    // Error parsing type: , name: playbackEventStruct
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(void *)arg1;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) double minInitialAnimationDelay;
@property(nonatomic, readonly) BOOL shouldIgnoreInitialAnimationDelay;
@property(nonatomic, readonly) BOOL shouldAnimate;
@property(nonatomic, readonly) KNSlideNode *nextSlideNode;
@property(nonatomic, readonly) unsigned long long eventIndex;
@property(nonatomic, readonly) KNSlideNode *slideNode;
- (id)initWithAnimationFromSlideNode:(id)arg1 eventIndex:(unsigned long long)arg2 nextSlideNode:(id)arg3 shouldIgnoreInitialAnimationDelay:(BOOL)arg4 minInitialAnimationDelay:(double)arg5;
- (id)initWithAnimationFromSlideNode:(id)arg1 eventIndex:(unsigned long long)arg2 nextSlideNode:(id)arg3;
- (id)initWithSlideNode:(id)arg1 eventIndex:(unsigned long long)arg2;
- (id)initWithSlideNode:(id)arg1 eventIndex:(unsigned long long)arg2 nextSlideNode:(id)arg3 shouldAnimate:(BOOL)arg4 shouldIgnoreInitialAnimationDelay:(BOOL)arg5 minInitialAnimationDelay:(double)arg6;

@end

