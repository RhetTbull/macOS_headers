//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "KNRemoteMessage.h"

@class TSUColor;

@interface KNRemoteTelestratorDrawBeginMessage : KNRemoteMessage
{
    TSUColor *_color;
    double _timestamp;
    struct CGPoint _point;
}

@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, retain, nonatomic) TSUColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) struct CGPoint point; // @synthesize point=_point;
- (id)dictionaryForProtocolVersion:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 binaryData:(id)arg2 protocolVersion:(unsigned long long)arg3;
- (id)initWithColor:(id)arg1 point:(struct CGPoint)arg2 timestamp:(double)arg3;
- (unsigned long long)messageID;

@end

