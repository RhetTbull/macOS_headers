//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSDebugResponderChainItem : NSObject
{
    void *_address;
    NSString *_className;
    NSString *_responderDescription;
}

@property(copy) NSString *responderDescription; // @synthesize responderDescription=_responderDescription;
@property(copy) NSString *className; // @synthesize className=_className;
@property void *address; // @synthesize address=_address;
- (void)dealloc;
@property(readonly) NSString *prettyDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

