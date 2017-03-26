//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol TSKMailboxNetworkChannelResponder;

@interface TSKMailboxNetworkChannel : NSObject
{
    id <TSKMailboxNetworkChannelResponder> _responder;
    BOOL _isConnected;
    BOOL _push;
    NSString *_name;
}

@property(readonly, nonatomic) BOOL push; // @synthesize push=_push;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) BOOL isConnected; // @synthesize isConnected=_isConnected;
- (id)logDescription;
- (void)channelDidErrorWithCode:(unsigned long long)arg1 message:(id)arg2;
- (void)abort;
- (void)close;
- (void)receive:(id)arg1;
- (void)connected;
- (void)send:(id)arg1 seq:(int)arg2 sessionId:(id)arg3;
- (void)dealloc;
- (id)initWithName:(id)arg1 push:(BOOL)arg2 responder:(id)arg3;

@end

