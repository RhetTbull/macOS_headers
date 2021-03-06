//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface SFSiriClient : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)stopSpeaking;
- (void)speakText:(id)arg1 rate:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)speakText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_invalidate;
- (void)invalidate;
- (id)init;

@end

