//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCondition;

@interface TSUFastReadInvalidatingCache : NSObject
{
    CDUnknownBlockType mGenerator;
    // Error parsing type: A@, name: mValue
    // Error parsing type: Aq, name: mReaderCount
    // Error parsing type: A@, name: mToDispose
    BOOL mReentrant;
    NSCondition *mCondition;
    BOOL mIsGenerating;
}

- (void)invalidate;
- (id)value;
- (void)p_setValue:(id)arg1;
- (void)dealloc;
- (id)initForReentrant:(BOOL)arg1 withGenerator:(CDUnknownBlockType)arg2;

@end

