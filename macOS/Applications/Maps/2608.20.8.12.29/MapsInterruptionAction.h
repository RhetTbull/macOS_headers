//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MapsInterruptionAction : NSObject
{
    BOOL _cancels;
    NSString *_title;
    CDUnknownBlockType _handler;
}

+ (id)actionWithTitle:(id)arg1 cancels:(BOOL)arg2 handler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) BOOL cancels; // @synthesize cancels=_cancels;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)fire;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

